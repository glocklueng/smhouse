/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Animate
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\MainModelExecution.c
*********************************************************************/

/*## auto_generated */
#include "MainModelExecution.h"
/*## auto_generated */
#include "ActorPkg.h"
/*## auto_generated */
#include "InterfacesPkg.h"
/*## auto_generated */
#include "Uc1_InterfacesPkg.h"
/*## auto_generated */
#include "Uc1ArmingLoggerPkg.h"
/*## auto_generated */
#include "Uc2_InterfacesPkg.h"
/*## auto_generated */
#include "Uc2DataLoggingAndIntrusionDetectionPkg.h"
/*## auto_generated */
#include "UseCaseDiagramsPkg.h"
/*## auto_generated */
#include "Admin.h"
/*## auto_generated */
#include "Driver.h"
/*## auto_generated */
#include "Scanner.h"
/*## auto_generated */
#include "Sensors.h"
/*## auto_generated */
#include "Uc_Uc1ArmingLogger.h"
void ModelExecution_Init(void) {
    ActorPkg_OMEvent_Init();
    InterfacesPkg_OMEvent_Init();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(RiCOXFInit(argc, argv, 6423, "", 0, 0, RiCTRUE))
        {
            Admin * p_Admin;
            Driver * p_Driver;
            Scanner * p_Scanner;
            Sensors * p_Sensors;
            Uc_Uc1ArmingLogger * p_Uc_Uc1ArmingLogger;
            ModelExecution_Init();
            p_Admin = Admin_Create(RiCMainTask());
            Admin_startBehavior(p_Admin);
            p_Driver = Driver_Create(RiCMainTask());
            Driver_startBehavior(p_Driver);
            p_Scanner = Create(RiCMainTask());
            startBehavior(p_Scanner);
            p_Sensors = Sensors_Create(RiCMainTask());
            Sensors_startBehavior(p_Sensors);
            p_Uc_Uc1ArmingLogger = Uc_Uc1ArmingLogger_Create(RiCMainTask());
            Uc_Uc1ArmingLogger_startBehavior(p_Uc_Uc1ArmingLogger);
            /*#[ configuration ModelExecution::Animate */
            /*#]*/
            RiCOXFStart(FALSE);
            Admin_Destroy(p_Admin);
            Driver_Destroy(p_Driver);
            Destroy(p_Scanner);
            Sensors_Destroy(p_Sensors);
            Uc_Uc1ArmingLogger_Destroy(p_Uc_Uc1ArmingLogger);
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: ModelExecution\Animate\MainModelExecution.c
*********************************************************************/
