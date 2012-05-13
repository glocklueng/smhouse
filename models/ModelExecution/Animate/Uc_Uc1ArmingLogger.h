/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Uc_Uc1ArmingLogger
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\Uc_Uc1ArmingLogger.h
*********************************************************************/

#ifndef Uc_Uc1ArmingLogger_H
#define Uc_Uc1ArmingLogger_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc1ArmingLoggerPkg.h"
/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*## auto_generated */
#include <oxf\RiCDefaultReactivePort.h>
/*## auto_generated */
#include <WebComponents\WebComponentsTypes.h>
/*#[ ignore */
#define Uc_Uc1ArmingLogger_Timeout_AlarmIndicatorOn_id 7

#define Uc_Uc1ArmingLogger_Timeout_FaultIndicatorOff_id 6

#define Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id 5

#define Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id 4

#define Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id 3

#define Uc_Uc1ArmingLogger_Timeout_RunExitTimeoutMode_id 2

#define Uc_Uc1ArmingLogger_Timeout_WaitForKey_id 1

#define evReset_Uc_Uc1ArmingLogger_Event_id 31000
/*#]*/

typedef struct evReset_Uc_Uc1ArmingLogger_Event evReset_Uc_Uc1ArmingLogger_Event;
/*#[ ignore */
struct evReset_Uc_Uc1ArmingLogger_Event {
    RiCEvent ric_event;
};
/*#]*/

/*## package FunctionalAnalysisPkg::Uc1ArmingLoggerPkg */

/*## class Uc_Uc1ArmingLogger */
typedef struct Uc_Uc1ArmingLogger Uc_Uc1ArmingLogger;
/*## type _Mode */
typedef enum Uc_Uc1ArmingLogger__Mode {
    IDLE,
    ACQUISITION,
    SLEEP,
    EXIT_TIMEOUT
} Uc_Uc1ArmingLogger__Mode;

/*## type _keyStatus */
typedef enum Uc_Uc1ArmingLogger__keyStatus {
    VALID,
    NOT_VALID
} Uc_Uc1ArmingLogger__keyStatus;

struct Uc_Uc1ArmingLogger {
    RiCReactive ric_reactive;
    Uc_Uc1ArmingLogger__Mode Mode;		/*## attribute Mode */
    Uc_Uc1ArmingLogger__keyStatus keyStatus;		/*## attribute keyStatus */
    int t_ExitTimeout;		/*## attribute t_ExitTimeout */
    int t_WakeUp;		/*## attribute t_WakeUp */
    char* Key;		/*## attribute Key */
    Uc_Uc1ArmingLogger__keyStatus flagMemoryLow;		/*## attribute flagMemoryLow */
    RiCBoolean flagSensorsFailure;		/*## attribute flagSensorsFailure */
    char* savedKeys[8];		/*## attribute savedKeys */
    int t_IdleLed;		/*## attribute t_IdleLed */
    int t_AlarmLed;		/*## attribute t_AlarmLed */
    int t_BatteryLowLed;		/*## attribute t_BatteryLowLed */
    int t_ExitTimeoutLed;		/*## attribute t_ExitTimeoutLed */
    int t_FaultLed;		/*## attribute t_FaultLed */
    RiCBoolean flagAlarm;		/*## attribute flagAlarm */
    RiCBoolean flagBatteryLow;		/*## attribute flagBatteryLow */
    RiCBoolean flagFault;		/*## attribute flagFault */
    int faultLedCount;		/*## attribute faultLedCount */
    int counter;		/*## attribute counter */
    /*#[ ignore */
    RiCDefaultReactivePort pDriver;
    RiCDefaultReactivePort pAdmin;
    RiCDefaultReactivePort pScanner;
    RiCDefaultReactivePort pSensors;
    int rootState_subState;
    int rootState_active;
    int Main_subState;
    int Main_active;
    int CheckKey_subState;
    int LowBatteryLed_subState;
    int LowBatteryLed_active;
    int IdleLed_subState;
    int IdleLed_active;
    int AlarmLed_subState;
    int AlarmLed_active;
    BasicWebAdapter * itsWebAdapter;
    /*#]*/
};

