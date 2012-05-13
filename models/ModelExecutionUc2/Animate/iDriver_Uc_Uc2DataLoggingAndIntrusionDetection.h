/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc2 
	Configuration 	: Animate
	Model Element	: iDriver_Uc_Uc2DataLoggingAndIntrusionDetection
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc2\Animate\iDriver_Uc_Uc2DataLoggingAndIntrusionDetection.h
*********************************************************************/

#ifndef iDriver_Uc_Uc2DataLoggingAndIntrusionDetection_H
#define iDriver_Uc_Uc2DataLoggingAndIntrusionDetection_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc2_InterfacesPkg.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
typedef struct iDriver_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl {
    size_t iDriver_Uc_Uc2DataLoggingAndIntrusionDetection_offset;
    RiCBoolean (*iDriver_Uc_Uc2DataLoggingAndIntrusionDetection_gen)(void * const void_me,RiCEvent* event,RiCBoolean fromISR);
} iDriver_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl;
/*#]*/

/*## package InterfacesPkg::Uc2_InterfacesPkg */

/*## class iDriver_Uc_Uc2DataLoggingAndIntrusionDetection */
typedef struct iDriver_Uc_Uc2DataLoggingAndIntrusionDetection iDriver_Uc_Uc2DataLoggingAndIntrusionDetection;
struct iDriver_Uc_Uc2DataLoggingAndIntrusionDetection {
    IRiCReactive iric_reactive;
    const iDriver_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl * iDriver_Uc_Uc2DataLoggingAndIntrusionDetectionVtbl;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void iDriver_Uc_Uc2DataLoggingAndIntrusionDetection_Init(iDriver_Uc_Uc2DataLoggingAndIntrusionDetection* const me, const iDriver_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl * vtbl);

/*## auto_generated */
void iDriver_Uc_Uc2DataLoggingAndIntrusionDetection_Cleanup(iDriver_Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iDriver_Uc_Uc2DataLoggingAndIntrusionDetection_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR);

#endif
/*********************************************************************
	File Path	: ModelExecutionUc2\Animate\iDriver_Uc_Uc2DataLoggingAndIntrusionDetection.h
*********************************************************************/
