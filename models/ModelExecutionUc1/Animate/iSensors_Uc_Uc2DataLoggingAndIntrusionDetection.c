/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: iSensors_Uc_Uc2DataLoggingAndIntrusionDetection
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecutionUc1\Animate\iSensors_Uc_Uc2DataLoggingAndIntrusionDetection.c
*********************************************************************/

/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include "iSensors_Uc_Uc2DataLoggingAndIntrusionDetection.h"
/*## event evSensorsReaded() */
#include "InterfacesPkg.h"
/*## package InterfacesPkg::Uc2_InterfacesPkg */

/*## class iSensors_Uc_Uc2DataLoggingAndIntrusionDetection */
void iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_Init(iSensors_Uc_Uc2DataLoggingAndIntrusionDetection* const me, const iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl * vtbl) {
    /* Virtual tables Initialization */
    static const IRiCReactive_Vtbl iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_reactiveVtbl = {
        offsetof(iSensors_Uc_Uc2DataLoggingAndIntrusionDetection, iric_reactive),
        iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_gen
    };
    IRiCReactive_Init(&me->iric_reactive, &iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_reactiveVtbl);
    me->iSensors_Uc_Uc2DataLoggingAndIntrusionDetectionVtbl = vtbl;
}

void iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_Cleanup(iSensors_Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
}

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR) {
    
    iSensors_Uc_Uc2DataLoggingAndIntrusionDetection * const me = (iSensors_Uc_Uc2DataLoggingAndIntrusionDetection *)void_me;
    RiCBoolean res = RiCFALSE;
    if (me != NULL)
    {
        iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl* vtbl = (iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl*)(me->iSensors_Uc_Uc2DataLoggingAndIntrusionDetectionVtbl);
        if ((vtbl != NULL) && (vtbl->iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_gen != NULL))
        {
            size_t addr = (size_t)me;
            void* realMe = (void*)(addr - vtbl->iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_offset);
            res = (*vtbl->iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_gen)(realMe,event,fromISR);
        }
    }
    return res;
    /*#[ operation gen(RiCEvent*,RiCBoolean) */
    /*#]*/
}

/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\iSensors_Uc_Uc2DataLoggingAndIntrusionDetection.c
*********************************************************************/