/***    Framework entries    ***/

/***    User implicit entries    ***/

/* Constructors and destructors:*/

/*## auto_generated */
void Uc_Uc1ArmingLogger_Cleanup(Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
Uc_Uc1ArmingLogger * Uc_Uc1ArmingLogger_Create(RiCTask * p_task);

/*## auto_generated */
void Uc_Uc1ArmingLogger_Destroy(Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
RiCBoolean Uc_Uc1ArmingLogger_startBehavior(Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
Uc_Uc1ArmingLogger__keyStatus Uc_Uc1ArmingLogger_getKeyStatus(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
int Uc_Uc1ArmingLogger_getT_ExitTimeout(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
int Uc_Uc1ArmingLogger_getT_WakeUp(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
char* Uc_Uc1ArmingLogger_getKey(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setMode(Uc_Uc1ArmingLogger* const me, Uc_Uc1ArmingLogger__Mode p_Mode);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setKeyStatus(Uc_Uc1ArmingLogger* const me, Uc_Uc1ArmingLogger__keyStatus p_keyStatus);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setT_ExitTimeout(Uc_Uc1ArmingLogger* const me, int p_t_ExitTimeout);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setT_WakeUp(Uc_Uc1ArmingLogger* const me, int p_t_WakeUp);

/*## operation Init() */
void Uc_Uc1ArmingLogger_Init(Uc_Uc1ArmingLogger* const me, RiCTask * p_task);

/*## auto_generated */
int Uc_Uc1ArmingLogger_getT_IdleLed(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setT_IdleLed(Uc_Uc1ArmingLogger* const me, int p_t_IdleLed);

/*## auto_generated */
int Uc_Uc1ArmingLogger_getT_AlarmLed(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setT_AlarmLed(Uc_Uc1ArmingLogger* const me, int p_t_AlarmLed);

/*## auto_generated */
int Uc_Uc1ArmingLogger_getT_BatteryLowLed(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setT_BatteryLowLed(Uc_Uc1ArmingLogger* const me, int p_t_BatteryLowLed);

/*## auto_generated */
int Uc_Uc1ArmingLogger_getT_ExitTimeoutLed(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setT_ExitTimeoutLed(Uc_Uc1ArmingLogger* const me, int p_t_ExitTimeoutLed);

/*## auto_generated */
int Uc_Uc1ArmingLogger_getT_FaultLed(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setT_FaultLed(Uc_Uc1ArmingLogger* const me, int p_t_FaultLed);

/*## auto_generated */
Uc_Uc1ArmingLogger__Mode Uc_Uc1ArmingLogger_getMode(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
Uc_Uc1ArmingLogger__keyStatus Uc_Uc1ArmingLogger_getFlagMemoryLow(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setFlagMemoryLow(Uc_Uc1ArmingLogger* const me, Uc_Uc1ArmingLogger__keyStatus p_flagMemoryLow);

/*## auto_generated */
RiCBoolean Uc_Uc1ArmingLogger_getFlagSensorsFailure(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
RiCBoolean Uc_Uc1ArmingLogger_getFlagAlarm(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setFlagAlarm(Uc_Uc1ArmingLogger* const me, RiCBoolean p_flagAlarm);

/*## auto_generated */
RiCBoolean Uc_Uc1ArmingLogger_getFlagBatteryLow(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setFlagBatteryLow(Uc_Uc1ArmingLogger* const me, RiCBoolean p_flagBatteryLow);

/*## auto_generated */
RiCBoolean Uc_Uc1ArmingLogger_getFlagFault(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setFlagFault(Uc_Uc1ArmingLogger* const me, RiCBoolean p_flagFault);

/*## auto_generated */
int Uc_Uc1ArmingLogger_getFaultLedCount(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setFaultLedCount(Uc_Uc1ArmingLogger* const me, int p_faultLedCount);

/*## TriggeredOperation evReset() */
void Uc_Uc1ArmingLogger_evReset(Uc_Uc1ArmingLogger* const me);

/* rootState: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_rootState_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
RiCBoolean Uc_Uc1ArmingLogger_rootState_isCompleted(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
void Uc_Uc1ArmingLogger_rootStateEntDef(Uc_Uc1ArmingLogger* const me);

/* Uc1ArmingLogger: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_Uc1ArmingLogger_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
RiCBoolean Uc_Uc1ArmingLogger_Uc1ArmingLogger_isCompleted(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
void Uc_Uc1ArmingLogger_Uc1ArmingLogger_exit(Uc_Uc1ArmingLogger* const me);

/* Main: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_Main_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
RiCBoolean Uc_Uc1ArmingLogger_Main_isCompleted(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
void Uc_Uc1ArmingLogger_Main_exit(Uc_Uc1ArmingLogger* const me);

/* WaitForWakeUp: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_WaitForWakeUp_IN(const Uc_Uc1ArmingLogger* const me);

/* WaitForKey: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_WaitForKey_IN(const Uc_Uc1ArmingLogger* const me);

/* terminationstate_43: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_terminationstate_43_IN(const Uc_Uc1ArmingLogger* const me);

/* StartAcquisitionMode: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_StartAcquisitionMode_IN(const Uc_Uc1ArmingLogger* const me);

/* sendaction_9: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_sendaction_9_IN(const Uc_Uc1ArmingLogger* const me);

/* sendaction_8: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_sendaction_8_IN(const Uc_Uc1ArmingLogger* const me);

/* sendaction_25: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_sendaction_25_IN(const Uc_Uc1ArmingLogger* const me);

/* sendaction_16: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_sendaction_16_IN(const Uc_Uc1ArmingLogger* const me);

/* sendaction_15: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_sendaction_15_IN(const Uc_Uc1ArmingLogger* const me);

/* RunExitTimeoutMode: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_RunExitTimeoutMode_IN(const Uc_Uc1ArmingLogger* const me);

/* evReadKey: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_evReadKey_IN(const Uc_Uc1ArmingLogger* const me);

/* DeviceFailure: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_DeviceFailure_IN(const Uc_Uc1ArmingLogger* const me);

/* CheckSensors: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_CheckSensors_IN(const Uc_Uc1ArmingLogger* const me);

/* CheckMemory: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_CheckMemory_IN(const Uc_Uc1ArmingLogger* const me);

/* CheckKey: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_CheckKey_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
void Uc_Uc1ArmingLogger_CheckKey_exit(Uc_Uc1ArmingLogger* const me);

/* NotAuthenticatedHelperState: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_NotAuthenticatedHelperState_IN(const Uc_Uc1ArmingLogger* const me);

/* CheckKey_NotAuthenticatedHelperState: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState_takeEvent(Uc_Uc1ArmingLogger* const me, short id);

/* GoToIdleHelperState: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_GoToIdleHelperState_IN(const Uc_Uc1ArmingLogger* const me);

/* CheckKey_GoToIdleHelperState: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_CheckKey_GoToIdleHelperState_IN(const Uc_Uc1ArmingLogger* const me);

/* Check: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_Check_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc1ArmingLogger_Check_takeEvent(Uc_Uc1ArmingLogger* const me, short id);

/* AuthenticatedHelperState: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_AuthenticatedHelperState_IN(const Uc_Uc1ArmingLogger* const me);

/* CheckKey_AuthenticatedHelperState: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState_IN(const Uc_Uc1ArmingLogger* const me);

/* LowBatteryLed: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_LowBatteryLed_IN(const Uc_Uc1ArmingLogger* const me);

/* WaitFlag: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_WaitFlag_IN(const Uc_Uc1ArmingLogger* const me);

/* BatteryIndicatorOn: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_BatteryIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me);

/* BatteryIndicatorOff: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_BatteryIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me);

/* IdleLed: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_IdleLed_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
void Uc_Uc1ArmingLogger_IdleLed_exit(Uc_Uc1ArmingLogger* const me);

/* WaitMode: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_WaitMode_IN(const Uc_Uc1ArmingLogger* const me);

/* TimeoutIndicatorOn: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_TimeoutIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me);

/* TimeoutIndicatorOff: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_TimeoutIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me);

/* IdleIndicatorOn: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_IdleIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me);

/* IdleIndicatorOff: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_IdleIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me);

/* AlarmLed: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_AlarmLed_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
void Uc_Uc1ArmingLogger_AlarmLed_exit(Uc_Uc1ArmingLogger* const me);

/* WaitForButton: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_WaitForButton_IN(const Uc_Uc1ArmingLogger* const me);

/* FaultIndicatorOn: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_FaultIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me);

/* FaultIndicatorOff: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_FaultIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me);

/* AlarmIndicatorOn: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_AlarmIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me);

/* AlarmIndicatorOff: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_AlarmIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me);

/*#[ ignore */
BasicWebAdapter * Uc_Uc1ArmingLogger_getItsWebAdapter(const Uc_Uc1ArmingLogger* const me);

void Uc_Uc1ArmingLogger_visitWebAdaptedRelations(const Uc_Uc1ArmingLogger* const me);

enum Uc_Uc1ArmingLogger_Enum {
    Uc_Uc1ArmingLogger_RiCNonState = 0,
    Uc_Uc1ArmingLogger_Uc1ArmingLogger = 1,
    Uc_Uc1ArmingLogger_Main = 2,
    Uc_Uc1ArmingLogger_WaitForWakeUp = 3,
    Uc_Uc1ArmingLogger_WaitForKey = 4,
    Uc_Uc1ArmingLogger_terminationstate_43 = 5,
    Uc_Uc1ArmingLogger_StartAcquisitionMode = 6,
    Uc_Uc1ArmingLogger_sendaction_9 = 7,
    Uc_Uc1ArmingLogger_sendaction_8 = 8,
    Uc_Uc1ArmingLogger_sendaction_25 = 9,
    Uc_Uc1ArmingLogger_sendaction_16 = 10,
    Uc_Uc1ArmingLogger_sendaction_15 = 11,
    Uc_Uc1ArmingLogger_RunExitTimeoutMode = 12,
    Uc_Uc1ArmingLogger_evReadKey = 13,
    Uc_Uc1ArmingLogger_DeviceFailure = 14,
    Uc_Uc1ArmingLogger_CheckSensors = 15,
    Uc_Uc1ArmingLogger_CheckMemory = 16,
    Uc_Uc1ArmingLogger_CheckKey = 17,
    Uc_Uc1ArmingLogger_NotAuthenticatedHelperState = 18,
    Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState = 19,
    Uc_Uc1ArmingLogger_GoToIdleHelperState = 20,
    Uc_Uc1ArmingLogger_CheckKey_GoToIdleHelperState = 21,
    Uc_Uc1ArmingLogger_Check = 22,
    Uc_Uc1ArmingLogger_AuthenticatedHelperState = 23,
    Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState = 24,
    Uc_Uc1ArmingLogger_LowBatteryLed = 25,
    Uc_Uc1ArmingLogger_WaitFlag = 26,
    Uc_Uc1ArmingLogger_BatteryIndicatorOn = 27,
    Uc_Uc1ArmingLogger_BatteryIndicatorOff = 28,
    Uc_Uc1ArmingLogger_IdleLed = 29,
    Uc_Uc1ArmingLogger_WaitMode = 30,
    Uc_Uc1ArmingLogger_TimeoutIndicatorOn = 31,
    Uc_Uc1ArmingLogger_TimeoutIndicatorOff = 32,
    Uc_Uc1ArmingLogger_IdleIndicatorOn = 33,
    Uc_Uc1ArmingLogger_IdleIndicatorOff = 34,
    Uc_Uc1ArmingLogger_AlarmLed = 35,
    Uc_Uc1ArmingLogger_WaitForButton = 36,
    Uc_Uc1ArmingLogger_FaultIndicatorOn = 37,
    Uc_Uc1ArmingLogger_FaultIndicatorOff = 38,
    Uc_Uc1ArmingLogger_AlarmIndicatorOn = 39,
    Uc_Uc1ArmingLogger_AlarmIndicatorOff = 40
};
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecution\Animate\Uc_Uc1ArmingLogger.h
*********************************************************************/
