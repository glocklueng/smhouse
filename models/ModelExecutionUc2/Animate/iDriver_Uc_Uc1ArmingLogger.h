/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc2 
	Configuration 	: Animate
	Model Element	: iDriver_Uc_Uc1ArmingLogger
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc2\Animate\iDriver_Uc_Uc1ArmingLogger.h
*********************************************************************/

#ifndef iDriver_Uc_Uc1ArmingLogger_H
#define iDriver_Uc_Uc1ArmingLogger_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc1_InterfacesPkg.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
typedef struct iDriver_Uc_Uc1ArmingLogger_Vtbl {
    size_t iDriver_Uc_Uc1ArmingLogger_offset;
    RiCBoolean (*iDriver_Uc_Uc1ArmingLogger_gen)(void * const void_me,RiCEvent* event,RiCBoolean fromISR);
} iDriver_Uc_Uc1ArmingLogger_Vtbl;
/*#]*/

/*## package InterfacesPkg::Uc1_InterfacesPkg */

/*## class iDriver_Uc_Uc1ArmingLogger */
typedef struct iDriver_Uc_Uc1ArmingLogger iDriver_Uc_Uc1ArmingLogger;
struct iDriver_Uc_Uc1ArmingLogger {
    IRiCReactive iric_reactive;
    const iDriver_Uc_Uc1ArmingLogger_Vtbl * iDriver_Uc_Uc1ArmingLoggerVtbl;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void iDriver_Uc_Uc1ArmingLogger_Init(iDriver_Uc_Uc1ArmingLogger* const me, const iDriver_Uc_Uc1ArmingLogger_Vtbl * vtbl);

/*## auto_generated */
void iDriver_Uc_Uc1ArmingLogger_Cleanup(iDriver_Uc_Uc1ArmingLogger* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iDriver_Uc_Uc1ArmingLogger_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR);

#endif
/*********************************************************************
	File Path	: ModelExecutionUc2\Animate\iDriver_Uc_Uc1ArmingLogger.h
*********************************************************************/
