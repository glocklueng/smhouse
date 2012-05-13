/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: iScanner_Uc_Uc2DataLoggingAndIntrusionDetection
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecutionUc1\Animate\iScanner_Uc_Uc2DataLoggingAndIntrusionDetection.c
*********************************************************************/

/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include "iScanner_Uc_Uc2DataLoggingAndIntrusionDetection.h"
/*## event evKeyReaded(char*) */
#include "InterfacesPkg.h"
/*## package InterfacesPkg::Uc2_InterfacesPkg */

/*## class iScanner_Uc_Uc2DataLoggingAndIntrusionDetection */
void iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_Init(iScanner_Uc_Uc2DataLoggingAndIntrusionDetection* const me, const iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl * vtbl) {
    /* Virtual tables Initialization */
    static const IRiCReactive_Vtbl iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_reactiveVtbl = {
        offsetof(iScanner_Uc_Uc2DataLoggingAndIntrusionDetection, iric_reactive),
        iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_gen
    };
    IRiCReactive_Init(&me->iric_reactive, &iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_reactiveVtbl);
    me->iScanner_Uc_Uc2DataLoggingAndIntrusionDetectionVtbl = vtbl;
}

void iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_Cleanup(iScanner_Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
}

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR) {
    
    iScanner_Uc_Uc2DataLoggingAndIntrusionDetection * const me = (iScanner_Uc_Uc2DataLoggingAndIntrusionDetection *)void_me;
    RiCBoolean res = RiCFALSE;
    if (me != NULL)
    {
        iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl* vtbl = (iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl*)(me->iScanner_Uc_Uc2DataLoggingAndIntrusionDetectionVtbl);
        if ((vtbl != NULL) && (vtbl->iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_gen != NULL))
        {
            size_t addr = (size_t)me;
            void* realMe = (void*)(addr - vtbl->iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_offset);
            res = (*vtbl->iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_gen)(realMe,event,fromISR);
        }
    }
    return res;
    /*#[ operation gen(RiCEvent*,RiCBoolean) */
    /*#]*/
}

/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\iScanner_Uc_Uc2DataLoggingAndIntrusionDetection.c
*********************************************************************/
