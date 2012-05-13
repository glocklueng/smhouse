/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: iUc_Uc2DataLoggingAndIntrusionDetection_Scanner
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\iUc_Uc2DataLoggingAndIntrusionDetection_Scanner.c
*********************************************************************/

/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include "iUc_Uc2DataLoggingAndIntrusionDetection_Scanner.h"
/*## event reqReadKey() */
#include "InterfacesPkg.h"
/*## package InterfacesPkg::Uc2_InterfacesPkg */

/*## class iUc_Uc2DataLoggingAndIntrusionDetection_Scanner */
void iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_Init(iUc_Uc2DataLoggingAndIntrusionDetection_Scanner* const me, const iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_Vtbl * vtbl) {
    /* Virtual tables Initialization */
    static const IRiCReactive_Vtbl iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_reactiveVtbl = {
        offsetof(iUc_Uc2DataLoggingAndIntrusionDetection_Scanner, iric_reactive),
        iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_gen
    };
    IRiCReactive_Init(&me->iric_reactive, &iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_reactiveVtbl);
    me->iUc_Uc2DataLoggingAndIntrusionDetection_ScannerVtbl = vtbl;
}

void iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_Cleanup(iUc_Uc2DataLoggingAndIntrusionDetection_Scanner* const me) {
}

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR) {
    
    iUc_Uc2DataLoggingAndIntrusionDetection_Scanner * const me = (iUc_Uc2DataLoggingAndIntrusionDetection_Scanner *)void_me;
    RiCBoolean res = RiCFALSE;
    if (me != NULL)
    {
        iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_Vtbl* vtbl = (iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_Vtbl*)(me->iUc_Uc2DataLoggingAndIntrusionDetection_ScannerVtbl);
        if ((vtbl != NULL) && (vtbl->iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_gen != NULL))
        {
            size_t addr = (size_t)me;
            void* realMe = (void*)(addr - vtbl->iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_offset);
            res = (*vtbl->iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_gen)(realMe,event,fromISR);
        }
    }
    return res;
    /*#[ operation gen(RiCEvent*,RiCBoolean) */
    /*#]*/
}

/*********************************************************************
	File Path	: ModelExecution\Animate\iUc_Uc2DataLoggingAndIntrusionDetection_Scanner.c
*********************************************************************/
