//
// File generated by rootcint at Wed Jan  6 14:45:14 2016

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME dOsl64_gcc482dIobjdIStRootdIStSpinPooldIStTamuRelLumdIStTamuRelLum_Cint
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "StTamuRelLum_Cint.h"

#include "TCollectionProxyInfo.h"
#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"

// Direct notice to TROOT of the dictionary's loading.
namespace {
   static struct DictInit {
      DictInit() {
         ROOT::RegisterModule();
      }
   } __TheDictionaryInitializer;
}

// START OF SHADOWS

namespace ROOTShadow {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOTShadow
// END OF SHADOWS

namespace ROOTDict {
   void StTamuRelLum_ShowMembers(void *obj, TMemberInspector &R__insp);

   // Function generating the singleton type initializer
   static ROOT::TGenericClassInfo *GenerateInitInstanceLocal(const ::StTamuRelLum*)
   {
      ::StTamuRelLum *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StTamuRelLum >(0);
      static ::ROOT::TGenericClassInfo 
         instance("StTamuRelLum", ::StTamuRelLum::Class_Version(), ".sl64_gcc482/obj/StRoot/StSpinPool/StTamuRelLum/StTamuRelLum.h", 54,
                  typeid(::StTamuRelLum), ::ROOT::DefineBehavior(ptr, ptr),
                  &::StTamuRelLum::Dictionary, isa_proxy, 4,
                  sizeof(::StTamuRelLum) );
      return &instance;
   }
   ROOT::TGenericClassInfo *GenerateInitInstance(const ::StTamuRelLum*)
   {
      return GenerateInitInstanceLocal((::StTamuRelLum*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::StTamuRelLum*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOTDict

//______________________________________________________________________________
atomic_TClass_ptr StTamuRelLum::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *StTamuRelLum::Class_Name()
{
   return "StTamuRelLum";
}

//______________________________________________________________________________
const char *StTamuRelLum::ImplFileName()
{
   return ::ROOTDict::GenerateInitInstanceLocal((const ::StTamuRelLum*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int StTamuRelLum::ImplFileLine()
{
   return ::ROOTDict::GenerateInitInstanceLocal((const ::StTamuRelLum*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void StTamuRelLum::Dictionary()
{
   fgIsA = ::ROOTDict::GenerateInitInstanceLocal((const ::StTamuRelLum*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *StTamuRelLum::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gCINTMutex); if(!fgIsA) {fgIsA = ::ROOTDict::GenerateInitInstanceLocal((const ::StTamuRelLum*)0x0)->GetClass();} }
   return fgIsA;
}

//______________________________________________________________________________
void StTamuRelLum::Streamer(TBuffer &R__b)
{
   // Stream an object of class StTamuRelLum.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StTamuRelLum::Class(),this);
   } else {
      R__b.WriteClassBuffer(StTamuRelLum::Class(),this);
   }
}

//______________________________________________________________________________
void StTamuRelLum::ShowMembers(TMemberInspector &R__insp)
{
      // Inspect the data members of an object of class StTamuRelLum.
      TClass *R__cl = ::StTamuRelLum::IsA();
      if (R__cl || R__insp.IsA()) { }
      R__insp.Inspect(R__cl, R__insp.GetParent(), "mMap", (void*)&mMap);
      R__insp.InspectMember("StTamuRelLum::RelLumMap", (void*)&mMap, "mMap.", false);
}

namespace ROOTDict {
} // end of namespace ROOTDict for class ::StTamuRelLum

namespace ROOTDict {
   void maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR_Dictionary();
   static void *new_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR(void *p = 0);
   static void *newArray_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR(Long_t size, void *p);
   static void delete_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR(void *p);
   static void deleteArray_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR(void *p);
   static void destruct_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR(void *p);

   // Function generating the singleton type initializer
   static ROOT::TGenericClassInfo *GenerateInitInstanceLocal(const map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>*)
   {
      map<TamuRelLum,TamuRelLum,TamuRelLumLessThan> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>", -2, "prec_stl/map", 63,
                  typeid(map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>), ::ROOT::DefineBehavior(ptr, ptr),
                  0, &maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR_Dictionary, isa_proxy, 0,
                  sizeof(map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>) );
      instance.SetNew(&new_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR);
      instance.SetNewArray(&newArray_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR);
      instance.SetDelete(&delete_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR);
      instance.SetDeleteArray(&deleteArray_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR);
      instance.SetDestructor(&destruct_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR);
      instance.AdoptCollectionProxyInfo( ::ROOT::TCollectionProxyInfo::Generate( ::ROOT::TCollectionProxyInfo::MapInsert< map<TamuRelLum,TamuRelLum,TamuRelLumLessThan> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR_Dictionary() {
      ::ROOTDict::GenerateInitInstanceLocal((const map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>*)0x0)->GetClass();
   }

} // end of namespace ROOTDict

namespace ROOTDict {
   // Wrappers around operator new
   static void *new_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<TamuRelLum,TamuRelLum,TamuRelLumLessThan> : new map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>;
   }
   static void *newArray_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>[nElements] : new map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR(void *p) {
      delete ((map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>*)p);
   }
   static void deleteArray_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR(void *p) {
      delete [] ((map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>*)p);
   }
   static void destruct_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThangR(void *p) {
      typedef map<TamuRelLum,TamuRelLum,TamuRelLumLessThan> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOTDict for class map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>

/********************************************************
* .sl64_gcc482/obj/StRoot/StSpinPool/StTamuRelLum/StTamuRelLum_Cint.cxx
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableStTamuRelLum_Cint();

extern "C" void G__set_cpp_environmentStTamuRelLum_Cint() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("StTamuRelLum.h");
  G__cpp_reset_tagtableStTamuRelLum_Cint();
}
#include <new>
extern "C" int G__cpp_dllrevStTamuRelLum_Cint() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* StTamuRelLum */
static int G__StTamuRelLum_Cint_405_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 1:
      G__letint(result7, 85, (long) StTamuRelLum::instance(*((const string*) G__int(libp->para[0]))));
      break;
   case 0:
      G__letint(result7, 85, (long) StTamuRelLum::instance());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((StTamuRelLum*) G__getstructoffset())->print();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) ((StTamuRelLum*) G__getstructoffset())->getRelLum((int) G__int(libp->para[0]), (int) G__int(libp->para[1])
, (int) G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) StTamuRelLum::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) StTamuRelLum::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 115, (long) StTamuRelLum::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      StTamuRelLum::Dictionary();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_9(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) ((const StTamuRelLum*) G__getstructoffset())->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((StTamuRelLum*) G__getstructoffset())->ShowMembers(*(TMemberInspector*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_11(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((StTamuRelLum*) G__getstructoffset())->Streamer(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_12(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((StTamuRelLum*) G__getstructoffset())->StreamerNVirtual(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_13(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) StTamuRelLum::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) StTamuRelLum::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) StTamuRelLum::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__StTamuRelLum_Cint_405_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) StTamuRelLum::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__StTamuRelLum_Cint_405_0_17(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   StTamuRelLum* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new StTamuRelLum(*(StTamuRelLum*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_StTamuRelLum));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__StTamuRelLum_Cint_405_0_18(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   StTamuRelLum* dest = (StTamuRelLum*) G__getstructoffset();
   *dest = *(StTamuRelLum*) libp->para[0].ref;
   const StTamuRelLum& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* StTamuRelLum */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncStTamuRelLum_Cint {
 public:
  G__Sizep2memfuncStTamuRelLum_Cint(): p(&G__Sizep2memfuncStTamuRelLum_Cint::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncStTamuRelLum_Cint::*p)();
};

size_t G__get_sizep2memfuncStTamuRelLum_Cint()
{
  G__Sizep2memfuncStTamuRelLum_Cint a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceStTamuRelLum_Cint() {

   /* Setting up class inheritance */
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableStTamuRelLum_Cint() {

   /* Setting up typedef entry */
   G__search_typename2("Version_t",115,-1,0,-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<TamuRelLum,TamuRelLum,TamuRelLumLessThan>",117,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThancOallocatorlEpairlEconstsPTamuRelLumcOTamuRelLumgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<TamuRelLum,TamuRelLum>",117,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThancOallocatorlEpairlEconstsPTamuRelLumcOTamuRelLumgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("RelLumMap",117,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThancOallocatorlEpairlEconstsPTamuRelLumcOTamuRelLumgRsPgRsPgR),0,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_StTamuRelLum));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* StTamuRelLum */
static void G__setup_memvarStTamuRelLum(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__StTamuRelLum_CintLN_StTamuRelLum));
   { StTamuRelLum *p; p=(StTamuRelLum*)0x1000; if (p) { }
   G__memvar_setup((void*)0,117,0,0,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThancOallocatorlEpairlEconstsPTamuRelLumcOTamuRelLumgRsPgRsPgR),G__defined_typename("RelLumMap"),-1,4,"mMap=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_StTamuRelLum),-1,-2,4,"sInstance=",0,(char*)NULL);
   G__memvar_setup((void*)0,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__StTamuRelLum_CintLN_TClass),G__defined_typename("atomic_TClass_ptr"),-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarStTamuRelLum_Cint() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncStTamuRelLum(void) {
   /* StTamuRelLum */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__StTamuRelLum_CintLN_StTamuRelLum));
   G__memfunc_setup("instance",853,G__StTamuRelLum_Cint_405_0_1, 85, G__get_linked_tagnum(&G__StTamuRelLum_CintLN_StTamuRelLum), -1, 0, 1, 3, 1, 0, "u 'string' - 10 '\"StRoot/StSpinPool/StTamuRelLum/inputs/run6.txt\"' infile", (char*)NULL, (void*) G__func2void( (StTamuRelLum* (*)(const string))(&StTamuRelLum::instance) ), 0);
   G__memfunc_setup("print",557,G__StTamuRelLum_Cint_405_0_2, 121, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("getRelLum",913,G__StTamuRelLum_Cint_405_0_3, 85, G__get_linked_tagnum(&G__StTamuRelLum_CintLN_TamuRelLum), -1, 0, 3, 1, 1, 1, 
"i - - 0 - runId i - - 0 - board "
"i - - 0 - timeBin", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("StTamuRelLum",1199,(G__InterfaceMethod) NULL, 105, G__get_linked_tagnum(&G__StTamuRelLum_CintLN_StTamuRelLum), -1, 0, 1, 1, 4, 0, "u 'string' - 10 - infile", "We make the constructor private for singleton access", (void*) NULL, 0);
   G__memfunc_setup("Class",502,G__StTamuRelLum_Cint_405_0_5, 85, G__get_linked_tagnum(&G__StTamuRelLum_CintLN_TClass), -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (TClass* (*)())(&StTamuRelLum::Class) ), 0);
   G__memfunc_setup("Class_Name",982,G__StTamuRelLum_Cint_405_0_6, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&StTamuRelLum::Class_Name) ), 0);
   G__memfunc_setup("Class_Version",1339,G__StTamuRelLum_Cint_405_0_7, 115, -1, G__defined_typename("Version_t"), 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (Version_t (*)())(&StTamuRelLum::Class_Version) ), 0);
   G__memfunc_setup("Dictionary",1046,G__StTamuRelLum_Cint_405_0_8, 121, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (void (*)())(&StTamuRelLum::Dictionary) ), 0);
   G__memfunc_setup("IsA",253,G__StTamuRelLum_Cint_405_0_9, 85, G__get_linked_tagnum(&G__StTamuRelLum_CintLN_TClass), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ShowMembers",1132,G__StTamuRelLum_Cint_405_0_10, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TMemberInspector' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Streamer",835,G__StTamuRelLum_Cint_405_0_11, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("StreamerNVirtual",1656,G__StTamuRelLum_Cint_405_0_12, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - ClassDef_StreamerNVirtual_b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DeclFileName",1145,G__StTamuRelLum_Cint_405_0_13, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&StTamuRelLum::DeclFileName) ), 0);
   G__memfunc_setup("ImplFileLine",1178,G__StTamuRelLum_Cint_405_0_14, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&StTamuRelLum::ImplFileLine) ), 0);
   G__memfunc_setup("ImplFileName",1171,G__StTamuRelLum_Cint_405_0_15, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&StTamuRelLum::ImplFileName) ), 0);
   G__memfunc_setup("DeclFileLine",1152,G__StTamuRelLum_Cint_405_0_16, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&StTamuRelLum::DeclFileLine) ), 0);
   // automatic copy constructor
   G__memfunc_setup("StTamuRelLum", 1199, G__StTamuRelLum_Cint_405_0_17, (int) ('i'), G__get_linked_tagnum(&G__StTamuRelLum_CintLN_StTamuRelLum), -1, 0, 1, 1, 1, 0, "u 'StTamuRelLum' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__StTamuRelLum_Cint_405_0_18, (int) ('u'), G__get_linked_tagnum(&G__StTamuRelLum_CintLN_StTamuRelLum), -1, 1, 1, 1, 1, 0, "u 'StTamuRelLum' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncStTamuRelLum_Cint() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalStTamuRelLum_Cint() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {
}

static void G__cpp_setup_func13() {
}

static void G__cpp_setup_func14() {
}

static void G__cpp_setup_func15() {
}

static void G__cpp_setup_func16() {
}

static void G__cpp_setup_func17() {
}

static void G__cpp_setup_func18() {
}

static void G__cpp_setup_func19() {
}

static void G__cpp_setup_func20() {
}

static void G__cpp_setup_func21() {
}

static void G__cpp_setup_func22() {
}

static void G__cpp_setup_func23() {
}

static void G__cpp_setup_func24() {
}

static void G__cpp_setup_func25() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcStTamuRelLum_Cint() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
  G__cpp_setup_func13();
  G__cpp_setup_func14();
  G__cpp_setup_func15();
  G__cpp_setup_func16();
  G__cpp_setup_func17();
  G__cpp_setup_func18();
  G__cpp_setup_func19();
  G__cpp_setup_func20();
  G__cpp_setup_func21();
  G__cpp_setup_func22();
  G__cpp_setup_func23();
  G__cpp_setup_func24();
  G__cpp_setup_func25();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__StTamuRelLum_CintLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__StTamuRelLum_CintLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__StTamuRelLum_CintLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__StTamuRelLum_CintLN_string = { "string" , 99 , -1 };
G__linked_taginfo G__StTamuRelLum_CintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__StTamuRelLum_CintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__StTamuRelLum_CintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__StTamuRelLum_CintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__StTamuRelLum_CintLN_TamuRelLum = { "TamuRelLum" , 115 , -1 };
G__linked_taginfo G__StTamuRelLum_CintLN_StTamuRelLum = { "StTamuRelLum" , 99 , -1 };
G__linked_taginfo G__StTamuRelLum_CintLN_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThancOallocatorlEpairlEconstsPTamuRelLumcOTamuRelLumgRsPgRsPgR = { "map<TamuRelLum,TamuRelLum,TamuRelLumLessThan,allocator<pair<const TamuRelLum,TamuRelLum> > >" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableStTamuRelLum_Cint() {
  G__StTamuRelLum_CintLN_TClass.tagnum = -1 ;
  G__StTamuRelLum_CintLN_TBuffer.tagnum = -1 ;
  G__StTamuRelLum_CintLN_TMemberInspector.tagnum = -1 ;
  G__StTamuRelLum_CintLN_string.tagnum = -1 ;
  G__StTamuRelLum_CintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__StTamuRelLum_CintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__StTamuRelLum_CintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__StTamuRelLum_CintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__StTamuRelLum_CintLN_TamuRelLum.tagnum = -1 ;
  G__StTamuRelLum_CintLN_StTamuRelLum.tagnum = -1 ;
  G__StTamuRelLum_CintLN_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThancOallocatorlEpairlEconstsPTamuRelLumcOTamuRelLumgRsPgRsPgR.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableStTamuRelLum_Cint() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__StTamuRelLum_CintLN_TClass);
   G__get_linked_tagnum_fwd(&G__StTamuRelLum_CintLN_TBuffer);
   G__get_linked_tagnum_fwd(&G__StTamuRelLum_CintLN_TMemberInspector);
   G__get_linked_tagnum_fwd(&G__StTamuRelLum_CintLN_string);
   G__get_linked_tagnum_fwd(&G__StTamuRelLum_CintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__StTamuRelLum_CintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__StTamuRelLum_CintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__StTamuRelLum_CintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__StTamuRelLum_CintLN_TamuRelLum);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__StTamuRelLum_CintLN_StTamuRelLum),sizeof(StTamuRelLum),-1,295936,(char*)NULL,G__setup_memvarStTamuRelLum,G__setup_memfuncStTamuRelLum);
   G__get_linked_tagnum_fwd(&G__StTamuRelLum_CintLN_maplETamuRelLumcOTamuRelLumcOTamuRelLumLessThancOallocatorlEpairlEconstsPTamuRelLumcOTamuRelLumgRsPgRsPgR);
}
extern "C" void G__cpp_setupStTamuRelLum_Cint(void) {
  G__check_setup_version(30051515,"G__cpp_setupStTamuRelLum_Cint()");
  G__set_cpp_environmentStTamuRelLum_Cint();
  G__cpp_setup_tagtableStTamuRelLum_Cint();

  G__cpp_setup_inheritanceStTamuRelLum_Cint();

  G__cpp_setup_typetableStTamuRelLum_Cint();

  G__cpp_setup_memvarStTamuRelLum_Cint();

  G__cpp_setup_memfuncStTamuRelLum_Cint();
  G__cpp_setup_globalStTamuRelLum_Cint();
  G__cpp_setup_funcStTamuRelLum_Cint();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncStTamuRelLum_Cint();
  return;
}
class G__cpp_setup_initStTamuRelLum_Cint {
  public:
    G__cpp_setup_initStTamuRelLum_Cint() { G__add_setup_func("StTamuRelLum_Cint",(G__incsetup)(&G__cpp_setupStTamuRelLum_Cint)); G__call_setup_funcs(); }
   ~G__cpp_setup_initStTamuRelLum_Cint() { G__remove_setup_func("StTamuRelLum_Cint"); }
};
G__cpp_setup_initStTamuRelLum_Cint G__cpp_setup_initializerStTamuRelLum_Cint;

