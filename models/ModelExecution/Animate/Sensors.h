/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Sensors
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\Sensors.h
*********************************************************************/

#ifndef Sensors_H
#define Sensors_H

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
/*## dependency iSensors_Uc_Uc1ArmingLogger */
#include "iSensors_Uc_Uc1ArmingLogger.h"
/*## dependency iSensors_Uc_Uc2DataLoggingAndIntrusionDetection */
#include "iSensors_Uc_Uc2DataLoggingAndIntrusionDetection.h"
/*## dependency iUc_Uc1ArmingLogger_Sensors */
#include "iUc_Uc1ArmingLogger_Sensors.h"
/*#[ ignore */
#define Sensors_Timeout_PoweringOn_id 1
/*#]*/

/*## package ActorPkg */

/*## actor Sensors */
typedef struct Sensors Sensors;
struct Sensors {
    RiCReactive ric_reactive;
    RiCBoolean Failure;		/*## attribute Failure */
    int t_PowerDelay;		/*## attribute t_PowerDelay */
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
void Sensors_Init(Sensors* const me, RiCTask * p_task);

/*## auto_generated */
void Sensors_Cleanup(Sensors* const me);

/*## auto_generated */
void setFailure(Sensors* const me, RiCBoolean p_Failure);

/*## auto_generated */
void setT_PowerDelay(Sensors* const me, int p_t_PowerDelay);

/*## auto_generated */
Sensors * Sensors_Create(RiCTask * p_task);

/*## auto_generated */
void Sensors_Destroy(Sensors* const me);

/*## auto_generated */
RiCBoolean Sensors_startBehavior(Sensors* const me);

/***    Framework entries    ***/

/* rootState: */
/*## statechart_method */
int Sensors_rootState_IN(const Sensors* const me);

/* sendaction_9: */
/*## statechart_method */
int Sensors_sendaction_9_IN(const Sensors* const me);

/* sendaction_8: */
/*## statechart_method */
int Sensors_sendaction_8_IN(const Sensors* const me);

/* sendaction_11: */
/*## statechart_method */
int Sensors_sendaction_11_IN(const Sensors* const me);

/* ReadingSensors: */
/*## statechart_method */
int Sensors_ReadingSensors_IN(const Sensors* const me);

/* PowerOn: */
/*## statechart_method */
int Sensors_PowerOn_IN(const Sensors* const me);

/* PowerOff: */
/*## statechart_method */
int Sensors_PowerOff_IN(const Sensors* const me);

/* PoweringOn: */
/*## statechart_method */
int Sensors_PoweringOn_IN(const Sensors* const me);

/* CheckSensors: */
/*## statechart_method */
int Sensors_CheckSensors_IN(const Sensors* const me);

/*#[ ignore */
BasicWebAdapter * Sensors_getItsWebAdapter(const Sensors* const me);

void Sensors_visitWebAdaptedRelations(const Sensors* const me);

enum Sensors_Enum {
    Sensors_RiCNonState = 0,
    Sensors_sendaction_9 = 1,
    Sensors_sendaction_8 = 2,
    Sensors_sendaction_11 = 3,
    Sensors_ReadingSensors = 4,
    Sensors_PowerOn = 5,
    Sensors_PowerOff = 6,
    Sensors_PoweringOn = 7,
    Sensors_CheckSensors = 8
};
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecution\Animate\Sensors.h
*********************************************************************/
