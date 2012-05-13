/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: iUc_Uc1ArmingLogger_Sensors
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\iUc_Uc1ArmingLogger_Sensors.h
*********************************************************************/

#ifndef iUc_Uc1ArmingLogger_Sensors_H
#define iUc_Uc1ArmingLogger_Sensors_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc1_InterfacesPkg.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
typedef struct iUc_Uc1ArmingLogger_Sensors_Vtbl {
    size_t iUc_Uc1ArmingLogger_Sensors_offset;
    RiCBoolean (*iUc_Uc1ArmingLogger_Sensors_gen)(void * const void_me,RiCEvent* event,RiCBoolean fromISR);
} iUc_Uc1ArmingLogger_Sensors_Vtbl;
/*#]*/

/*## package InterfacesPkg::Uc1_InterfacesPkg */

/*## class iUc_Uc1ArmingLogger_Sensors */
typedef struct iUc_Uc1ArmingLogger_Sensors iUc_Uc1ArmingLogger_Sensors;
struct iUc_Uc1ArmingLogger_Sensors {
    IRiCReactive iric_reactive;
    const iUc_Uc1ArmingLogger_Sensors_Vtbl * iUc_Uc1ArmingLogger_SensorsVtbl;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void iUc_Uc1ArmingLogger_Sensors_Init(iUc_Uc1ArmingLogger_Sensors* const me, const iUc_Uc1ArmingLogger_Sensors_Vtbl * vtbl);

/*## auto_generated */
void iUc_Uc1ArmingLogger_Sensors_Cleanup(iUc_Uc1ArmingLogger_Sensors* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iUc_Uc1ArmingLogger_Sensors_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR);

#endif
/*********************************************************************
	File Path	: ModelExecution\Animate\iUc_Uc1ArmingLogger_Sensors.h
*********************************************************************/
