/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc2 
	Configuration 	: Animate
	Model Element	: Sensors
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc2\Animate\Sensors.h
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
#define Sensors_Timeout_PoweringOn_id 2

#define Sensors_Timeout_WaitRetriggerDelay_id 1
/*#]*/

/*## package ActorPkg */

/*## actor Sensors */
typedef struct Sensors Sensors;
struct Sensors {
    RiCReactive ric_reactive;
    int t_PowerDelay;		/*## attribute t_PowerDelay */
    int t_RetriggerDelay;		/*## attribute t_RetriggerDelay */
    RiCBoolean Failure;		/*## attribute Failure */
    /*#[ ignore */
    RiCDefaultReactivePort pUc_Uc2DataLoggingAndIntrusionDetection;
    RiCDefaultReactivePort pUc_Uc1ArmingLogger;
    int rootState_subState;
    int rootState_active;
    int state_16_subState;
    int state_16_active;
    int PrimarySensor_subState;
    int state_15_subState;
    int state_15_active;
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
void setT_PowerDelay(Sensors* const me, int p_t_PowerDelay);

/*## auto_generated */
void setFailure(Sensors* const me, RiCBoolean p_Failure);

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

/* SensorsBehaviour: */
/*## statechart_method */
int Sensors_SensorsBehaviour_IN(const Sensors* const me);

/*## statechart_method */
void Sensors_SensorsBehaviour_exit(Sensors* const me);

/* state_16: */
/*## statechart_method */
int Sensors_state_16_IN(const Sensors* const me);

/* WaitForAcquisitionMode: */
/*## statechart_method */
int Sensors_WaitForAcquisitionMode_IN(const Sensors* const me);

/* PrimarySensor: */
/*## statechart_method */
int Sensors_PrimarySensor_IN(const Sensors* const me);

/*## statechart_method */
void Sensors_PrimarySensor_exit(Sensors* const me);

/*## statechart_method */
RiCTakeEventStatus Sensors_PrimarySensor_takeEvent(Sensors* const me, short id);

/* WaitRetriggerDelay: */
/*## statechart_method */
int Sensors_WaitRetriggerDelay_IN(const Sensors* const me);

/* sendaction_24: */
/*## statechart_method */
int Sensors_sendaction_24_IN(const Sensors* const me);

/* sendaction_21: */
/*## statechart_method */
int Sensors_sendaction_21_IN(const Sensors* const me);

/* MotionMonitoring: */
/*## statechart_method */
int Sensors_MotionMonitoring_IN(const Sensors* const me);

/* state_15: */
/*## statechart_method */
int Sensors_state_15_IN(const Sensors* const me);

/*## statechart_method */
void Sensors_state_15_exit(Sensors* const me);

/* sendaction_9: */
/*## statechart_method */
int Sensors_sendaction_9_IN(const Sensors* const me);

/* sendaction_8: */
/*## statechart_method */
int Sensors_sendaction_8_IN(const Sensors* const me);

/* sendaction_13: */
/*## statechart_method */
int Sensors_sendaction_13_IN(const Sensors* const me);

/* sendaction_12: */
/*## statechart_method */
int Sensors_sendaction_12_IN(const Sensors* const me);

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
    Sensors_SensorsBehaviour = 1,
    Sensors_state_16 = 2,
    Sensors_WaitForAcquisitionMode = 3,
    Sensors_PrimarySensor = 4,
    Sensors_WaitRetriggerDelay = 5,
    Sensors_sendaction_24 = 6,
    Sensors_sendaction_21 = 7,
    Sensors_MotionMonitoring = 8,
    Sensors_state_15 = 9,
    Sensors_sendaction_9 = 10,
    Sensors_sendaction_8 = 11,
    Sensors_sendaction_13 = 12,
    Sensors_sendaction_12 = 13,
    Sensors_sendaction_11 = 14,
    Sensors_ReadingSensors = 15,
    Sensors_PowerOn = 16,
    Sensors_PowerOff = 17,
    Sensors_PoweringOn = 18,
    Sensors_CheckSensors = 19
};
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecutionUc2\Animate\Sensors.h
*********************************************************************/
