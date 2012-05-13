/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: iSensors_Uc_Uc1ArmingLogger
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecutionUc1\Animate\iSensors_Uc_Uc1ArmingLogger.h
*********************************************************************/

#ifndef iSensors_Uc_Uc1ArmingLogger_H
#define iSensors_Uc_Uc1ArmingLogger_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc1_InterfacesPkg.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
typedef struct iSensors_Uc_Uc1ArmingLogger_Vtbl {
    size_t iSensors_Uc_Uc1ArmingLogger_offset;
    RiCBoolean (*iSensors_Uc_Uc1ArmingLogger_gen)(void * const void_me,RiCEvent* event,RiCBoolean fromISR);
} iSensors_Uc_Uc1ArmingLogger_Vtbl;
/*#]*/

/*## package InterfacesPkg::Uc1_InterfacesPkg */

/*## class iSensors_Uc_Uc1ArmingLogger */
typedef struct iSensors_Uc_Uc1ArmingLogger iSensors_Uc_Uc1ArmingLogger;
struct iSensors_Uc_Uc1ArmingLogger {
    IRiCReactive iric_reactive;
    const iSensors_Uc_Uc1ArmingLogger_Vtbl * iSensors_Uc_Uc1ArmingLoggerVtbl;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void iSensors_Uc_Uc1ArmingLogger_Init(iSensors_Uc_Uc1ArmingLogger* const me, const iSensors_Uc_Uc1ArmingLogger_Vtbl * vtbl);

/*## auto_generated */
void iSensors_Uc_Uc1ArmingLogger_Cleanup(iSensors_Uc_Uc1ArmingLogger* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iSensors_Uc_Uc1ArmingLogger_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR);

#endif
/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\iSensors_Uc_Uc1ArmingLogger.h
*********************************************************************/
