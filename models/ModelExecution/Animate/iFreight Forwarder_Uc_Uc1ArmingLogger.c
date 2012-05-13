/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: iFreight Forwarder_Uc_Uc1ArmingLogger
//!	Generated Date	: Sat, 5, May 2012  
	File Path	: ModelExecution\Animate\iFreight Forwarder_Uc_Uc1ArmingLogger.c
*********************************************************************/

/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include "iFreight Forwarder_Uc_Uc1ArmingLogger.h"
/*## package InterfacesPkg */

/*## class iFreight Forwarder_Uc_Uc1ArmingLogger */
void iFreight Forwarder_Uc_Uc1ArmingLogger_Init(iFreight Forwarder_Uc_Uc1ArmingLogger* const me, const iFreight Forwarder_Uc_Uc1ArmingLogger_Vtbl * vtbl) {
    /* Virtual tables Initialization */
    static const IRiCReactive_Vtbl iFreight Forwarder_Uc_Uc1ArmingLogger_reactiveVtbl = {
        offsetof(iFreight Forwarder_Uc_Uc1ArmingLogger, iric_reactive),
        iFreight Forwarder_Uc_Uc1ArmingLogger_gen
    };
    IRiCReactive_Init(&me->iric_reactive, &iFreight Forwarder_Uc_Uc1ArmingLogger_reactiveVtbl);
    me->iFreight Forwarder_Uc_Uc1ArmingLoggerVtbl = vtbl;
}

void iFreight Forwarder_Uc_Uc1ArmingLogger_Cleanup(iFreight Forwarder_Uc_Uc1ArmingLogger* const me) {
}

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iFreight Forwarder_Uc_Uc1ArmingLogger_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR) {
    
    iFreight Forwarder_Uc_Uc1ArmingLogger * const me = (iFreight Forwarder_Uc_Uc1ArmingLogger *)void_me;
    RiCBoolean res = RiCFALSE;
    if (me != NULL)
    {
        iFreight Forwarder_Uc_Uc1ArmingLogger_Vtbl* vtbl = (iFreight Forwarder_Uc_Uc1ArmingLogger_Vtbl*)(me->iFreight Forwarder_Uc_Uc1ArmingLoggerVtbl);
        if ((vtbl != NULL) && (vtbl->iFreight Forwarder_Uc_Uc1ArmingLogger_gen != NULL))
        {
            size_t addr = (size_t)me;
            void* realMe = (void*)(addr - vtbl->iFreight Forwarder_Uc_Uc1ArmingLogger_offset);
            res = (*vtbl->iFreight Forwarder_Uc_Uc1ArmingLogger_gen)(realMe,event,fromISR);
        }
    }
    return res;
    /*#[ operation gen(RiCEvent*,RiCBoolean) */
    /*#]*/
}

/*********************************************************************
	File Path	: ModelExecution\Animate\iFreight Forwarder_Uc_Uc1ArmingLogger.c
*********************************************************************/
