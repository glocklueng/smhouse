/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: iScanner_Uc_Uc1ArmingLogger
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\iScanner_Uc_Uc1ArmingLogger.h
*********************************************************************/

#ifndef iScanner_Uc_Uc1ArmingLogger_H
#define iScanner_Uc_Uc1ArmingLogger_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc1_InterfacesPkg.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
typedef struct iScanner_Uc_Uc1ArmingLogger_Vtbl {
    size_t iScanner_Uc_Uc1ArmingLogger_offset;
    RiCBoolean (*iScanner_Uc_Uc1ArmingLogger_gen)(void * const void_me,RiCEvent* event,RiCBoolean fromISR);
} iScanner_Uc_Uc1ArmingLogger_Vtbl;
/*#]*/

/*## package InterfacesPkg::Uc1_InterfacesPkg */

/*## class iScanner_Uc_Uc1ArmingLogger */
typedef struct iScanner_Uc_Uc1ArmingLogger iScanner_Uc_Uc1ArmingLogger;
struct iScanner_Uc_Uc1ArmingLogger {
    IRiCReactive iric_reactive;
    const iScanner_Uc_Uc1ArmingLogger_Vtbl * iScanner_Uc_Uc1ArmingLoggerVtbl;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void iScanner_Uc_Uc1ArmingLogger_Init(iScanner_Uc_Uc1ArmingLogger* const me, const iScanner_Uc_Uc1ArmingLogger_Vtbl * vtbl);

/*## auto_generated */
void iScanner_Uc_Uc1ArmingLogger_Cleanup(iScanner_Uc_Uc1ArmingLogger* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iScanner_Uc_Uc1ArmingLogger_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR);

#endif
/*********************************************************************
	File Path	: ModelExecution\Animate\iScanner_Uc_Uc1ArmingLogger.h
*********************************************************************/
