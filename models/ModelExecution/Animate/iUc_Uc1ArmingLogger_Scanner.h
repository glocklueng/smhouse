/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: iUc_Uc1ArmingLogger_Scanner
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\iUc_Uc1ArmingLogger_Scanner.h
*********************************************************************/

#ifndef iUc_Uc1ArmingLogger_Scanner_H
#define iUc_Uc1ArmingLogger_Scanner_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc1_InterfacesPkg.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
typedef struct iUc_Uc1ArmingLogger_Scanner_Vtbl {
    size_t iUc_Uc1ArmingLogger_Scanner_offset;
    RiCBoolean (*iUc_Uc1ArmingLogger_Scanner_gen)(void * const void_me,RiCEvent* event,RiCBoolean fromISR);
} iUc_Uc1ArmingLogger_Scanner_Vtbl;
/*#]*/

/*## package InterfacesPkg::Uc1_InterfacesPkg */

/*## class iUc_Uc1ArmingLogger_Scanner */
typedef struct iUc_Uc1ArmingLogger_Scanner iUc_Uc1ArmingLogger_Scanner;
struct iUc_Uc1ArmingLogger_Scanner {
    IRiCReactive iric_reactive;
    const iUc_Uc1ArmingLogger_Scanner_Vtbl * iUc_Uc1ArmingLogger_ScannerVtbl;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void iUc_Uc1ArmingLogger_Scanner_Init(iUc_Uc1ArmingLogger_Scanner* const me, const iUc_Uc1ArmingLogger_Scanner_Vtbl * vtbl);

/*## auto_generated */
void iUc_Uc1ArmingLogger_Scanner_Cleanup(iUc_Uc1ArmingLogger_Scanner* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation gen(RiCEvent*,RiCBoolean) */
RiCBoolean iUc_Uc1ArmingLogger_Scanner_gen(void * const void_me, RiCEvent* event, RiCBoolean fromISR);

#endif
/*********************************************************************
	File Path	: ModelExecution\Animate\iUc_Uc1ArmingLogger_Scanner.h
*********************************************************************/
