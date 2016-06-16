//
// Grant Webb
// August 18, 2015
// Creating the data and MC comparisons 


void MakeUEPlotsDeltaPhiDetectorParticle(int n=1, int p=0)
{
  TFile *embdfile[12];
  embdfile[1] = new TFile("/star/u/gdwebb/UE_CVS_Check/radius06/st_physics_detectorparticlelevel_4_5.uehists.root");
  embdfile[2] = new TFile("/star/u/gdwebb/UE_CVS_Check/radius06/st_physics_detectorparticlelevel_5_7.uehists.root");
  embdfile[3] = new TFile("/star/u/gdwebb/UE_CVS_Check/radius06/st_physics_detectorparticlelevel_7_9.uehists.root");
  embdfile[4] = new TFile("/star/u/gdwebb/UE_CVS_Check/radius06/st_physics_detectorparticlelevel_9_11.uehists.root");
  embdfile[5] = new TFile("/star/u/gdwebb/UE_CVS_Check/radius06/st_physics_detectorparticlelevel_11_15.uehists.root");
  embdfile[6] = new TFile("/star/u/gdwebb/UE_CVS_Check/radius06/st_physics_detectorparticlelevel_15_25.uehists.root");
  embdfile[7] = new TFile("/star/u/gdwebb/UE_CVS_Check/radius06/st_physics_detectorparticlelevel_25_35.uehists.root");
  embdfile[8] = new TFile("/star/u/gdwebb/UE_CVS_Check/radius06/st_physics_detectorparticlelevel_35_45.uehists.root");
  embdfile[9] = new TFile("/star/u/gdwebb/UE_CVS_Check/radius06/st_physics_detectorparticlelevel_45_55.uehists.root");
  embdfile[10] = new TFile("/star/u/gdwebb/UE_CVS_Check/radius06/st_physics_detectorparticlelevel_55_65.uehists.root");
  embdfile[11] = new TFile("/star/u/gdwebb/UE_CVS_Check/radius06/st_physics_detectorparticlelevel_65_75.uehists.root");
  embdfile[12] = new TFile("/star/u/gdwebb/UE_CVS_Check/radius06/st_physics_detectorparticlelevel_75_-1.uehists.root");

  const Int_t nbin=100;
  const Int_t rbin=4;
  const char trig[10] = "JP2";
  double Lumi[13];
  normalize(Lumi);
  switch(n)
    {
  
    case 1: // Number of Particles
      {
	char name[100]=Form("hDeltaLeadingJetPhi%s",trig);
	char name2[100]=Form("hDeltaLeadingJetPhi%s",trig);
	char name3[100]=Form("hDeltaLeadingJetPhi%s",trig);

	char embdname[100]=Form("deltaLeadingJetPhi%s",trig);
	char embdname2[100]=Form("deltaLeadingJetPhi%s",trig);
	char embdname3[100]=Form("deltaLeadingJetPhi%s",trig);

	char pname[100]=Form("deltaPhiLeadingJetParticleDetector.png",trig); 
	break;
      }
    

    }  
  if(n == 1){legend1 = new TLegend(0.42,0.38,0.86,0.66);}
  
 
  legend1->SetFillColor(0);
  legend1->SetBorderSize(0);
  gStyle->SetPalette(1);
  gStyle->SetOptStat(0);
  gStyle->SetOptDate(0);
  TCanvas *c1=new TCanvas("c1","c1",800,800);

  //---------------Embedding Histograms------------
  
  
  TH1F* comboEmbdHist = new TH1F(embdname,embdname,120,-3.14159,3.14159);  

  comboALL(embdfile,name,comboEmbdHist,Lumi);


 



  //------------------ Draw Histograms --------------
  legend1->SetHeader(Form("pp 500 GeV %s Trigger: ",trig));
  comboEmbdHist->SetTitle("");
  comboEmbdHist->Draw();
  //------Axis and Labelling---------------
  TAxis *x1 = comboEmbdHist->GetXaxis();
  TAxis *y1 = comboEmbdHist->GetYaxis();
  y1->CenterTitle();
 
  if(n ==1){x1->SetTitle("Leading Jet #Delta#phi = #Delta#phi_{detector} - #Delta#phi_{particle}");}
 
  //-----------------------------------

  // legend1->Draw(); 
 if(p==1){c1->Print(pname);}
}

void comboALL(TFile *t[12],char pta[100],TH1F *totH,double Norm[12]){
    
   
  Double_t XSEC=0.000000001447;//55
  const int lowP=1;
  TH1F *pt[13];
  for (int i=lowP;i<13;i++){
    pt[i]=(TH1F*) t[i]->Get(pta);
    //  pt[i]->Sumw2();
    // cout << "pt bin: " << i << " numEntries: "  <<  pt[i]->GetEntries() << endl;
    pt[i]->Scale(1.0/ Norm[i]);
    pt[i]->Scale(Norm[i]);
    totH->Add(pt[i]);
  }
}

void normalize(double Lumi[13]){
  double NumEvts[13]; 
  // Number of events for the inclusive jet embedding
  NumEvts[1] =981735; //4-5
  NumEvts[2] =492293; // 5-7
  NumEvts[3] =492293; // 7-9
  NumEvts[4] =492293; // 9-11
  NumEvts[5] = 443057;  // 11-15
  NumEvts[6] = 393837;  // 15-25
  NumEvts[7] = 389429;  // 25-35
  NumEvts[8] = 389128;  // 35-45
  NumEvts[9] = 98209;  // 45-55
  NumEvts[10] =24131;   // 55-65 
  NumEvts[11] =5906;    // 65-75
  NumEvts[12] =2957;    // 75--1
  
  Double_t Xsec[13];
  Double_t MinbXsec=31.42;
  Xsec[1]=1.482;//4
  Xsec[2]=0.7490;//5 
  Xsec[3]=0.1551;//7
  Xsec[4]=0.0450;//9
  Xsec[5]=0.02211;//11
  Xsec[6]=0.005710;//15
  Xsec[7]=0.0003425;//25
  Xsec[8]=0.00004323;//35
  Xsec[9]=0.0000079240;//45
  Xsec[10]=0.0000018090;//55
  Xsec[11]=0.00000047350;//65
  Xsec[12]=0.00000019520;//75
  for(int j = 1; j <= 12; j++)
    {
      Lumi[j] = NumEvts[j]/Xsec[j];
      cout << "Lumi: " << Lumi[j] << endl;
    }
}
