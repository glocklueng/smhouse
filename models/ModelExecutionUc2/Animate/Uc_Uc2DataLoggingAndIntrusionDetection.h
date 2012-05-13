/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc2 
	Configuration 	: Animate
	Model Element	: Uc_Uc2DataLoggingAndIntrusionDetection
//!	Generated Date	: Sat, 12, May 2012  
	File Path	: ModelExecutionUc2\Animate\Uc_Uc2DataLoggingAndIntrusionDetection.h
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
/*## attribute Mode */
#include "TypesPkg.h"
/*#[ ignore */
#define Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_Sleeping_id 2

#define Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_StartTimer_id 1

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
struct Uc_Uc2DataLoggingAndIntrusionDetection {
    RiCReactive ric_reactive;
    RiCBoolean flagPSensor;		/*## attribute flagPSensor */
    RiCBoolean flagWriteSensors;		/*## attribute flagWriteSensors */
    RiCBoolean flagSensorsFailure;		/*## attribute flagSensorsFailure */
    int t_SensorsPoll;		/*## attribute t_SensorsPoll */
    int t_IntrusionDelay;		/*## attribute t_IntrusionDelay */
    int writesCnt;		/*## attribute writesCnt */
    int intrusionCnt;		/*## attribute intrusionCnt */
    RiCBoolean keyStatus;		/*## attribute keyStatus */
    _Mode Mode;		/*## attribute Mode */
    char* Key;		/*## attribute Key */
    /*#[ ignore */
    RiCDefaultReactivePort pSensors;
    RiCDefaultReactivePort pScanner;
    RiCDefaultReactivePort pDriver;
    int rootState_subState;
    int rootState_active;
    int state_55_subState;
    int state_55_active;
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

/*## auto_generated */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getFlagPSensor(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getFlagWriteSensors(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_setFlagWriteSensors(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_flagWriteSensors);

/*## auto_generated */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getFlagSensorsFailure(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
int Uc_Uc2DataLoggingAndIntrusionDetection_getT_SensorsPoll(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_setT_SensorsPoll(Uc_Uc2DataLoggingAndIntrusionDetection* const me, int p_t_SensorsPoll);

/*## auto_generated */
int Uc_Uc2DataLoggingAndIntrusionDetection_getT_IntrusionDelay(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_setT_IntrusionDelay(Uc_Uc2DataLoggingAndIntrusionDetection* const me, int p_t_IntrusionDelay);

/*## auto_generated */
int Uc_Uc2DataLoggingAndIntrusionDetection_getWritesCnt(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
int Uc_Uc2DataLoggingAndIntrusionDetection_getIntrusionCnt(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getKeyStatus(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
void Uc_Uc2DataLoggingAndIntrusionDetection_setKeyStatus(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_keyStatus);

/*## auto_generated */
_Mode Uc_Uc2DataLoggingAndIntrusionDetection_getMode(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
char* Uc_Uc2DataLoggingAndIntrusionDetection_getKey(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

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

/* terminationstate_46: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_46_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* terminationstate_13: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* AcquisitionMode: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
void Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_exit(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionModeTakeevMotionDetected(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id);

/* state_55: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_state_55_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WaitForTrigger: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForTrigger_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* StartTimer: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_StartTimer_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* state_20: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_state_20_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WaitForMotion: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

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

/* WaitForSync: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WaitForKey: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WaitForButton: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* SwitchToIdleMode: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_40: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_40_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_33: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id);

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
void Uc_Uc2DataLoggingAndIntrusionDetection_state_19_exit(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WriteSensorsData: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WaitIntrusionDelay: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitIntrusionDelay_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* WaitForAcquisitionMode: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* SystemFailure: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_SystemFailure_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* Sleeping: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_9: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_9_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_7: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_7_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_6: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_53: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_53_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_42: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_42_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_42_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id);

/* sendaction_41: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_41_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_4: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/* sendaction_2: */
/*## statechart_method */
int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me);

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
    Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_46 = 1,
    Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13 = 2,
    Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode = 3,
    Uc_Uc2DataLoggingAndIntrusionDetection_state_55 = 4,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitForTrigger = 5,
    Uc_Uc2DataLoggingAndIntrusionDetection_StartTimer = 6,
    Uc_Uc2DataLoggingAndIntrusionDetection_state_20 = 7,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion = 8,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_38 = 9,
    Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling = 10,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync = 11,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey = 12,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton = 13,
    Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode = 14,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_40 = 15,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33 = 16,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_25 = 17,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_23 = 18,
    Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState = 19,
    Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey = 20,
    Uc_Uc2DataLoggingAndIntrusionDetection_state_19 = 21,
    Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData = 22,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitIntrusionDelay = 23,
    Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode = 24,
    Uc_Uc2DataLoggingAndIntrusionDetection_SystemFailure = 25,
    Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping = 26,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_9 = 27,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_7 = 28,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6 = 29,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_53 = 30,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_42 = 31,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_41 = 32,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4 = 33,
    Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2 = 34,
    Uc_Uc2DataLoggingAndIntrusionDetection_InitialWrite = 35,
    Uc_Uc2DataLoggingAndIntrusionDetection_InitialSensorsRead = 36,
    Uc_Uc2DataLoggingAndIntrusionDetection_CheckSensors = 37,
    Uc_Uc2DataLoggingAndIntrusionDetection_CheckData = 38
};
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecutionUc2\Animate\Uc_Uc2DataLoggingAndIntrusionDetection.h
*********************************************************************/
