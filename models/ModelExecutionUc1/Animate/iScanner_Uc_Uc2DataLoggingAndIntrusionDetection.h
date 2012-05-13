/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: iScanner_Uc_Uc2DataLoggingAndIntrusionDetection
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecutionUc1\Animate\iScanner_Uc_Uc2DataLoggingAndIntrusionDetection.h
*********************************************************************/

#ifndef iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_H
#define iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc2_InterfacesPkg.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
typedef struct iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl {
    size_t iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_offset;
    RiCBoolean (*iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_gen)(void * const void_me,RiCEvent* event,RiCBoolean fromISR);
} iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl;
/*#]*/

/*## package InterfacesPkg::Uc2_InterfacesPkg */

/*## class iScanner_Uc_Uc2DataLoggingAndIntrusionDetection */
typedef struct iScanner_Uc_Uc2DataLoggingAndIntrusionDetection iScanner_Uc_Uc2DataLoggingAndIntrusionDetection;
struct iScanner_Uc_Uc2DataLoggingAndIntrusionDetection {
    IRiCReactive iric_reactive;
    const iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl * iScanner_Uc_Uc2DataLoggingAndIntrusionDetectionVtbl;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_Init(iScanner_Uc_Uc2DataLoggingAndIntrusionDetection* const me, const iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_Vtbl * vtbl);

/*## auto_generated */
void iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_Cleanup(iScanner_Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iScanner_Uc_Uc2DataLoggingAndIntrusionDetection_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR);

#endif
/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\iScanner_Uc_Uc2DataLoggingAndIntrusionDetection.h
*********************************************************************/
