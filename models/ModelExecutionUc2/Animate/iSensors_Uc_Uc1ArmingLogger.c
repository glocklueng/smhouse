/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc2 
	Configuration 	: Animate
	Model Element	: iSensors_Uc_Uc1ArmingLogger
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc2\Animate\iSensors_Uc_Uc1ArmingLogger.c
*********************************************************************/

/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include "iSensors_Uc_Uc1ArmingLogger.h"
/*## event evSensorsPoweredUp() */
#include "InterfacesPkg.h"
/*## package InterfacesPkg::Uc1_InterfacesPkg */

/*## class iSensors_Uc_Uc1ArmingLogger */
void iSensors_Uc_Uc1ArmingLogger_Init(iSensors_Uc_Uc1ArmingLogger* const me, const iSensors_Uc_Uc1ArmingLogger_Vtbl * vtbl) {
    /* Virtual tables Initialization */
    static const IRiCReactive_Vtbl iSensors_Uc_Uc1ArmingLogger_reactiveVtbl = {
        offsetof(iSensors_Uc_Uc1ArmingLogger, iric_reactive),
        iSensors_Uc_Uc1ArmingLogger_gen
    };
    IRiCReactive_Init(&me->iric_reactive, &iSensors_Uc_Uc1ArmingLogger_reactiveVtbl);
    me->iSensors_Uc_Uc1ArmingLoggerVtbl = vtbl;
}

void iSensors_Uc_Uc1ArmingLogger_Cleanup(iSensors_Uc_Uc1ArmingLogger* const me) {
}

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iSensors_Uc_Uc1ArmingLogger_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR) {
    
    iSensors_Uc_Uc1ArmingLogger * const me = (iSensors_Uc_Uc1ArmingLogger *)void_me;
    RiCBoolean res = RiCFALSE;
    if (me != NULL)
    {
        iSensors_Uc_Uc1ArmingLogger_Vtbl* vtbl = (iSensors_Uc_Uc1ArmingLogger_Vtbl*)(me->iSensors_Uc_Uc1ArmingLoggerVtbl);
        if ((vtbl != NULL) && (vtbl->iSensors_Uc_Uc1ArmingLogger_gen != NULL))
        {
            size_t addr = (size_t)me;
            void* realMe = (void*)(addr - vtbl->iSensors_Uc_Uc1ArmingLogger_offset);
            res = (*vtbl->iSensors_Uc_Uc1ArmingLogger_gen)(realMe,event,fromISR);
        }
    }
    return res;
    /*#[ operation gen(RiCEvent*,RiCBoolean) */
    /*#]*/
}

/*********************************************************************
	File Path	: ModelExecutionUc2\Animate\iSensors_Uc_Uc1ArmingLogger.c
*********************************************************************/
