/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: iUc_Uc2DataLoggingAndIntrusionDetection_Sensors
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecutionUc1\Animate\iUc_Uc2DataLoggingAndIntrusionDetection_Sensors.c
*********************************************************************/

/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include "iUc_Uc2DataLoggingAndIntrusionDetection_Sensors.h"
/*## event reqTurnOffSensorsPower() */
#include "InterfacesPkg.h"
/*## package InterfacesPkg::Uc2_InterfacesPkg */

/*## class iUc_Uc2DataLoggingAndIntrusionDetection_Sensors */
void iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_Init(iUc_Uc2DataLoggingAndIntrusionDetection_Sensors* const me, const iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_Vtbl * vtbl) {
    /* Virtual tables Initialization */
    static const IRiCReactive_Vtbl iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_reactiveVtbl = {
        offsetof(iUc_Uc2DataLoggingAndIntrusionDetection_Sensors, iric_reactive),
        iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_gen
    };
    IRiCReactive_Init(&me->iric_reactive, &iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_reactiveVtbl);
    me->iUc_Uc2DataLoggingAndIntrusionDetection_SensorsVtbl = vtbl;
}

void iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_Cleanup(iUc_Uc2DataLoggingAndIntrusionDetection_Sensors* const me) {
}

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR) {
    
    iUc_Uc2DataLoggingAndIntrusionDetection_Sensors * const me = (iUc_Uc2DataLoggingAndIntrusionDetection_Sensors *)void_me;
    RiCBoolean res = RiCFALSE;
    if (me != NULL)
    {
        iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_Vtbl* vtbl = (iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_Vtbl*)(me->iUc_Uc2DataLoggingAndIntrusionDetection_SensorsVtbl);
        if ((vtbl != NULL) && (vtbl->iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_gen != NULL))
        {
            size_t addr = (size_t)me;
            void* realMe = (void*)(addr - vtbl->iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_offset);
            res = (*vtbl->iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_gen)(realMe,event,fromISR);
        }
    }
    return res;
    /*#[ operation gen(RiCEvent*,RiCBoolean) */
    /*#]*/
}

/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\iUc_Uc2DataLoggingAndIntrusionDetection_Sensors.c
*********************************************************************/
