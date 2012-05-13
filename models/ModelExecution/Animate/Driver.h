/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Driver
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\Driver.h
*********************************************************************/

#ifndef Driver_H
#define Driver_H

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
/*## dependency iDriver_Uc_Uc1ArmingLogger */
#include "iDriver_Uc_Uc1ArmingLogger.h"
/*## dependency iDriver_Uc_Uc2DataLoggingAndIntrusionDetection */
#include "iDriver_Uc_Uc2DataLoggingAndIntrusionDetection.h"
/*## package ActorPkg */

/*## actor Driver */
typedef struct Driver Driver;
struct Driver {
    RiCReactive ric_reactive;
    /*#[ ignore */
    RiCDefaultReactivePort pUc_Uc1ArmingLogger;
    RiCDefaultReactivePort pUc_Uc2DataLoggingAndIntrusionDetection;
    int rootState_subState;
    int rootState_active;
    BasicWebAdapter * itsWebAdapter;
    /*#]*/
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void Driver_Init(Driver* const me, RiCTask * p_task);

/*## auto_generated */
void Driver_Cleanup(Driver* const me);

/*## auto_generated */
Driver * Driver_Create(RiCTask * p_task);

/*## auto_generated */
void Driver_Destroy(Driver* const me);

/*## auto_generated */
RiCBoolean Driver_startBehavior(Driver* const me);

/***    Framework entries    ***/

/* rootState: */
/*## statechart_method */
int Driver_rootState_IN(const Driver* const me);

/* WaitForUserCommands: */
/*## statechart_method */
int Driver_WaitForUserCommands_IN(const Driver* const me);

/* sendaction_2: */
/*## statechart_method */
int Driver_sendaction_2_IN(const Driver* const me);

/* sendaction_1: */
/*## statechart_method */
int Driver_sendaction_1_IN(const Driver* const me);

/*#[ ignore */
BasicWebAdapter * Driver_getItsWebAdapter(const Driver* const me);

void Driver_visitWebAdaptedRelations(const Driver* const me);

enum Driver_Enum {
    Driver_RiCNonState = 0,
    Driver_WaitForUserCommands = 1,
    Driver_sendaction_2 = 2,
    Driver_sendaction_1 = 3
};
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecution\Animate\Driver.h
*********************************************************************/
