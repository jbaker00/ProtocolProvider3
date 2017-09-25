#include "MyIncludes.h"
// The module attribute is specified in order to implement DllMain,
// DllRegisterServer and DllUnregisterServer
[ module(dll, name = "MyServer", helpstring = "MyServer 1.0 Type Library") ];
[ emitidl ];

/////////////////////////////////////////////////////////////////////////////
// IObject1
[
    object,
    uuid("103FF9D9-8BC9-4ea8-8CD4-C1E627D04358"),
    dual,
    helpstring("IObject1 Interface"),
    pointer_default(unique)
 ]
 __interface IObject1 : IDispatch
 {
    HRESULT GetANum([out, retval]int* pInt);
    
    
    //Protocol Provider Required function within IWRdsProtocolManager Create Listener function
    HRESULT CreateListener(
        [in]  WCHAR                 *wszListenerName,
        [out] IWRdsProtocolListener **pProtocolListener);

    //Protocol Provider Required function within IWRdsProtocolManager Initialize function
    HRESULT Initialize(
        [in] IWRdsProtocolSettings *pIWRdsSettings,
        [in] PWRDS_SETTINGS        pWRdsSettings);
    
     //Protocol Provider Required function within IWRdsProtocolManager NotifyServiceStateChange
     HRESULT NotifyServiceStateChange(
        [in] WRDS_SERVICE_STATE *pTSServiceStateChange);

    //Protocol Provider Required function within IWRdsProtocolManager NotifySessionOfServiceStart
    HRESULT NotifySessionOfServiceStart(
        [in] WRDS_SESSION_ID *SessionId);

    //Protocol Provider Required function within IWRdsProtocolManager NotifySessionOfServiceStop
    HRESULT NotifySessionOfServiceStop(
        [in] WRDS_SESSION_ID *SessionId);


    //Protocol Provider Required function within IWRdsProtocolManager NotifySessionStateChange
    HRESULT NotifySessionStateChange(
        [in] WRDS_SESSION_ID *SessionId,
        [in] ULONG           EventId);

    //Protocol Provider Required function within IWRdsProtocolManager NotifySettingsChange
    HRESULT NotifySettingsChange(
        [in] PWRDS_SETTINGS pWRdsSettings);

    //Protocol Provider Required function within IWRdsProtocolManager Uninitialize function        
    HRESULT Uninitialize();

 };
 /////////////////////////////////////////////////////////////////////////////
 // CObject1
 [
    coclass,
    threading(apartment),
    vi_progid("MyServer.Object1"),
    progid("MyServer.Object1.1"),
    version(1.0),
    uuid("15615078-523C-43A0-BE6F-651E78A89213"),
    helpstring("Object1 Class")
 ]
 class ATL_NO_VTABLE CObject1 : 
    public IObject1
 {
 public:
    CObject1()
    {
    }
    HRESULT GetANum(int* pInt){
       *pInt = 101;
       return S_OK;
    }



    //Protocol Provider Required function within IWRdsProtocolManager Create Listener function
    HRESULT CreateListener(
        WCHAR                 *wszListenerName,
        IWRdsProtocolListener **pProtocolListener)
    {
        return S_OK;
    }
    
    //Protocol Provider Required function within IWRdsProtocolManager Initialize function
    HRESULT Initialize(
         IWRdsProtocolSettings *pIWRdsSettings,
        PWRDS_SETTINGS        pWRdsSettings)
    {
        return S_OK;
    }

    //Protocol Provider Required function within IWRdsProtocolManager NotifyServiceStateChange
    HRESULT NotifyServiceStateChange(
        WRDS_SERVICE_STATE *pTSServiceStateChange)
    {
        return S_OK;
    }

    //Protocol Provider Required function within IWRdsProtocolManager NotifySessionOfServiceStart
    HRESULT NotifySessionOfServiceStart(
        WRDS_SESSION_ID *SessionId)
    {
        return S_OK;
    }    

    //Protocol Provider Required function within IWRdsProtocolManager NotifySessionOfServiceStop
    HRESULT NotifySessionOfServiceStop(
        WRDS_SESSION_ID *SessionId)
    {
        return S_OK;
    }

    //Protocol Provider Required function within IWRdsProtocolManager NotifySessionStateChange
    HRESULT NotifySessionStateChange(
         WRDS_SESSION_ID *SessionId,
         ULONG           EventId)
    {
        return S_OK;
    }

    //Protocol Provider Required function within IWRdsProtocolManager NotifySettingsChange
    HRESULT NotifySettingsChange(
        PWRDS_SETTINGS pWRdsSettings)
    {
        return S_OK;
    }

    //Protocol Provider Required function within IWRdsProtocolManager Uninitialize function
    HRESULT Uninitialize()
    {
        return S_OK;
    }

    DECLARE_PROTECT_FINAL_CONSTRUCT()
    HRESULT FinalConstruct()
    {
       return S_OK;
    }
    
    void FinalRelease() 
    {
    }
 };