/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: iAdmin_Uc_Uc1ArmingLogger
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\iAdmin_Uc_Uc1ArmingLogger.c
*********************************************************************/

/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include "iAdmin_Uc_Uc1ArmingLogger.h"
/*## event evWakeUpButtonPressed() */
#include "InterfacesPkg.h"
/*## package InterfacesPkg::Uc1_InterfacesPkg */

/*## class iAdmin_Uc_Uc1ArmingLogger */
void iAdmin_Uc_Uc1ArmingLogger_Init(iAdmin_Uc_Uc1ArmingLogger* const me, const iAdmin_Uc_Uc1ArmingLogger_Vtbl * vtbl) {
    /* Virtual tables Initialization */
    static const IRiCReactive_Vtbl iAdmin_Uc_Uc1ArmingLogger_reactiveVtbl = {
        offsetof(iAdmin_Uc_Uc1ArmingLogger, iric_reactive),
        iAdmin_Uc_Uc1ArmingLogger_gen
    };
    IRiCReactive_Init(&me->iric_reactive, &iAdmin_Uc_Uc1ArmingLogger_reactiveVtbl);
    me->iAdmin_Uc_Uc1ArmingLoggerVtbl = vtbl;
}

void iAdmin_Uc_Uc1ArmingLogger_Cleanup(iAdmin_Uc_Uc1ArmingLogger* const me) {
}

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iAdmin_Uc_Uc1ArmingLogger_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR) {
    
    iAdmin_Uc_Uc1ArmingLogger * const me = (iAdmin_Uc_Uc1ArmingLogger *)void_me;
    RiCBoolean res = RiCFALSE;
    if (me != NULL)
    {
        iAdmin_Uc_Uc1ArmingLogger_Vtbl* vtbl = (iAdmin_Uc_Uc1ArmingLogger_Vtbl*)(me->iAdmin_Uc_Uc1ArmingLoggerVtbl);
        if ((vtbl != NULL) && (vtbl->iAdmin_Uc_Uc1ArmingLogger_gen != NULL))
        {
            size_t addr = (size_t)me;
            void* realMe = (void*)(addr - vtbl->iAdmin_Uc_Uc1ArmingLogger_offset);
            res = (*vtbl->iAdmin_Uc_Uc1ArmingLogger_gen)(realMe,event,fromISR);
        }
    }
    return res;
    /*#[ operation gen(RiCEvent*,RiCBoolean) */
    /*#]*/
}

/*********************************************************************
	File Path	: ModelExecution\Animate\iAdmin_Uc_Uc1ArmingLogger.c
*********************************************************************/
