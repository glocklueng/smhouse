/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: Uc_Uc1ArmingLogger
//!	Generated Date	: Sat, 12, May 2012  
	File Path	: ModelExecutionUc1\Animate\Uc_Uc1ArmingLogger.h
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
/*## attribute Mode */
#include "TypesPkg.h"
/*#[ ignore */
#define Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id 7

#define Uc_Uc1ArmingLogger_Timeout_AlarmIndicatorOn_id 6

#define Uc_Uc1ArmingLogger_Timeout_FaultIndicatorOff_id 5

#define Uc_Uc1ArmingLogger_Timeout_WaitExitTimeout_id 4

#define Uc_Uc1ArmingLogger_Timeout_WaitForKey_id 3

#define Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id 2

#define Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id 1
/*#]*/

/*## package FunctionalAnalysisPkg::Uc1ArmingLoggerPkg */

/*## class Uc_Uc1ArmingLogger */
typedef struct Uc_Uc1ArmingLogger Uc_Uc1ArmingLogger;
struct Uc_Uc1ArmingLogger {
    RiCReactive ric_reactive;
    _Mode Mode;		/*## attribute Mode */
    RiCBoolean keyStatus;		/*## attribute keyStatus */
    int t_ExitTimeout;		/*## attribute t_ExitTimeout */
    int t_WakeUp;		/*## attribute t_WakeUp */
    char* Key;		/*## attribute Key */
    RiCBoolean flagMemoryLow;		/*## attribute flagMemoryLow */
    RiCBoolean flagSensorsFailure;		/*## attribute flagSensorsFailure */
    char* savedKeys[8];		/*## attribute savedKeys */
    int t_IdleLed;		/*## attribute t_IdleLed */
    int t_AlarmLed;		/*## attribute t_AlarmLed */
    int t_BatteryLowLed;		/*## attribute t_BatteryLowLed */
    int t_ExitTimeoutLed;		/*## attribute t_ExitTimeoutLed */
    int t_FaultLed;		/*## attribute t_FaultLed */
    RiCBoolean flagAlarm;		/*## attribute flagAlarm */
    RiCBoolean flagBatteryLow;		/*## attribute flagBatteryLow */
    int faultLedCount;		/*## attribute faultLedCount */
    int counter;		/*## attribute counter */
    /*#[ ignore */
    RiCDefaultReactivePort pDriver;
    RiCDefaultReactivePort pAdmin;
    RiCDefaultReactivePort pScanner;
    RiCDefaultReactivePort pSensors;
    int rootState_subState;
    int rootState_active;
    int ModeLed_subState;
    int ModeLed_active;
    int IdleMode_IdleMode_subState;
    int IdleMode_IdleMode_active;
    int CheckKey_subState;
    int ErrorLed_subState;
    int ErrorLed_active;
    int BatteryLed_subState;
    int BatteryLed_active;
    int BatteryLed_BatteryLed_subState;
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
RiCBoolean Uc_Uc1ArmingLogger_getKeyStatus(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
int Uc_Uc1ArmingLogger_getT_ExitTimeout(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
int Uc_Uc1ArmingLogger_getT_WakeUp(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
char* Uc_Uc1ArmingLogger_getKey(const Uc_Uc1ArmingLogger* const me);

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
_Mode Uc_Uc1ArmingLogger_getMode(const Uc_Uc1ArmingLogger* const me);

/*## auto_generated */
RiCBoolean Uc_Uc1ArmingLogger_getFlagMemoryLow(const Uc_Uc1ArmingLogger* const me);

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
void Uc_Uc1ArmingLogger_setMode(Uc_Uc1ArmingLogger* const me, _Mode p_Mode);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setKeyStatus(Uc_Uc1ArmingLogger* const me, RiCBoolean p_keyStatus);

/*## auto_generated */
void Uc_Uc1ArmingLogger_setFlagMemoryLow(Uc_Uc1ArmingLogger* const me, RiCBoolean p_flagMemoryLow);

/* rootState: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_rootState_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
RiCBoolean Uc_Uc1ArmingLogger_rootState_isCompleted(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
void Uc_Uc1ArmingLogger_rootStateEntDef(Uc_Uc1ArmingLogger* const me);

/* terminationstate_58: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_terminationstate_58_IN(const Uc_Uc1ArmingLogger* const me);

/* IdleMode: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_IdleMode_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
void Uc_Uc1ArmingLogger_IdleMode_exit(Uc_Uc1ArmingLogger* const me);

/* ModeLed: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_ModeLed_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
void Uc_Uc1ArmingLogger_ModeLed_exit(Uc_Uc1ArmingLogger* const me);

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

/* IdleMode_IdleMode: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_IdleMode_IdleMode_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
void Uc_Uc1ArmingLogger_IdleMode_IdleMode_exit(Uc_Uc1ArmingLogger* const me);

/* WaitForWakeUp: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_WaitForWakeUp_IN(const Uc_Uc1ArmingLogger* const me);

/* WaitForKey: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_WaitForKey_IN(const Uc_Uc1ArmingLogger* const me);

/* WaitExitTimeout: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_WaitExitTimeout_IN(const Uc_Uc1ArmingLogger* const me);

/* sendaction_79: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_sendaction_79_IN(const Uc_Uc1ArmingLogger* const me);

/* sendaction_61: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_sendaction_61_IN(const Uc_Uc1ArmingLogger* const me);

/* sendaction_60: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_sendaction_60_IN(const Uc_Uc1ArmingLogger* const me);

/* sendaction_59: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_sendaction_59_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc1ArmingLogger_sendaction_59TakeNull(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc1ArmingLogger_sendaction_59_takeEvent(Uc_Uc1ArmingLogger* const me, short id);

/* sendaction_53: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_sendaction_53_IN(const Uc_Uc1ArmingLogger* const me);

/* sendaction_52: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_sendaction_52_IN(const Uc_Uc1ArmingLogger* const me);

/* sendaction_48: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_sendaction_48_IN(const Uc_Uc1ArmingLogger* const me);

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

/* Check: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_Check_IN(const Uc_Uc1ArmingLogger* const me);

/* CheckKey_AuthenticatedHelperState: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
RiCTakeEventStatus Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState_takeEvent(Uc_Uc1ArmingLogger* const me, short id);

/* AuthenticatedHelperState: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_AuthenticatedHelperState_IN(const Uc_Uc1ArmingLogger* const me);

/* ErrorLed: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_ErrorLed_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
void Uc_Uc1ArmingLogger_ErrorLed_exit(Uc_Uc1ArmingLogger* const me);

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

/* BatteryLed: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_BatteryLed_IN(const Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
void Uc_Uc1ArmingLogger_BatteryLed_exit(Uc_Uc1ArmingLogger* const me);

/* BatteryLed_BatteryLed: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_BatteryLed_BatteryLed_IN(const Uc_Uc1ArmingLogger* const me);

/* WaitFlag: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_WaitFlag_IN(const Uc_Uc1ArmingLogger* const me);

/* BatteryIndicatorOn: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_BatteryIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me);

/* BatteryIndicatorOff: */
/*## statechart_method */
int Uc_Uc1ArmingLogger_BatteryIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me);

/*#[ ignore */
BasicWebAdapter * Uc_Uc1ArmingLogger_getItsWebAdapter(const Uc_Uc1ArmingLogger* const me);

void Uc_Uc1ArmingLogger_visitWebAdaptedRelations(const Uc_Uc1ArmingLogger* const me);

enum Uc_Uc1ArmingLogger_Enum {
    Uc_Uc1ArmingLogger_RiCNonState = 0,
    Uc_Uc1ArmingLogger_terminationstate_58 = 1,
    Uc_Uc1ArmingLogger_IdleMode = 2,
    Uc_Uc1ArmingLogger_ModeLed = 3,
    Uc_Uc1ArmingLogger_WaitMode = 4,
    Uc_Uc1ArmingLogger_TimeoutIndicatorOn = 5,
    Uc_Uc1ArmingLogger_TimeoutIndicatorOff = 6,
    Uc_Uc1ArmingLogger_IdleIndicatorOn = 7,
    Uc_Uc1ArmingLogger_IdleIndicatorOff = 8,
    Uc_Uc1ArmingLogger_IdleMode_IdleMode = 9,
    Uc_Uc1ArmingLogger_WaitForWakeUp = 10,
    Uc_Uc1ArmingLogger_WaitForKey = 11,
    Uc_Uc1ArmingLogger_WaitExitTimeout = 12,
    Uc_Uc1ArmingLogger_sendaction_79 = 13,
    Uc_Uc1ArmingLogger_sendaction_61 = 14,
    Uc_Uc1ArmingLogger_sendaction_60 = 15,
    Uc_Uc1ArmingLogger_sendaction_59 = 16,
    Uc_Uc1ArmingLogger_sendaction_53 = 17,
    Uc_Uc1ArmingLogger_sendaction_52 = 18,
    Uc_Uc1ArmingLogger_sendaction_48 = 19,
    Uc_Uc1ArmingLogger_evReadKey = 20,
    Uc_Uc1ArmingLogger_DeviceFailure = 21,
    Uc_Uc1ArmingLogger_CheckSensors = 22,
    Uc_Uc1ArmingLogger_CheckMemory = 23,
    Uc_Uc1ArmingLogger_CheckKey = 24,
    Uc_Uc1ArmingLogger_NotAuthenticatedHelperState = 25,
    Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState = 26,
    Uc_Uc1ArmingLogger_Check = 27,
    Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState = 28,
    Uc_Uc1ArmingLogger_AuthenticatedHelperState = 29,
    Uc_Uc1ArmingLogger_ErrorLed = 30,
    Uc_Uc1ArmingLogger_WaitForButton = 31,
    Uc_Uc1ArmingLogger_FaultIndicatorOn = 32,
    Uc_Uc1ArmingLogger_FaultIndicatorOff = 33,
    Uc_Uc1ArmingLogger_AlarmIndicatorOn = 34,
    Uc_Uc1ArmingLogger_AlarmIndicatorOff = 35,
    Uc_Uc1ArmingLogger_BatteryLed = 36,
    Uc_Uc1ArmingLogger_BatteryLed_BatteryLed = 37,
    Uc_Uc1ArmingLogger_WaitFlag = 38,
    Uc_Uc1ArmingLogger_BatteryIndicatorOn = 39,
    Uc_Uc1ArmingLogger_BatteryIndicatorOff = 40
};
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\Uc_Uc1ArmingLogger.h
*********************************************************************/
