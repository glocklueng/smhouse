/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc2 
	Configuration 	: Animate
	Model Element	: Animate
//!	Generated Date	: Sat, 12, May 2012  
	File Path	: ModelExecutionUc2\Animate\MainModelExecutionUc2.c
*********************************************************************/

/*## auto_generated */
#include "MainModelExecutionUc2.h"
/*## auto_generated */
#include "ActorPkg.h"
/*## auto_generated */
#include "InterfacesPkg.h"
/*## auto_generated */
#include "TypesPkg.h"
/*## auto_generated */
#include "Uc1_InterfacesPkg.h"
/*## auto_generated */
#include "Uc2_InterfacesPkg.h"
/*## auto_generated */
#include "Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg.h"
/*## auto_generated */
#include "Uc2DataLoggingAndIntrusionDetectionPkg.h"
void ModelExecutionUc2_Init( void ) {
    Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_initRelations();
    ActorPkg_OMEvent_Init();
    InterfacesPkg_OMEvent_Init();
    Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_startBehavior();
    Uc2DataLoggingAndIntrusionDetectionPkg_OMEvent_Init();
}

void ModelExecutionUc2_Cleanup( void ) {
    Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_OMInitializer_Cleanup();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(RiCOXFInit(argc, argv, 6423, "", 0, 0, RiCTRUE))
        {
            ModelExecutionUc2_Init();
            /*#[ configuration ModelExecutionUc2::Animate */
            /*#]*/
            RiCOXFStart(FALSE);
            ModelExecutionUc2_Cleanup();
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: ModelExecutionUc2\Animate\MainModelExecutionUc2.c
*********************************************************************/
