/*
 *
 * \class StFpsQaMaker
 *
 */

#include "StFpsQaMaker.h"

#include "StRoot/StEvent/StEvent.h"
#include "StRoot/St_base/StMessMgr.h"
#include "StRoot/StEvent/StFmsCollection.h"
#include "StRoot/StEvent/StFmsHit.h"
#include "StRoot/StFmsDbMaker/StFmsDbMaker.h"
#include "StRoot/StSpinPool/StFpsRawDaqReader/StFpsRawDaqReader.h"

#include "TH1F.h"
#include "TH2F.h"
#include "TString.h"
#include "TFile.h"
#include "TCanvas.h"

#include <string.h>
#include <time.h>

StFpsQaMaker::StFpsQaMaker(const Char_t* name) : StMaker(name),mFmsDbMkr(0),mFmsCollectionPtr(0), mRun(0) {};

StFpsQaMaker::~StFpsQaMaker(){};

Int_t StFpsQaMaker::Init(){
  mFmsDbMkr = static_cast< StFmsDbMaker*>(GetMaker("fmsDb"));
  if(!mFmsDbMkr){
    LOG_FATAL << "Error finding StFmsDbMaker"<< endm;
    return kStFatal;
  }
  int yday=mRun/1000;
  sprintf(mFilename,"%d/%d.root",yday,mRun);
  printf("StFpsQaMaker::Init - Opening %s\n",mFilename);
  mFile=new TFile(mFilename,"RECREATE");
  char name[100];
  mDataSize[0] = new TH1F("TotalSize","TotalSize",100,-1.0,4.0);
  mDataSize[1] = new TH1F("DataSize","DataSize",100,-1.0,3.0);
  for(int i=0; i<mNPREPOST*2+1; i++){
    int x=i-mNPREPOST;
    sprintf(name,"Xing=%d",x);
    mXing[i] = new TH1F(name,name,100,0.0,300.0);
  }
  if(mPed==0){
    mAdc2[0] = new TH2F("Adc2", "Adc2", 252,0.0,252.0,64,0.0,4096.0);
    mAdc2[1] = new TH2F("Adc2z","Adc2z",252,0.0,252.0,50,0.0,200.0);
    for(int i=0; i<mNID; i++){
      sprintf(name,"ADC%03d",i);    
      mAdc[i][0]=new TH1F(name,name,128,0.0,4096.0);
      sprintf(name,"ADC%03dz",i);    
      mAdc[i][1]=new TH1F(name,name,150,0.0,300.0);
    }
  }else{
    mAdc2[0] = new TH2F("Adc2", "Adc2", 252,0.0,252.0, 100,64.0,4096.0);
    mAdc2[1] = new TH2F("Adc2z","Adc2z",252,0.0,252.0, 100,50.0,150.0);
    for(int i=0; i<mNID; i++){
      sprintf(name,"ADC%03d",i);    
      mAdc[i][0]=new TH1F(name,name,128,0.0,4096.0);
      sprintf(name,"ADC%03dz",i);    
      mAdc[i][1]=new TH1F(name,name,100,50.0,150.0);
    }
  }
  for(int q=0; q<mNQ; q++){
    for(int l=0; l<mNL; l++){
      sprintf(name,"NHIT_Q%1dL%1d",q+1,l+1);
      mNHit[q][l]=new TH1F(name,name,22,0.0,22.0);
      sprintf(name,"HIT_Q%1dL%1d",q+1,l+1);
      mHit[q][l]=new TH1F(name,name,21,0.5,21.5);
    }
  }
  for(int t=0; t<mNTRG+1; t++){
    sprintf(name,"NHIT_TRG%02d",t);
    mNHitTrg[t]=new TH1F(name,name,241,0.0,241.0);
  }
  sprintf(name,"NHIT_TRG");
  mNHitTrg2=new TH2F(name,name,241,0.0,241.0,64,0.0,64.0);
  return kStOK;
};

