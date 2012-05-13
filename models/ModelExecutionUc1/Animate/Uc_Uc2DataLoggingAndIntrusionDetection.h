/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: Uc_Uc2DataLoggingAndIntrusionDetection
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecutionUc1\Animate\Uc_Uc2DataLoggingAndIntrusionDetection.h
*********************************************************************/

#ifndef Uc_Uc2DataLoggingAndIntrusionDetection_H
#define Uc_Uc2DataLoggingAndIntrusionDetection_H

/*## auto_generated */
#include <WebComponents\WebComponentsTypes.h>
/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc2DataLoggingAndIntrusionDetectionPkg.h"
/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*## auto_generated */
#include <oxf\RiCDefaultReactivePort.h>
/*## dependency iUc_Uc2DataLoggingAndIntrusionDetection_Scanner */
#include "iUc_Uc2DataLoggingAndIntrusionDetection_Scanner.h"
/*## dependency iUc_Uc2DataLoggingAndIntrusionDetection_Sensors */
#include "iUc_Uc2DataLoggingAndIntrusionDetection_Sensors.h"
/*#[ ignore */
#define Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_MotionHandling_id 3

#define Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_Sleeping_id 2

#define Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_KeyHandling_id 1

#define evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event_id 31000
/*#]*/

typedef struct evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event;
/*#[ ignore */
struct evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event {
    RiCEvent ric_event;
};
/*#]*/

/*## package FunctionalAnalysisPkg::Uc2DataLoggingAndIntrusionDetectionPkg */

/*## class Uc_Uc2DataLoggingAndIntrusionDetection */
typedef struct Uc_Uc2DataLoggingAndIntrusionDetection Uc_Uc2DataLoggingAndIntrusionDetection;
/*## type _Mode */
typedef enum Uc_Uc2DataLoggingAndIntrusionDetection__Mode {
    IDLE,
    ACQUISITION,
    SLEEP,
    EXIT_TIMEOUT
} Uc_Uc2DataLoggingAndIntrusionDetection__Mode;

