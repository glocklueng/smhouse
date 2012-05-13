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

