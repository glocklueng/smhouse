/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: iUc_Uc2DataLoggingAndIntrusionDetection_Scanner
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecutionUc1\Animate\iUc_Uc2DataLoggingAndIntrusionDetection_Scanner.h
*********************************************************************/

#ifndef iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_H
#define iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc2_InterfacesPkg.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
typedef struct iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_Vtbl {
    size_t iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_offset;
    RiCBoolean (*iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_gen)(void * const void_me,RiCEvent* event,RiCBoolean fromISR);
} iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_Vtbl;
/*#]*/

/*## package InterfacesPkg::Uc2_InterfacesPkg */

/*## class iUc_Uc2DataLoggingAndIntrusionDetection_Scanner */
typedef struct iUc_Uc2DataLoggingAndIntrusionDetection_Scanner iUc_Uc2DataLoggingAndIntrusionDetection_Scanner;
struct iUc_Uc2DataLoggingAndIntrusionDetection_Scanner {
    IRiCReactive iric_reactive;
    const iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_Vtbl * iUc_Uc2DataLoggingAndIntrusionDetection_ScannerVtbl;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_Init(iUc_Uc2DataLoggingAndIntrusionDetection_Scanner* const me, const iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_Vtbl * vtbl);

/*## auto_generated */
void iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_Cleanup(iUc_Uc2DataLoggingAndIntrusionDetection_Scanner* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iUc_Uc2DataLoggingAndIntrusionDetection_Scanner_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR);

#endif
/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\iUc_Uc2DataLoggingAndIntrusionDetection_Scanner.h
*********************************************************************/
