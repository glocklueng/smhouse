/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: iDriver_Uc_Uc1ArmingLogger
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecutionUc1\Animate\iDriver_Uc_Uc1ArmingLogger.c
*********************************************************************/

/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include "iDriver_Uc_Uc1ArmingLogger.h"
/*## event evWakeUpButtonPressed() */
#include "InterfacesPkg.h"
/*## package InterfacesPkg::Uc1_InterfacesPkg */

/*## class iDriver_Uc_Uc1ArmingLogger */
void iDriver_Uc_Uc1ArmingLogger_Init(iDriver_Uc_Uc1ArmingLogger* const me, const iDriver_Uc_Uc1ArmingLogger_Vtbl * vtbl) {
    /* Virtual tables Initialization */
    static const IRiCReactive_Vtbl iDriver_Uc_Uc1ArmingLogger_reactiveVtbl = {
        offsetof(iDriver_Uc_Uc1ArmingLogger, iric_reactive),
        iDriver_Uc_Uc1ArmingLogger_gen
    };
    IRiCReactive_Init(&me->iric_reactive, &iDriver_Uc_Uc1ArmingLogger_reactiveVtbl);
    me->iDriver_Uc_Uc1ArmingLoggerVtbl = vtbl;
}

void iDriver_Uc_Uc1ArmingLogger_Cleanup(iDriver_Uc_Uc1ArmingLogger* const me) {
}

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iDriver_Uc_Uc1ArmingLogger_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR) {
    
    iDriver_Uc_Uc1ArmingLogger * const me = (iDriver_Uc_Uc1ArmingLogger *)void_me;
    RiCBoolean res = RiCFALSE;
    if (me != NULL)
    {
        iDriver_Uc_Uc1ArmingLogger_Vtbl* vtbl = (iDriver_Uc_Uc1ArmingLogger_Vtbl*)(me->iDriver_Uc_Uc1ArmingLoggerVtbl);
        if ((vtbl != NULL) && (vtbl->iDriver_Uc_Uc1ArmingLogger_gen != NULL))
        {
            size_t addr = (size_t)me;
            void* realMe = (void*)(addr - vtbl->iDriver_Uc_Uc1ArmingLogger_offset);
            res = (*vtbl->iDriver_Uc_Uc1ArmingLogger_gen)(realMe,event,fromISR);
        }
    }
    return res;
    /*#[ operation gen(RiCEvent*,RiCBoolean) */
    /*#]*/
}

/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\iDriver_Uc_Uc1ArmingLogger.c
*********************************************************************/
