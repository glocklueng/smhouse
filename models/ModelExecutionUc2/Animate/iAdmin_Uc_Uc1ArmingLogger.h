/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc2 
	Configuration 	: Animate
	Model Element	: iAdmin_Uc_Uc1ArmingLogger
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc2\Animate\iAdmin_Uc_Uc1ArmingLogger.h
*********************************************************************/

#ifndef iAdmin_Uc_Uc1ArmingLogger_H
#define iAdmin_Uc_Uc1ArmingLogger_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc1_InterfacesPkg.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
typedef struct iAdmin_Uc_Uc1ArmingLogger_Vtbl {
    size_t iAdmin_Uc_Uc1ArmingLogger_offset;
    RiCBoolean (*iAdmin_Uc_Uc1ArmingLogger_gen)(void * const void_me,RiCEvent* event,RiCBoolean fromISR);
} iAdmin_Uc_Uc1ArmingLogger_Vtbl;
/*#]*/

/*## package InterfacesPkg::Uc1_InterfacesPkg */

/*## class iAdmin_Uc_Uc1ArmingLogger */
typedef struct iAdmin_Uc_Uc1ArmingLogger iAdmin_Uc_Uc1ArmingLogger;
struct iAdmin_Uc_Uc1ArmingLogger {
    IRiCReactive iric_reactive;
    const iAdmin_Uc_Uc1ArmingLogger_Vtbl * iAdmin_Uc_Uc1ArmingLoggerVtbl;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void iAdmin_Uc_Uc1ArmingLogger_Init(iAdmin_Uc_Uc1ArmingLogger* const me, const iAdmin_Uc_Uc1ArmingLogger_Vtbl * vtbl);

/*## auto_generated */
void iAdmin_Uc_Uc1ArmingLogger_Cleanup(iAdmin_Uc_Uc1ArmingLogger* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iAdmin_Uc_Uc1ArmingLogger_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR);

#endif
/*********************************************************************
	File Path	: ModelExecutionUc2\Animate\iAdmin_Uc_Uc1ArmingLogger.h
*********************************************************************/
