/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: iFreight Forwarder_Uc_Uc1ArmingLogger
//!	Generated Date	: Sat, 5, May 2012  
	File Path	: ModelExecution\Animate\iFreight Forwarder_Uc_Uc1ArmingLogger.h
*********************************************************************/

#ifndef iFreight_Forwarder_Uc_Uc1ArmingLogger_H
#define iFreight_Forwarder_Uc_Uc1ArmingLogger_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "InterfacesPkg.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
typedef struct iFreight Forwarder_Uc_Uc1ArmingLogger_Vtbl {
    size_t iFreight Forwarder_Uc_Uc1ArmingLogger_offset;
    RiCBoolean (*iFreight Forwarder_Uc_Uc1ArmingLogger_gen)(void * const void_me,RiCEvent* event,RiCBoolean fromISR);
} iFreight Forwarder_Uc_Uc1ArmingLogger_Vtbl;
/*#]*/

/*## package InterfacesPkg */

/*## class iFreight Forwarder_Uc_Uc1ArmingLogger */
typedef struct iFreight Forwarder_Uc_Uc1ArmingLogger iFreight Forwarder_Uc_Uc1ArmingLogger;
struct iFreight Forwarder_Uc_Uc1ArmingLogger {
    IRiCReactive iric_reactive;
    const iFreight Forwarder_Uc_Uc1ArmingLogger_Vtbl * iFreight Forwarder_Uc_Uc1ArmingLoggerVtbl;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void iFreight Forwarder_Uc_Uc1ArmingLogger_Init(iFreight Forwarder_Uc_Uc1ArmingLogger* const me, const iFreight Forwarder_Uc_Uc1ArmingLogger_Vtbl * vtbl);

/*## auto_generated */
void iFreight Forwarder_Uc_Uc1ArmingLogger_Cleanup(iFreight Forwarder_Uc_Uc1ArmingLogger* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iFreight Forwarder_Uc_Uc1ArmingLogger_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR);

#endif
/*********************************************************************
	File Path	: ModelExecution\Animate\iFreight Forwarder_Uc_Uc1ArmingLogger.h
*********************************************************************/
