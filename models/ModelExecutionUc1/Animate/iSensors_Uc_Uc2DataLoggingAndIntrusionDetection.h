/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: iSensors_Uc_Uc2DataLoggingAndIntrusionDetection
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecutionUc1\Animate\iSensors_Uc_Uc2DataLoggingAndIntrusionDetection.h
*********************************************************************/

#ifndef iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_H
#define iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc2_InterfacesPkg.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
typedef struct iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl {
    size_t iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_offset;
    RiCBoolean (*iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_gen)(void * const void_me,RiCEvent* event,RiCBoolean fromISR);
} iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl;
/*#]*/

/*## package InterfacesPkg::Uc2_InterfacesPkg */

/*## class iSensors_Uc_Uc2DataLoggingAndIntrusionDetection */
typedef struct iSensors_Uc_Uc2DataLoggingAndIntrusionDetection iSensors_Uc_Uc2DataLoggingAndIntrusionDetection;
struct iSensors_Uc_Uc2DataLoggingAndIntrusionDetection {
    IRiCReactive iric_reactive;
    const iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl * iSensors_Uc_Uc2DataLoggingAndIntrusionDetectionVtbl;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_Init(iSensors_Uc_Uc2DataLoggingAndIntrusionDetection* const me, const iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl * vtbl);

/*## auto_generated */
void iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_Cleanup(iSensors_Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iSensors_Uc_Uc2DataLoggingAndIntrusionDetection_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR);

#endif
/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\iSensors_Uc_Uc2DataLoggingAndIntrusionDetection.h
*********************************************************************/
