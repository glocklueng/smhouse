/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: iScanner_Uc_Uc1ArmingLogger
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\iScanner_Uc_Uc1ArmingLogger.c
*********************************************************************/

/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include "iScanner_Uc_Uc1ArmingLogger.h"
/*## event evKeyReaded(char*) */
#include "InterfacesPkg.h"
/*## package InterfacesPkg::Uc1_InterfacesPkg */

/*## class iScanner_Uc_Uc1ArmingLogger */
void iScanner_Uc_Uc1ArmingLogger_Init(iScanner_Uc_Uc1ArmingLogger* const me, const iScanner_Uc_Uc1ArmingLogger_Vtbl * vtbl) {
    /* Virtual tables Initialization */
    static const IRiCReactive_Vtbl iScanner_Uc_Uc1ArmingLogger_reactiveVtbl = {
        offsetof(iScanner_Uc_Uc1ArmingLogger, iric_reactive),
        iScanner_Uc_Uc1ArmingLogger_gen
    };
    IRiCReactive_Init(&me->iric_reactive, &iScanner_Uc_Uc1ArmingLogger_reactiveVtbl);
    me->iScanner_Uc_Uc1ArmingLoggerVtbl = vtbl;
}

void iScanner_Uc_Uc1ArmingLogger_Cleanup(iScanner_Uc_Uc1ArmingLogger* const me) {
}

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iScanner_Uc_Uc1ArmingLogger_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR) {
    
    iScanner_Uc_Uc1ArmingLogger * const me = (iScanner_Uc_Uc1ArmingLogger *)void_me;
    RiCBoolean res = RiCFALSE;
    if (me != NULL)
    {
        iScanner_Uc_Uc1ArmingLogger_Vtbl* vtbl = (iScanner_Uc_Uc1ArmingLogger_Vtbl*)(me->iScanner_Uc_Uc1ArmingLoggerVtbl);
        if ((vtbl != NULL) && (vtbl->iScanner_Uc_Uc1ArmingLogger_gen != NULL))
        {
            size_t addr = (size_t)me;
            void* realMe = (void*)(addr - vtbl->iScanner_Uc_Uc1ArmingLogger_offset);
            res = (*vtbl->iScanner_Uc_Uc1ArmingLogger_gen)(realMe,event,fromISR);
        }
    }
    return res;
    /*#[ operation gen(RiCEvent*,RiCBoolean) */
    /*#]*/
}

/*********************************************************************
	File Path	: ModelExecution\Animate\iScanner_Uc_Uc1ArmingLogger.c
*********************************************************************/
