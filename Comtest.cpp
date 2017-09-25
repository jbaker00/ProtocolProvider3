#include <iostream>
#include "atlbase.h"
#include "vc140.h"
//#import "vc140.tlb" no_namespace
using namespace std;
int main()
{
   CoInitialize(NULL);
   {
        HRESULT hr = E_FAIL;
        HRESULT hres = E_FAIL;
        int out = 1;
        CComPtr<IUnknown> spUnknown;
        CComPtr<IObject1> pI;        
        
        //Create an instance of the object
        spUnknown.CoCreateInstance(__uuidof(CObject1));
        
        //Do the QI off the object to get the pointer to the object
        spUnknown.QueryInterface(&pI);
        
        //Call the GetANum function
        hres = pI->GetANum(&out);

        //Call the Unitialize function
        //hr = pI->Uninitialize();

        //Call the CreateListner function
        //hr = pI->CreateListener(*wszListenerName, **pProtocolListener);

        //Display to the output the return codes
        cout << hres << endl;
        cout << hr << endl;
        cout << out << endl;
   }
   CoUninitialize();
}