/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Freight Forwarder
//!	Generated Date	: Sat, 5, May 2012  
	File Path	: ModelExecution\Animate\Freight Forwarder.h
*********************************************************************/

#ifndef Freight_Forwarder_H
#define Freight_Forwarder_H

/*## auto_generated */
#include <WebComponents\WebComponentsTypes.h>
/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "ActorPkg.h"
/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*## auto_generated */
#include <oxf\RiCDefaultReactivePort.h>
/*## dependency iFreight Forwarder_Uc_Uc1ArmingLogger */
#include "iFreight Forwarder_Uc_Uc1ArmingLogger.h"
/*## package ActorPkg */

/*## actor Freight Forwarder */
typedef struct Freight Forwarder Freight Forwarder;
struct Freight Forwarder {
    RiCReactive ric_reactive;
    /*#[ ignore */
    RiCDefaultReactivePort pUc_Uc1ArmingLogger;
    int rootState_subState;
    int rootState_active;
    BasicWebAdapter * itsWebAdapter;
    /*#]*/
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void Freight Forwarder_Init(Freight Forwarder* const me, RiCTask * p_task);

/*## auto_generated */
void Freight Forwarder_Cleanup(Freight Forwarder* const me);

/*## auto_generated */
Freight Forwarder * Freight Forwarder_Create(RiCTask * p_task);

/*## auto_generated */
void Freight Forwarder_Destroy(Freight Forwarder* const me);

/*## auto_generated */
RiCBoolean Freight Forwarder_startBehavior(Freight Forwarder* const me);

/***    Framework entries    ***/

/* rootState: */
/*## statechart_method */
int Freight Forwarder_rootState_IN(const Freight Forwarder* const me);

/* WaitForUserCommands: */
/*## statechart_method */
int Freight Forwarder_WaitForUserCommands_IN(const Freight Forwarder* const me);

/* sendaction_2: */
/*## statechart_method */
int Freight Forwarder_sendaction_2_IN(const Freight Forwarder* const me);

/* sendaction_1: */
/*## statechart_method */
int Freight Forwarder_sendaction_1_IN(const Freight Forwarder* const me);

/*#[ ignore */
BasicWebAdapter * Freight Forwarder_getItsWebAdapter(const Freight Forwarder* const me);

void Freight Forwarder_visitWebAdaptedRelations(const Freight Forwarder* const me);

enum Freight Forwarder_Enum {
    Freight Forwarder_RiCNonState = 0,
    Freight Forwarder_WaitForUserCommands = 1,
    Freight Forwarder_sendaction_2 = 2,
    Freight Forwarder_sendaction_1 = 3
};
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecution\Animate\Freight Forwarder.h
*********************************************************************/
