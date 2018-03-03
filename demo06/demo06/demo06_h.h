

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sat Mar 03 13:07:08 2018
 */
/* Compiler settings for demo06.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __demo06_h_h__
#define __demo06_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __Idemo06_FWD_DEFINED__
#define __Idemo06_FWD_DEFINED__
typedef interface Idemo06 Idemo06;
#endif 	/* __Idemo06_FWD_DEFINED__ */


#ifndef __demo06_FWD_DEFINED__
#define __demo06_FWD_DEFINED__

#ifdef __cplusplus
typedef class demo06 demo06;
#else
typedef struct demo06 demo06;
#endif /* __cplusplus */

#endif 	/* __demo06_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __demo06_LIBRARY_DEFINED__
#define __demo06_LIBRARY_DEFINED__

/* library demo06 */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_demo06;

#ifndef __Idemo06_DISPINTERFACE_DEFINED__
#define __Idemo06_DISPINTERFACE_DEFINED__

/* dispinterface Idemo06 */
/* [uuid] */ 


EXTERN_C const IID DIID_Idemo06;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("8F3BF97D-D027-4C41-B65D-4C8E0084ABBB")
    Idemo06 : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct Idemo06Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Idemo06 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Idemo06 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Idemo06 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Idemo06 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Idemo06 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Idemo06 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Idemo06 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } Idemo06Vtbl;

    interface Idemo06
    {
        CONST_VTBL struct Idemo06Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Idemo06_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define Idemo06_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define Idemo06_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define Idemo06_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define Idemo06_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define Idemo06_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define Idemo06_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __Idemo06_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_demo06;

#ifdef __cplusplus

class DECLSPEC_UUID("36C486CC-5470-45F6-86A9-9FD54F4A0384")
demo06;
#endif
#endif /* __demo06_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