Int_t StFpsQaMaker::Make() {
  StEvent* eventPtr=0;
  mFmsCollectionPtr=0;
  eventPtr= (StEvent*)GetInputDS("StEvent");  
  if(!eventPtr) { LOG_INFO << "No StEvent found" << endm;}
  else{ mFmsCollectionPtr=eventPtr->fmsCollection();} 
  if(!mFmsCollectionPtr){
    LOG_INFO << "No StFmsCollection found" << endm;
    return kStErr;
  }
  int nhit=mFmsCollectionPtr->numberOfHits();
  StSPtrVecFmsHit hits = mFmsCollectionPtr->hits(); 
  //printf("StFpsQaMaker found %d hits\n",nhit);
  int nfpsdata=0;
  int nfpsdatatot=0;
  int nh[mNQ][mNL]; memset(nh,0,sizeof(nh));
  int nhtot=0;
  for (unsigned int i=0; i<nhit; i++){
    int det = hits[i]->detectorId();
    if(det==15){
      nfpsdatatot++;
      int xing=hits[i]->tdc(); if(xing>65536/2) xing-=65536;
      int adc=hits[i]->adc();
      int qt=hits[i]->qtSlot();
      int ch=hits[i]->qtChannel();      
      int slatid = mFmsDbMkr->fpsSlatidFromQT(qt,ch);
      int q,l,s;
      mFmsDbMkr->fpsQLSfromSlatId(slatid,&q,&l,&s);       
      if(q>0 && l>0 && s>0 && abs(xing)<=mNPREPOST) {
	mXing[xing+mNPREPOST]->Fill((float)adc);
	if(xing==0){
	  nfpsdata++;
	  mAdc2[0]->Fill((float)slatid,(float)adc);
	  mAdc2[1]->Fill((float)slatid,(float)adc);
	  mAdc[slatid][0]->Fill((float)adc);
	  mAdc[slatid][1]->Fill((float)adc);
	  if( (l!=3 && adc>50) || (l==3 && adc>25) ){
	    nhtot++;
	    nh[q-1][l-1]++; 
	    if(l==1 && (q==2 || q==4)){
	      mHit[q-1][l-1]->Fill(float(s+2));
	    }else{
	      mHit[q-1][l-1]->Fill(float(s));
	    }
	  }
	}
      }
      //hits[i]->print();      
    }
  }
  mDataSize[0]->Fill(log10(nfpsdatatot));
  mDataSize[1]->Fill(log10(nfpsdata));
  for(int q=0; q<mNQ; q++){
    for(int l=0; l<mNL; l++){
      mNHit[q][l]->Fill(float(nh[q][l]));
    }
  }  
  //total multiplicity by triggers
  mNHitTrg[64]->Fill(float(nhtot));
  unsigned long long one=1;
  StFpsRawDaqReader* fpsraw=(StFpsRawDaqReader*)GetMaker("fpsRawDaqReader");
  unsigned long long tmask = fpsraw->trgMask();
  for(int t=0; t<mNTRG; t++){
    if(tmask & (one<<t)) {
      mNHitTrg[t]->Fill(float(nhtot));
      mNHitTrg2->Fill(float(nhtot),float(t));
    }
  }
  //printf("NFMSHIT=%4d NFPSHITTOT=%4d NFPSHIT(xing=0)=%d\n",nhit,nfpsdatatot,nfpsdata); 
  return kStOK;
};

Int_t StFpsQaMaker::Finish(){
  /*
  mDataSize[0]->Write();
  mDataSize[1]->Write();
  for(int i=0; i<mNPREPOST*2+1; i++) mXing[i]->Write();
  mAdc2->Write();
  for(int i=0; i<mNID; i++) mAdc[i]->Write();
  */
  mFile->Write();
  mFile->Close();
  printf("StFpsQaMaker::Finish - Closing %s\n",mFilename);
  return kStOK;
};

ClassImp(StFpsQaMaker);

/*
 * $Id: StFpsQaMaker.cxx,v 1.3 2015/05/30 16:08:00 akio Exp $
 * $Log: StFpsQaMaker.cxx,v $
 * Revision 1.3  2015/05/30 16:08:00  akio
 * *** empty log message ***
 *
 * Revision 1.2  2015/02/28 02:55:35  akio
 * fix a bug
 *
 * Revision 1.1  2015/02/25 20:03:26  akio
 * new fps qa maker
 *
 */
