/********************************************************************
	Rhapsody	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: InitWebResources.cpp
//!	Generated Date	: Sat, 5, May 2012  
	File Path	: ModelExecution\Animate\InitWebResources.cpp
*********************************************************************/

extern "C" {
    extern void SetDeviceName(const char * name);
    extern void SetHomePageUrl(const char * name);
    extern void SetSignaturePageUrl(const char * name);
    extern void SetRefreshTimeout(int time);
    extern void SetPropPortNumber(unsigned short port);
    extern void AddWebLicenses(const char **);
    extern int IsExternalWebconfig();

    static const char * licenses[] = {
        "RPGetConnected",
        (char*)0
    };

    void InitWebResources() {
        AddWebLicenses(licenses);

        SetDeviceName("Conlog");

        if (!IsExternalWebconfig()) {
        	SetHomePageUrl("cgibin?Abs_App=Abstract_Default");
        	SetSignaturePageUrl("sign.htm");
        	SetRefreshTimeout(1000);
        	SetPropPortNumber((unsigned int) 80);

        }
    }

}

/*********************************************************************
	File Path	: ModelExecution\Animate\InitWebResources.cpp
*********************************************************************/