struct Uc_Uc2DataLoggingAndIntrusionDetection {
    RiCReactive ric_reactive;
    RiCBoolean flagPSensor;		/*## attribute flagPSensor */
    RiCBoolean flagWriteSensors;		/*## attribute flagWriteSensors */
    RiCBoolean flagSensorsFailure;		/*## attribute flagSensorsFailure */
    RiCBoolean flagFault;		/*## attribute flagFault */
    int t_SensorsPollTime;		/*## attribute t_SensorsPollTime */
    int t_IntrusionDelay;		/*## attribute t_IntrusionDelay */
    RiCBoolean keyStatus;		/*## attribute keyStatus */
    Uc_Uc2DataLoggingAndIntrusionDetection__Mode Mode;		/*## attribute Mode */
    RiCBoolean flagSync;		/*## attribute flagSync */
    /*#[ ignore */
    RiCDefaultReactivePort pSensors;
    RiCDefaultReactivePort pScanner;
    RiCDefaultReactivePort pDriver;
    int rootState_subState;
    int rootState_active;
    int state_20_subState;
    int state_20_active;
    int KeyHandling_subState;
    int state_19_subState;
    int state_19_active;
    BasicWebAdapter * itsWebAdapter;
    /*#]*/
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_Init(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCTask * p_task);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_Cleanup(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/***    User explicit entries    ***/


/* Operations */

/*## operation systemFailure() */
void Uc_Uc2DataLoggingAndIntrusionDetection_systemFailure(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation startIntrusionTimer() */
void Uc_Uc2DataLoggingAndIntrusionDetection_startIntrusionTimer(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getFlagPSensor(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_setFlagPSensor(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_flagPSensor);

/*## auto_generated */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getFlagWriteSensors(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_setFlagWriteSensors(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_flagWriteSensors);

/*## auto_generated */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getFlagSensorsFailure(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_setFlagSensorsFailure(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_flagSensorsFailure);

/*## auto_generated */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getFlagFault(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_setFlagFault(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_flagFault);

/*## auto_generated */
int Uc_Uc2DataLoggingAndIntrusionDetection_getT_SensorsPollTime(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_setT_SensorsPollTime(Uc_Uc2DataLoggingAndIntrusionDetection* const me, int p_t_SensorsPollTime);

/*## auto_generated */
int Uc_Uc2DataLoggingAndIntrusionDetection_getT_IntrusionDelay(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_setT_IntrusionDelay(Uc_Uc2DataLoggingAndIntrusionDetection* const me, int p_t_IntrusionDelay);

/*## auto_generated */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getKeyStatus(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_setKeyStatus(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_keyStatus);

/*## auto_generated */
Uc_Uc2DataLoggingAndIntrusionDetection__Mode Uc_Uc2DataLoggingAndIntrusionDetection_getMode(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_setMode(Uc_Uc2DataLoggingAndIntrusionDetection* const me, Uc_Uc2DataLoggingAndIntrusionDetection__Mode p_Mode);

/*## auto_generated */
Uc_Uc2DataLoggingAndIntrusionDetection * Uc_Uc2DataLoggingAndIntrusionDetection_Create(RiCTask * p_task);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_Destroy(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_startBehavior(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## TriggeredOperation evStart() */
void Uc_Uc2DataLoggingAndIntrusionDetection_evStart(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/***    Framework entries    ***/

/* rootState: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_rootState_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_rootState_isCompleted(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* AcquisitionMode: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_isCompleted(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
void Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_exit(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* state_20: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_state_20_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_state_20_isCompleted(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
void Uc_Uc2DataLoggingAndIntrusionDetection_state_20_exit(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WaitForMotion: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* terminationstate_37: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_37_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_38: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_38_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* KeyHandling: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
void Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_exit(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id);

/* WaitForKey: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WaitForButton: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WaitFlag: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id);

/* SwitchToIdleMode: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_33: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_25: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_25_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_23: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_23_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* GoToIdleModeHelperState: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id);

/* CheckKey: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id);

/* state_19: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_state_19_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_state_19_isCompleted(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
void Uc_Uc2DataLoggingAndIntrusionDetection_state_19_exit(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WriteSensorsData: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WaitForSync: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WaitForAcquisitionMode: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* terminationstate_13: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* Sleeping: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* SensorsFailure: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_SensorsFailure_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_9: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_9_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_7: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_7_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_6: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_4: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_2: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* MotionHandling: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_MotionHandling_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* InitialWrite: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_InitialWrite_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* InitialSensorsRead: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_InitialSensorsRead_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* CheckSensors: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_CheckSensors_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* CheckData: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_CheckData_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*#[ ignore */
BasicWebAdapter * Uc_Uc2DataLoggingAndIntrusionDetection_getItsWebAdapter(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

void Uc_Uc2DataLoggingAndIntrusionDetection_visitWebAdaptedRelations(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

enum Uc_Uc2DataLoggingAndIntrusionDetection_Enum {
    Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState = 0,
    Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode = 1,
    Uc_Uc2DataLoggingAndIntrusionDetection_state_20 = 2,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion = 3,
    Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_37 = 4,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_38 = 5,
    Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling = 6,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey = 7,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton = 8,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag = 9,
    Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode = 10,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33 = 11,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_25 = 12,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_23 = 13,
    Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState = 14,
    Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey = 15,
    Uc_Uc2DataLoggingAndIntrusionDetection_state_19 = 16,
    Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData = 17,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync = 18,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode = 19,
    Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13 = 20,
    Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping = 21,
    Uc_Uc2DataLoggingAndIntrusionDetection_SensorsFailure = 22,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_9 = 23,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_7 = 24,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6 = 25,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4 = 26,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2 = 27,
    Uc_Uc2DataLoggingAndIntrusionDetection_MotionHandling = 28,
    Uc_Uc2DataLoggingAndIntrusionDetection_InitialWrite = 29,
    Uc_Uc2DataLoggingAndIntrusionDetection_InitialSensorsRead = 30,
    Uc_Uc2DataLoggingAndIntrusionDetection_CheckSensors = 31,
    Uc_Uc2DataLoggingAndIntrusionDetection_CheckData = 32
};
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\Uc_Uc2DataLoggingAndIntrusionDetection.h
*********************************************************************/
