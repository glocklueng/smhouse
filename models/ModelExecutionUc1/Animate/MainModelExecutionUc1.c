/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: Animate
//!	Generated Date	: Sat, 12, May 2012  
	File Path	: ModelExecutionUc1\Animate\MainModelExecutionUc1.c
*********************************************************************/

/*## auto_generated */
#include "MainModelExecutionUc1.h"
/*## auto_generated */
#include "ActorPkg.h"
/*## auto_generated */
#include "InterfacesPkg.h"
/*## auto_generated */
#include "TypesPkg.h"
/*## auto_generated */
#include "Uc1_InterfacesPkg.h"
/*## auto_generated */
#include "Uc1ArmingLoggerExecutionScopePkg.h"
/*## auto_generated */
#include "Uc1ArmingLoggerPkg.h"
void ModelExecutionUc1_Init( void ) {
    Uc1ArmingLoggerExecutionScopePkg_initRelations();
    ActorPkg_OMEvent_Init();
    InterfacesPkg_OMEvent_Init();
    Uc1ArmingLoggerExecutionScopePkg_startBehavior();
    Uc1ArmingLoggerPkg_OMEvent_Init();
}

void ModelExecutionUc1_Cleanup( void ) {
    Uc1ArmingLoggerExecutionScopePkg_OMInitializer_Cleanup();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(RiCOXFInit(argc, argv, 6423, "", 0, 0, RiCTRUE))
        {
            ModelExecutionUc1_Init();
            /*#[ configuration ModelExecutionUc1::Animate */
            /*#]*/
            RiCOXFStart(FALSE);
            ModelExecutionUc1_Cleanup();
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\MainModelExecutionUc1.c
*********************************************************************/
