/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: iUc_Uc2DataLoggingAndIntrusionDetection_Sensors
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecutionUc1\Animate\iUc_Uc2DataLoggingAndIntrusionDetection_Sensors.h
*********************************************************************/

#ifndef iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_H
#define iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc2_InterfacesPkg.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
typedef struct iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_Vtbl {
    size_t iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_offset;
    RiCBoolean (*iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_gen)(void * const void_me,RiCEvent* event,RiCBoolean fromISR);
} iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_Vtbl;
/*#]*/

/*## package InterfacesPkg::Uc2_InterfacesPkg */

/*## class iUc_Uc2DataLoggingAndIntrusionDetection_Sensors */
typedef struct iUc_Uc2DataLoggingAndIntrusionDetection_Sensors iUc_Uc2DataLoggingAndIntrusionDetection_Sensors;
struct iUc_Uc2DataLoggingAndIntrusionDetection_Sensors {
    IRiCReactive iric_reactive;
    const iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_Vtbl * iUc_Uc2DataLoggingAndIntrusionDetection_SensorsVtbl;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_Init(iUc_Uc2DataLoggingAndIntrusionDetection_Sensors* const me, const iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_Vtbl * vtbl);

/*## auto_generated */
void iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_Cleanup(iUc_Uc2DataLoggingAndIntrusionDetection_Sensors* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iUc_Uc2DataLoggingAndIntrusionDetection_Sensors_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR);

#endif
/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\iUc_Uc2DataLoggingAndIntrusionDetection_Sensors.h
*********************************************************************/
