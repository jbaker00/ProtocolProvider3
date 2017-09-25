

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for vc140.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
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
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __vc140_h__
#define __vc140_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IObject1_FWD_DEFINED__
#define __IObject1_FWD_DEFINED__
typedef interface IObject1 IObject1;

#endif 	/* __IObject1_FWD_DEFINED__ */


#ifndef __CObject1_FWD_DEFINED__
#define __CObject1_FWD_DEFINED__

#ifdef __cplusplus
typedef class CObject1 CObject1;
#else
typedef struct CObject1 CObject1;
#endif /* __cplusplus */

#endif 	/* __CObject1_FWD_DEFINED__ */


/* header files for imported files */
#include "prsht.h"
#include "MsHTML.h"
#include "MsHtmHst.h"
#include "ExDisp.h"
#include "ObjSafe.h"
#include "wtsprotocol.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IObject1_INTERFACE_DEFINED__
#define __IObject1_INTERFACE_DEFINED__

/* interface IObject1 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IObject1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103FF9D9-8BC9-4ea8-8CD4-C1E627D04358")
    IObject1 : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetANum( 
            /* [retval][out] */ int *pInt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateListener( 
            /* [in] */ WCHAR *wszListenerName,
            /* [out] */ IWRdsProtocolListener **pProtocolListener) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IWRdsProtocolSettings *pIWRdsSettings,
            /* [in] */ PWRDS_SETTINGS pWRdsSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyServiceStateChange( 
            /* [in] */ WRDS_SERVICE_STATE *pTSServiceStateChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySessionOfServiceStart( 
            /* [in] */ WRDS_SESSION_ID *SessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySessionOfServiceStop( 
            /* [in] */ WRDS_SESSION_ID *SessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySessionStateChange( 
            /* [in] */ WRDS_SESSION_ID *SessionId,
            /* [in] */ ULONG EventId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySettingsChange( 
            /* [in] */ PWRDS_SETTINGS pWRdsSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uninitialize( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObject1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObject1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObject1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObject1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IObject1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IObject1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IObject1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IObject1 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *GetANum )( 
            IObject1 * This,
            /* [retval][out] */ int *pInt);
        
        HRESULT ( STDMETHODCALLTYPE *CreateListener )( 
            IObject1 * This,
            /* [in] */ WCHAR *wszListenerName,
            /* [out] */ IWRdsProtocolListener **pProtocolListener);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IObject1 * This,
            /* [in] */ IWRdsProtocolSettings *pIWRdsSettings,
            /* [in] */ PWRDS_SETTINGS pWRdsSettings);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyServiceStateChange )( 
            IObject1 * This,
            /* [in] */ WRDS_SERVICE_STATE *pTSServiceStateChange);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySessionOfServiceStart )( 
            IObject1 * This,
            /* [in] */ WRDS_SESSION_ID *SessionId);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySessionOfServiceStop )( 
            IObject1 * This,
            /* [in] */ WRDS_SESSION_ID *SessionId);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySessionStateChange )( 
            IObject1 * This,
            /* [in] */ WRDS_SESSION_ID *SessionId,
            /* [in] */ ULONG EventId);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySettingsChange )( 
            IObject1 * This,
            /* [in] */ PWRDS_SETTINGS pWRdsSettings);
        
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )( 
            IObject1 * This);
        
        END_INTERFACE
    } IObject1Vtbl;

    interface IObject1
    {
        CONST_VTBL struct IObject1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObject1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObject1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObject1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObject1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IObject1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IObject1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IObject1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IObject1_GetANum(This,pInt)	\
    ( (This)->lpVtbl -> GetANum(This,pInt) ) 

#define IObject1_CreateListener(This,wszListenerName,pProtocolListener)	\
    ( (This)->lpVtbl -> CreateListener(This,wszListenerName,pProtocolListener) ) 

#define IObject1_Initialize(This,pIWRdsSettings,pWRdsSettings)	\
    ( (This)->lpVtbl -> Initialize(This,pIWRdsSettings,pWRdsSettings) ) 

#define IObject1_NotifyServiceStateChange(This,pTSServiceStateChange)	\
    ( (This)->lpVtbl -> NotifyServiceStateChange(This,pTSServiceStateChange) ) 

#define IObject1_NotifySessionOfServiceStart(This,SessionId)	\
    ( (This)->lpVtbl -> NotifySessionOfServiceStart(This,SessionId) ) 

#define IObject1_NotifySessionOfServiceStop(This,SessionId)	\
    ( (This)->lpVtbl -> NotifySessionOfServiceStop(This,SessionId) ) 

#define IObject1_NotifySessionStateChange(This,SessionId,EventId)	\
    ( (This)->lpVtbl -> NotifySessionStateChange(This,SessionId,EventId) ) 

#define IObject1_NotifySettingsChange(This,pWRdsSettings)	\
    ( (This)->lpVtbl -> NotifySettingsChange(This,pWRdsSettings) ) 

#define IObject1_Uninitialize(This)	\
    ( (This)->lpVtbl -> Uninitialize(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObject1_INTERFACE_DEFINED__ */



#ifndef __MyServer_LIBRARY_DEFINED__
#define __MyServer_LIBRARY_DEFINED__

/* library MyServer */
/* [uuid][helpstring][version] */ 


EXTERN_C const IID LIBID_MyServer;

EXTERN_C const CLSID CLSID_CObject1;

#ifdef __cplusplus

class DECLSPEC_UUID("15615078-523C-43A0-BE6F-651E78A89213")
CObject1;
#endif
#endif /* __MyServer_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


