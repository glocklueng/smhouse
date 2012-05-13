/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: _memoryStatus
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\Uc_Uc1ArmingLogger.c
*********************************************************************/

/*## auto_generated */
#include "Uc_Uc1ArmingLogger.h"
/*## event evWakeUpButtonPressed() */
#include "InterfacesPkg.h"
/*#[ ignore */
#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_Init_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_checkFreeMemory_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_ledAlarm_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_ledIdleMode_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_ledTimeoutMode_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_ledSystemFailure_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_ledBatteryLow_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_readKey_SERIALIZE ARCSA_addAttribute_c(arcsmethod, "Key", ARC_charP2String(Key));

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_sndKeyValid_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_systemWakeUp_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_systemGoToSleep_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_validateKey_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_checkSensors_SERIALIZE ARCSA_addAttribute_c(arcsmethod, "Status", ARC_RiCBoolean2String(Status));

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_setFaultFlag_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_changeMode_SERIALIZE ARCSA_addAttribute_c(arcsmethod, "Mode", ARC_int2String(Mode));

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_evReset_SERIALIZE OM_NO_OP
/*#]*/

/*## type _memoryStatus */
typedef enum _memoryStatus {
    OK,
    LOW,
    FULL
} _memoryStatus;

/*#[ ignore */
static void evReset_Uc_Uc1ArmingLogger_Event_Init(evReset_Uc_Uc1ArmingLogger_Event* const me);

static void evReset_Uc_Uc1ArmingLogger_Event_Init(evReset_Uc_Uc1ArmingLogger_Event* const me) {
    RiCEvent_init(&(me->ric_event), evReset_Uc_Uc1ArmingLogger_Event_id, NULL);
}
/*#]*/

/*## package FunctionalAnalysisPkg::Uc1ArmingLoggerPkg */

/*## class Uc_Uc1ArmingLogger */
/*## auto_generated */
static void initStatechart(Uc_Uc1ArmingLogger* const me);

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes);

/*## statechart_method */
static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void rootState_entDef(void * const void_me);

/*## statechart_method */
static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void Uc1ArmingLogger_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void Uc1ArmingLogger_entDef(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
static RiCTakeEventStatus Uc1ArmingLogger_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void Main_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void Main_entDef(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
static RiCTakeEventStatus Main_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WaitForWakeUp_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void WaitForKey_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void terminationstate_43_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void StartAcquisitionMode_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_9_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_8_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_25_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_16_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_15_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void RunExitTimeoutMode_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void evReadKey_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void DeviceFailure_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void CheckSensors_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void CheckMemory_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void CheckKey_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void CheckKey_entDef(Uc_Uc1ArmingLogger* const me);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void NotAuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void CheckKey_NotAuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void GoToIdleHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void CheckKey_GoToIdleHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void Check_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void AuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void CheckKey_AuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void LowBatteryLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void LowBatteryLed_entDef(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
static RiCTakeEventStatus LowBatteryLed_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WaitFlag_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void BatteryIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void BatteryIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void IdleLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void IdleLed_entDef(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
static RiCTakeEventStatus IdleLed_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WaitMode_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void TimeoutIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void TimeoutIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void IdleIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void IdleIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void AlarmLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void AlarmLed_entDef(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
static RiCTakeEventStatus AlarmLed_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WaitForButton_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void FaultIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void FaultIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void AlarmIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void AlarmIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Uc_Uc1ArmingLogger* const me);

static void Uc_Uc1ArmingLogger_initWebAdapters(Uc_Uc1ArmingLogger* const me);

static int Uc_Uc1ArmingLogger_getModeWebWrapper(Uc_Uc1ArmingLogger* const me);

static void Uc_Uc1ArmingLogger_setModeWebWrapper(Uc_Uc1ArmingLogger* const me, int value);

static char* Uc_Uc1ArmingLogger_getKeyWebWrapper(Uc_Uc1ArmingLogger* const me);

static int Uc_Uc1ArmingLogger_getKeyStatusWebWrapper(Uc_Uc1ArmingLogger* const me);

static void Uc_Uc1ArmingLogger_setKeyStatusWebWrapper(Uc_Uc1ArmingLogger* const me, int value);

static int Uc_Uc1ArmingLogger_getFlagMemoryLowWebWrapper(Uc_Uc1ArmingLogger* const me);

static void Uc_Uc1ArmingLogger_setFlagMemoryLowWebWrapper(Uc_Uc1ArmingLogger* const me, int value);

static const ARCSerCVtbl FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_instrumentVtbl = {
    serializeAttributes,
    NULL
};
/*#]*/

#ifdef _OMINSTRUMENT
OM_INSTRUMENT_OBJECT_TYPE(Uc_Uc1ArmingLogger, Uc1ArmingLoggerPkg, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg, FALSE, &FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_instrumentVtbl)
#endif /* _OMINSTRUMENT */

/*## operation checkFreeMemory() */
static void checkFreeMemory(Uc_Uc1ArmingLogger* const me);

/*## operation ledAlarm() */
static void ledAlarm(Uc_Uc1ArmingLogger* const me);

/*## operation ledIdleMode() */
static void ledIdleMode(Uc_Uc1ArmingLogger* const me);

/*## operation ledTimeoutMode() */
static void ledTimeoutMode(Uc_Uc1ArmingLogger* const me);

/*## operation ledSystemFailure() */
static void ledSystemFailure(Uc_Uc1ArmingLogger* const me);

/*## operation ledBatteryLow() */
static void ledBatteryLow(Uc_Uc1ArmingLogger* const me);

/*## operation readKey(char*) */
static void readKey(Uc_Uc1ArmingLogger* const me, char* Key);

/*## operation sndKeyValid() */
static void sndKeyValid(Uc_Uc1ArmingLogger* const me);

/*## operation systemWakeUp() */
static void systemWakeUp(Uc_Uc1ArmingLogger* const me);

/*## operation systemGoToSleep() */
static void systemGoToSleep(Uc_Uc1ArmingLogger* const me);

/*## operation validateKey() */
static void validateKey(Uc_Uc1ArmingLogger* const me);

/*## operation checkSensors(RiCBoolean) */
static void checkSensors(Uc_Uc1ArmingLogger* const me, RiCBoolean Status);

/*## operation setFaultFlag() */
static void setFaultFlag(Uc_Uc1ArmingLogger* const me);

/*## operation changeMode(int) */
static void changeMode(Uc_Uc1ArmingLogger* const me, int Mode);

/*## auto_generated */
static void initRelations(Uc_Uc1ArmingLogger* const me);

void Uc_Uc1ArmingLogger_Cleanup(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_DESTRUCTOR(me, &me, Uc_Uc1ArmingLogger, ~Uc_Uc1ArmingLogger);
    BasicWebAdapter_Destroy(me->itsWebAdapter);
    RiCReactive_cleanup(&(me->ric_reactive));
}

/*## operation systemGoToSleep() */
static void systemGoToSleep(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, systemGoToSleep, systemGoToSleep(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_systemGoToSleep_SERIALIZE);
    /*#[ operation systemGoToSleep() */
    /*#]*/
}

/*## operation ledIdleMode() */
static void ledIdleMode(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, ledIdleMode, ledIdleMode(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_ledIdleMode_SERIALIZE);
    /*#[ operation ledIdleMode() */
    /*#]*/
}

/*## operation ledTimeoutMode() */
static void ledTimeoutMode(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, ledTimeoutMode, ledTimeoutMode(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_ledTimeoutMode_SERIALIZE);
    /*#[ operation ledTimeoutMode() */
    /*#]*/
}

/*## operation readKey(char*) */
static void readKey(Uc_Uc1ArmingLogger* const me, char* Key) {
    NOTIFY_OPERATION(me, &me, &Key, Uc_Uc1ArmingLogger, readKey, readKey(char*), 1, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_readKey_SERIALIZE);
    {
        /*#[ operation readKey(char*) */
        me->Key = Key;
        /*#]*/
    }
}

/*## operation sndKeyValid() */
static void sndKeyValid(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, sndKeyValid, sndKeyValid(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_sndKeyValid_SERIALIZE);
    /*#[ operation sndKeyValid() */
    /*#]*/
}

Uc_Uc1ArmingLogger * Uc_Uc1ArmingLogger_Create(RiCTask * p_task) {
    Uc_Uc1ArmingLogger* me = (Uc_Uc1ArmingLogger *) malloc(sizeof(Uc_Uc1ArmingLogger));
    if(me!=NULL)
        {
            Uc_Uc1ArmingLogger_Init(me, p_task);
        }
    DYNAMICALLY_ALLOCATED(me);
    return me;
}

void Uc_Uc1ArmingLogger_Destroy(Uc_Uc1ArmingLogger* const me) {
    if(me!=NULL)
        {
            Uc_Uc1ArmingLogger_Cleanup(me);
        }
    free(me);
}

RiCBoolean Uc_Uc1ArmingLogger_startBehavior(Uc_Uc1ArmingLogger* const me) {
    RiCBoolean done = RiCFALSE;
    done = RiCReactive_startBehavior(&(me->ric_reactive));
    return done;
}

static void initRelations(Uc_Uc1ArmingLogger* const me) {
    RiCDefaultReactivePort_Init(&me->pDriver);
    
    RiCDefaultReactivePort_Init(&me->pAdmin);
    
    RiCDefaultReactivePort_Init(&me->pScanner);
    
    RiCDefaultReactivePort_Init(&me->pSensors);
    
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pDriver.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pAdmin.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pScanner.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pSensors.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
}

static void initStatechart(Uc_Uc1ArmingLogger* const me) {
    me->rootState_subState = Uc_Uc1ArmingLogger_RiCNonState;
    me->rootState_active = Uc_Uc1ArmingLogger_RiCNonState;
    me->Main_subState = Uc_Uc1ArmingLogger_RiCNonState;
    me->Main_active = Uc_Uc1ArmingLogger_RiCNonState;
    me->CheckKey_subState = Uc_Uc1ArmingLogger_RiCNonState;
    me->LowBatteryLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
    me->LowBatteryLed_active = Uc_Uc1ArmingLogger_RiCNonState;
    me->IdleLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
    me->IdleLed_active = Uc_Uc1ArmingLogger_RiCNonState;
    me->AlarmLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
    me->AlarmLed_active = Uc_Uc1ArmingLogger_RiCNonState;
}

/*## operation ledAlarm() */
static void ledAlarm(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, ledAlarm, ledAlarm(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_ledAlarm_SERIALIZE);
    /*#[ operation ledAlarm() */
    /*#]*/
}

/*## operation systemWakeUp() */
static void systemWakeUp(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, systemWakeUp, systemWakeUp(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_systemWakeUp_SERIALIZE);
    /*#[ operation systemWakeUp() */
    /*#]*/
}

/*## operation validateKey() */
static void validateKey(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, validateKey, validateKey(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_validateKey_SERIALIZE);
    /*#[ operation validateKey() */
    /*#]*/
}

Uc_Uc1ArmingLogger__keyStatus Uc_Uc1ArmingLogger_getKeyStatus(const Uc_Uc1ArmingLogger* const me) {
    return me->keyStatus;
}

int Uc_Uc1ArmingLogger_getT_ExitTimeout(const Uc_Uc1ArmingLogger* const me) {
    return me->t_ExitTimeout;
}

int Uc_Uc1ArmingLogger_getT_WakeUp(const Uc_Uc1ArmingLogger* const me) {
    return me->t_WakeUp;
}

char* Uc_Uc1ArmingLogger_getKey(const Uc_Uc1ArmingLogger* const me) {
    return me->Key;
}

void Uc_Uc1ArmingLogger_setMode(Uc_Uc1ArmingLogger* const me, Uc_Uc1ArmingLogger__Mode p_Mode) {
    me->Mode = p_Mode;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

void Uc_Uc1ArmingLogger_setKeyStatus(Uc_Uc1ArmingLogger* const me, Uc_Uc1ArmingLogger__keyStatus p_keyStatus) {
    me->keyStatus = p_keyStatus;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

void Uc_Uc1ArmingLogger_setT_ExitTimeout(Uc_Uc1ArmingLogger* const me, int p_t_ExitTimeout) {
    me->t_ExitTimeout = p_t_ExitTimeout;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

void Uc_Uc1ArmingLogger_setT_WakeUp(Uc_Uc1ArmingLogger* const me, int p_t_WakeUp) {
    me->t_WakeUp = p_t_WakeUp;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

/*## operation ledBatteryLow() */
static void ledBatteryLow(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, ledBatteryLow, ledBatteryLow(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_ledBatteryLow_SERIALIZE);
    /*#[ operation ledBatteryLow() */
    /*#]*/
}

/*## operation checkSensors(RiCBoolean) */
static void checkSensors(Uc_Uc1ArmingLogger* const me, RiCBoolean Status) {
    NOTIFY_OPERATION(me, &me, &Status, Uc_Uc1ArmingLogger, checkSensors, checkSensors(RiCBoolean), 1, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_checkSensors_SERIALIZE);
    {
        /*#[ operation checkSensors(RiCBoolean) */
        me->flagSensorsFailure = Status;
        /*#]*/
    }
}

/*## operation setFaultFlag() */
static void setFaultFlag(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, setFaultFlag, setFaultFlag(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_setFaultFlag_SERIALIZE);
    {
        /*#[ operation setFaultFlag() */
        if (me->flagSensorsFailure || me->flagMemoryLow)
          me->flagFault = 1;
        /*#]*/
    }
}

/*## operation changeMode(int) */
static void changeMode(Uc_Uc1ArmingLogger* const me, int Mode) {
    NOTIFY_OPERATION(me, &me, &Mode, Uc_Uc1ArmingLogger, changeMode, changeMode(int), 1, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_changeMode_SERIALIZE);
    {
        /*#[ operation changeMode(int) */
        me->Mode = Mode;
        /*#]*/
    }
}

/*## operation Init() */
void Uc_Uc1ArmingLogger_Init(Uc_Uc1ArmingLogger* const me, RiCTask * p_task) {
    /* Virtual tables Initialization */
    static const RiCReactive_Vtbl Uc_Uc1ArmingLogger_reactiveVtbl = {
        rootState_dispatchEvent,
        rootState_entDef,
        ROOT_STATE_SERIALIZE_STATES(rootState_serializeStates),
        (RiCObjectDestroyMethod) Uc_Uc1ArmingLogger_Destroy,
        NULL,
        NULL,
        NULL,
        (RiCObjectCleanupMethod) Uc_Uc1ArmingLogger_Cleanup,
        (RiCObjectFreeMethod) FreeInstance
    };
    me->t_WakeUp = 60000;
    me->t_ExitTimeout = 30000;
    me->t_IdleLed = 2000;
    me->t_AlarmLed = 5000;
    me->t_BatteryLowLed = 5000;
    me->t_ExitTimeoutLed = 300;
    me->t_FaultLed = 200;
    me->Mode = IDLE;
    me->Key = "myKey";
    me->keyStatus = NOT_VALID;
    me->flagAlarm = 0;
    me->flagBatteryLow = 0;
    me->flagFault = 0;
    me->faultLedCount = 5;
    me->counter = 0;
    RiCReactive_init(&(me->ric_reactive), (void*)me, p_task, &Uc_Uc1ArmingLogger_reactiveVtbl);
    NOTIFY_REACTIVE_CONSTRUCTOR(me, &me, NULL, Uc_Uc1ArmingLogger, Uc_Uc1ArmingLogger_Init, Uc_Uc1ArmingLogger_Init(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_Init_SERIALIZE);
    RiCReactive_setActive(&(me->ric_reactive), RiCFALSE);
    initRelations(me);
    initStatechart(me);
    Uc_Uc1ArmingLogger_initWebAdapters(me);
    {
        /*#[ operation Init() */
        me->savedKeys[0] = "myKey1";
        me->savedKeys[1] = "myKey2";
        me->savedKeys[2] = "myKey3";
        me->savedKeys[3] = "myKey4";
        me->savedKeys[4] = "myKey5";
        me->savedKeys[5] = "myKey6";
        me->savedKeys[6] = "myKey7";
        me->savedKeys[7] = "myKey8";
        /*#]*/
    }
    NOTIFY_END_CONSTRUCTOR(me);
}

int Uc_Uc1ArmingLogger_getT_IdleLed(const Uc_Uc1ArmingLogger* const me) {
    return me->t_IdleLed;
}

void Uc_Uc1ArmingLogger_setT_IdleLed(Uc_Uc1ArmingLogger* const me, int p_t_IdleLed) {
    me->t_IdleLed = p_t_IdleLed;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

int Uc_Uc1ArmingLogger_getT_AlarmLed(const Uc_Uc1ArmingLogger* const me) {
    return me->t_AlarmLed;
}

void Uc_Uc1ArmingLogger_setT_AlarmLed(Uc_Uc1ArmingLogger* const me, int p_t_AlarmLed) {
    me->t_AlarmLed = p_t_AlarmLed;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

int Uc_Uc1ArmingLogger_getT_BatteryLowLed(const Uc_Uc1ArmingLogger* const me) {
    return me->t_BatteryLowLed;
}

void Uc_Uc1ArmingLogger_setT_BatteryLowLed(Uc_Uc1ArmingLogger* const me, int p_t_BatteryLowLed) {
    me->t_BatteryLowLed = p_t_BatteryLowLed;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

int Uc_Uc1ArmingLogger_getT_ExitTimeoutLed(const Uc_Uc1ArmingLogger* const me) {
    return me->t_ExitTimeoutLed;
}

void Uc_Uc1ArmingLogger_setT_ExitTimeoutLed(Uc_Uc1ArmingLogger* const me, int p_t_ExitTimeoutLed) {
    me->t_ExitTimeoutLed = p_t_ExitTimeoutLed;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

int Uc_Uc1ArmingLogger_getT_FaultLed(const Uc_Uc1ArmingLogger* const me) {
    return me->t_FaultLed;
}

void Uc_Uc1ArmingLogger_setT_FaultLed(Uc_Uc1ArmingLogger* const me, int p_t_FaultLed) {
    me->t_FaultLed = p_t_FaultLed;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

Uc_Uc1ArmingLogger__Mode Uc_Uc1ArmingLogger_getMode(const Uc_Uc1ArmingLogger* const me) {
    return me->Mode;
}

Uc_Uc1ArmingLogger__keyStatus Uc_Uc1ArmingLogger_getFlagMemoryLow(const Uc_Uc1ArmingLogger* const me) {
    return me->flagMemoryLow;
}

void Uc_Uc1ArmingLogger_setFlagMemoryLow(Uc_Uc1ArmingLogger* const me, Uc_Uc1ArmingLogger__keyStatus p_flagMemoryLow) {
    me->flagMemoryLow = p_flagMemoryLow;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

RiCBoolean Uc_Uc1ArmingLogger_getFlagSensorsFailure(const Uc_Uc1ArmingLogger* const me) {
    return me->flagSensorsFailure;
}

RiCBoolean Uc_Uc1ArmingLogger_getFlagAlarm(const Uc_Uc1ArmingLogger* const me) {
    return me->flagAlarm;
}

void Uc_Uc1ArmingLogger_setFlagAlarm(Uc_Uc1ArmingLogger* const me, RiCBoolean p_flagAlarm) {
    me->flagAlarm = p_flagAlarm;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

RiCBoolean Uc_Uc1ArmingLogger_getFlagBatteryLow(const Uc_Uc1ArmingLogger* const me) {
    return me->flagBatteryLow;
}

void Uc_Uc1ArmingLogger_setFlagBatteryLow(Uc_Uc1ArmingLogger* const me, RiCBoolean p_flagBatteryLow) {
    me->flagBatteryLow = p_flagBatteryLow;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

RiCBoolean Uc_Uc1ArmingLogger_getFlagFault(const Uc_Uc1ArmingLogger* const me) {
    return me->flagFault;
}

void Uc_Uc1ArmingLogger_setFlagFault(Uc_Uc1ArmingLogger* const me, RiCBoolean p_flagFault) {
    me->flagFault = p_flagFault;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

int Uc_Uc1ArmingLogger_getFaultLedCount(const Uc_Uc1ArmingLogger* const me) {
    return me->faultLedCount;
}

void Uc_Uc1ArmingLogger_setFaultLedCount(Uc_Uc1ArmingLogger* const me, int p_faultLedCount) {
    me->faultLedCount = p_faultLedCount;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

/*## operation checkFreeMemory() */
static void checkFreeMemory(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, checkFreeMemory, checkFreeMemory(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_checkFreeMemory_SERIALIZE);
    /*#[ operation checkFreeMemory() */
    /*#]*/
}

/*## operation ledSystemFailure() */
static void ledSystemFailure(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, ledSystemFailure, ledSystemFailure(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_ledSystemFailure_SERIALIZE);
    /*#[ operation ledSystemFailure() */
    /*#]*/
}

/*## TriggeredOperation evReset() */
void Uc_Uc1ArmingLogger_evReset(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_TRIGGERED_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, evReset, evReset(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_evReset_SERIALIZE);
    {
        evReset_Uc_Uc1ArmingLogger_Event triggerEvent;
        evReset_Uc_Uc1ArmingLogger_Event_Init(&(triggerEvent));
        RiCReactive_takeTrigger(&(me->ric_reactive), &triggerEvent.ric_event);
    }
}

int Uc_Uc1ArmingLogger_rootState_IN(const Uc_Uc1ArmingLogger* const me) {
    return 1;
}

RiCBoolean Uc_Uc1ArmingLogger_rootState_isCompleted(Uc_Uc1ArmingLogger* const me) {
    return RiCTRUE;
}

void Uc_Uc1ArmingLogger_rootStateEntDef(Uc_Uc1ArmingLogger* const me) {
    Uc1ArmingLogger_entDef(me);
}

int Uc_Uc1ArmingLogger_Uc1ArmingLogger_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->rootState_subState == Uc_Uc1ArmingLogger_Uc1ArmingLogger;
}

RiCBoolean Uc_Uc1ArmingLogger_Uc1ArmingLogger_isCompleted(Uc_Uc1ArmingLogger* const me) {
    if(IS_COMPLETED(me, Uc_Uc1ArmingLogger_Main) == RiCFALSE)
        {
            return RiCFALSE;
        }
    return RiCTRUE;
}

void Uc_Uc1ArmingLogger_Uc1ArmingLogger_exit(Uc_Uc1ArmingLogger* const me) {
    Uc_Uc1ArmingLogger_Main_exit(me);
    Uc_Uc1ArmingLogger_IdleLed_exit(me);
    Uc_Uc1ArmingLogger_AlarmLed_exit(me);
    switch (me->LowBatteryLed_subState) {
        case Uc_Uc1ArmingLogger_BatteryIndicatorOff:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed.BatteryIndicatorOff");
        }
        break;
        case Uc_Uc1ArmingLogger_BatteryIndicatorOn:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed.BatteryIndicatorOn");
        }
        break;
        case Uc_Uc1ArmingLogger_WaitFlag:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed.WaitFlag");
        }
        break;
        default:
            break;
    }
    me->LowBatteryLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed");
    
    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger");
}

int Uc_Uc1ArmingLogger_Main_IN(const Uc_Uc1ArmingLogger* const me) {
    return Uc_Uc1ArmingLogger_Uc1ArmingLogger_IN(me);
}

RiCBoolean Uc_Uc1ArmingLogger_Main_isCompleted(Uc_Uc1ArmingLogger* const me) {
    return ( IS_IN(me, Uc_Uc1ArmingLogger_terminationstate_43) );
}

void Uc_Uc1ArmingLogger_Main_exit(Uc_Uc1ArmingLogger* const me) {
    switch (me->Main_subState) {
        case Uc_Uc1ArmingLogger_WaitForWakeUp:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.WaitForWakeUp");
        }
        break;
        case Uc_Uc1ArmingLogger_WaitForKey:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_WaitForKey_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.WaitForKey");
        }
        break;
        case Uc_Uc1ArmingLogger_RunExitTimeoutMode:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_RunExitTimeoutMode_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.RunExitTimeoutMode");
        }
        break;
        case Uc_Uc1ArmingLogger_StartAcquisitionMode:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.StartAcquisitionMode");
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey:
        {
            Uc_Uc1ArmingLogger_CheckKey_exit(me);
        }
        break;
        case Uc_Uc1ArmingLogger_evReadKey:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.evReadKey");
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_8:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_8");
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_9:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_9");
        }
        break;
        case Uc_Uc1ArmingLogger_CheckMemory:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckMemory");
        }
        break;
        case Uc_Uc1ArmingLogger_CheckSensors:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckSensors");
        }
        break;
        case Uc_Uc1ArmingLogger_DeviceFailure:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.DeviceFailure");
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_15:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_15");
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_16:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_16");
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_25:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_25");
        }
        break;
        case Uc_Uc1ArmingLogger_terminationstate_43:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.terminationstate_43");
        }
        break;
        default:
            break;
    }
    me->Main_subState = Uc_Uc1ArmingLogger_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main");
}

int Uc_Uc1ArmingLogger_WaitForWakeUp_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_WaitForWakeUp;
}

int Uc_Uc1ArmingLogger_WaitForKey_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_WaitForKey;
}

int Uc_Uc1ArmingLogger_terminationstate_43_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_terminationstate_43;
}

int Uc_Uc1ArmingLogger_StartAcquisitionMode_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_StartAcquisitionMode;
}

int Uc_Uc1ArmingLogger_sendaction_9_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_sendaction_9;
}

int Uc_Uc1ArmingLogger_sendaction_8_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_sendaction_8;
}

int Uc_Uc1ArmingLogger_sendaction_25_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_sendaction_25;
}

int Uc_Uc1ArmingLogger_sendaction_16_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_sendaction_16;
}

int Uc_Uc1ArmingLogger_sendaction_15_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_sendaction_15;
}

int Uc_Uc1ArmingLogger_RunExitTimeoutMode_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_RunExitTimeoutMode;
}

int Uc_Uc1ArmingLogger_evReadKey_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_evReadKey;
}

int Uc_Uc1ArmingLogger_DeviceFailure_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_DeviceFailure;
}

int Uc_Uc1ArmingLogger_CheckSensors_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_CheckSensors;
}

int Uc_Uc1ArmingLogger_CheckMemory_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_CheckMemory;
}

int Uc_Uc1ArmingLogger_CheckKey_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->Main_subState == Uc_Uc1ArmingLogger_CheckKey;
}

void Uc_Uc1ArmingLogger_CheckKey_exit(Uc_Uc1ArmingLogger* const me) {
    switch (me->CheckKey_subState) {
        case Uc_Uc1ArmingLogger_Check:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.Check");
        }
        break;
        case Uc_Uc1ArmingLogger_NotAuthenticatedHelperState:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
        }
        break;
        case Uc_Uc1ArmingLogger_GoToIdleHelperState:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
        }
        break;
        case Uc_Uc1ArmingLogger_AuthenticatedHelperState:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_GoToIdleHelperState:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
        }
        break;
        default:
            break;
    }
    me->CheckKey_subState = Uc_Uc1ArmingLogger_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey");
}

int Uc_Uc1ArmingLogger_NotAuthenticatedHelperState_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->CheckKey_subState == Uc_Uc1ArmingLogger_NotAuthenticatedHelperState;
}

int Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->CheckKey_subState == Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState;
}

RiCTakeEventStatus Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState_takeEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == Null_id)
        {
            /*## transition 6 */
            if(me->Mode == IDLE)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.8");
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "6");
                    Uc_Uc1ArmingLogger_CheckKey_exit(me);
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.WaitForKey");
                    me->Main_subState = Uc_Uc1ArmingLogger_WaitForKey;
                    me->Main_active = Uc_Uc1ArmingLogger_WaitForKey;
                    {
                        /*#[ state ROOT.Uc1ArmingLogger.Main.WaitForKey.(Entry) */
                        printf("Waiting for key ...\n");
                        /*#]*/
                    }
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_WakeUp, Uc_Uc1ArmingLogger_Timeout_WaitForKey_id, &(me->ric_reactive), "ROOT.Uc1ArmingLogger.Main.WaitForKey");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "6");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.8");
                    res = eventConsumed;
                }
            else
                {
                    /*## transition 20 */
                    if(me->Mode == EXIT_TIMEOUT)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.8");
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "20");
                            Uc_Uc1ArmingLogger_CheckKey_exit(me);
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.RunExitTimeoutMode");
                            me->Main_subState = Uc_Uc1ArmingLogger_RunExitTimeoutMode;
                            me->Main_active = Uc_Uc1ArmingLogger_RunExitTimeoutMode;
                            {
                                /*#[ state ROOT.Uc1ArmingLogger.Main.RunExitTimeoutMode.(Entry) */
                                printf("Waiting for exit ...\n");
                                /*#]*/
                            }
                            RiCTask_schedTm(me->ric_reactive.myTask, me->t_ExitTimeout, Uc_Uc1ArmingLogger_Timeout_RunExitTimeoutMode_id, &(me->ric_reactive), "ROOT.Uc1ArmingLogger.Main.RunExitTimeoutMode");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "20");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.8");
                            res = eventConsumed;
                        }
                }
        }
    
    return res;
}

int Uc_Uc1ArmingLogger_GoToIdleHelperState_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->CheckKey_subState == Uc_Uc1ArmingLogger_GoToIdleHelperState;
}

int Uc_Uc1ArmingLogger_CheckKey_GoToIdleHelperState_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->CheckKey_subState == Uc_Uc1ArmingLogger_CheckKey_GoToIdleHelperState;
}

int Uc_Uc1ArmingLogger_Check_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->CheckKey_subState == Uc_Uc1ArmingLogger_Check;
}

RiCTakeEventStatus Uc_Uc1ArmingLogger_Check_takeEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == Null_id)
        {
            /*## transition ROOT.Uc1ArmingLogger.Main.CheckKey.1 */
            if(me->keyStatus == NOT_VALID)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.1");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.Check");
                    {
                        /*#[ transition ROOT.Uc1ArmingLogger.Main.CheckKey.1 */
                        
                        printf("Key is not valid.\n");
                        /*#]*/
                    }
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->CheckKey_subState = Uc_Uc1ArmingLogger_NotAuthenticatedHelperState;
                    me->Main_active = Uc_Uc1ArmingLogger_NotAuthenticatedHelperState;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.1");
                    res = eventConsumed;
                }
            else
                {
                    /*## transition ROOT.Uc1ArmingLogger.Main.CheckKey.2 */
                    if(me->keyStatus == VALID)
                        {
                            /*## transition ROOT.Uc1ArmingLogger.Main.CheckKey.3 */
                            if(me->Mode == EXIT_TIMEOUT)
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.2");
                                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.3");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.Check");
                                    {
                                        /*#[ transition ROOT.Uc1ArmingLogger.Main.CheckKey.2 */
                                        
                                        printf("Key is valid.\n");
                                        /*#]*/
                                    }
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->CheckKey_subState = Uc_Uc1ArmingLogger_GoToIdleHelperState;
                                    me->Main_active = Uc_Uc1ArmingLogger_GoToIdleHelperState;
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.3");
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.2");
                                    res = eventConsumed;
                                }
                            else
                                {
                                    /*## transition ROOT.Uc1ArmingLogger.Main.CheckKey.4 */
                                    if(me->Mode == IDLE)
                                        {
                                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.2");
                                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.4");
                                            RiCReactive_popNullConfig(&(me->ric_reactive));
                                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.Check");
                                            {
                                                /*#[ transition ROOT.Uc1ArmingLogger.Main.CheckKey.2 */
                                                
                                                printf("Key is valid.\n");
                                                /*#]*/
                                            }
                                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                                            me->CheckKey_subState = Uc_Uc1ArmingLogger_AuthenticatedHelperState;
                                            me->Main_active = Uc_Uc1ArmingLogger_AuthenticatedHelperState;
                                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.4");
                                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.2");
                                            res = eventConsumed;
                                        }
                                }
                        }
                }
        }
    
    return res;
}

int Uc_Uc1ArmingLogger_AuthenticatedHelperState_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->CheckKey_subState == Uc_Uc1ArmingLogger_AuthenticatedHelperState;
}

int Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->CheckKey_subState == Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState;
}

int Uc_Uc1ArmingLogger_LowBatteryLed_IN(const Uc_Uc1ArmingLogger* const me) {
    return Uc_Uc1ArmingLogger_Uc1ArmingLogger_IN(me);
}

int Uc_Uc1ArmingLogger_WaitFlag_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->LowBatteryLed_subState == Uc_Uc1ArmingLogger_WaitFlag;
}

int Uc_Uc1ArmingLogger_BatteryIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->LowBatteryLed_subState == Uc_Uc1ArmingLogger_BatteryIndicatorOn;
}

int Uc_Uc1ArmingLogger_BatteryIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->LowBatteryLed_subState == Uc_Uc1ArmingLogger_BatteryIndicatorOff;
}

int Uc_Uc1ArmingLogger_IdleLed_IN(const Uc_Uc1ArmingLogger* const me) {
    return Uc_Uc1ArmingLogger_Uc1ArmingLogger_IN(me);
}

void Uc_Uc1ArmingLogger_IdleLed_exit(Uc_Uc1ArmingLogger* const me) {
    switch (me->IdleLed_subState) {
        case Uc_Uc1ArmingLogger_IdleIndicatorOff:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.IdleIndicatorOff");
        }
        break;
        case Uc_Uc1ArmingLogger_IdleIndicatorOn:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.IdleIndicatorOn");
        }
        break;
        case Uc_Uc1ArmingLogger_WaitMode:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.WaitMode");
        }
        break;
        case Uc_Uc1ArmingLogger_TimeoutIndicatorOn:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.TimeoutIndicatorOn");
        }
        break;
        case Uc_Uc1ArmingLogger_TimeoutIndicatorOff:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.TimeoutIndicatorOff");
        }
        break;
        default:
            break;
    }
    me->IdleLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed");
}

int Uc_Uc1ArmingLogger_WaitMode_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleLed_subState == Uc_Uc1ArmingLogger_WaitMode;
}

int Uc_Uc1ArmingLogger_TimeoutIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleLed_subState == Uc_Uc1ArmingLogger_TimeoutIndicatorOn;
}

int Uc_Uc1ArmingLogger_TimeoutIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleLed_subState == Uc_Uc1ArmingLogger_TimeoutIndicatorOff;
}

int Uc_Uc1ArmingLogger_IdleIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleLed_subState == Uc_Uc1ArmingLogger_IdleIndicatorOn;
}

int Uc_Uc1ArmingLogger_IdleIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleLed_subState == Uc_Uc1ArmingLogger_IdleIndicatorOff;
}

int Uc_Uc1ArmingLogger_AlarmLed_IN(const Uc_Uc1ArmingLogger* const me) {
    return Uc_Uc1ArmingLogger_Uc1ArmingLogger_IN(me);
}

void Uc_Uc1ArmingLogger_AlarmLed_exit(Uc_Uc1ArmingLogger* const me) {
    switch (me->AlarmLed_subState) {
        case Uc_Uc1ArmingLogger_WaitForButton:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.WaitForButton");
        }
        break;
        case Uc_Uc1ArmingLogger_AlarmIndicatorOff:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.AlarmIndicatorOff");
        }
        break;
        case Uc_Uc1ArmingLogger_AlarmIndicatorOn:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_AlarmIndicatorOn_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.AlarmIndicatorOn");
        }
        break;
        case Uc_Uc1ArmingLogger_FaultIndicatorOn:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOn");
        }
        break;
        case Uc_Uc1ArmingLogger_FaultIndicatorOff:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_FaultIndicatorOff_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOff");
        }
        break;
        default:
            break;
    }
    me->AlarmLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed");
}

int Uc_Uc1ArmingLogger_WaitForButton_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->AlarmLed_subState == Uc_Uc1ArmingLogger_WaitForButton;
}

int Uc_Uc1ArmingLogger_FaultIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->AlarmLed_subState == Uc_Uc1ArmingLogger_FaultIndicatorOn;
}

int Uc_Uc1ArmingLogger_FaultIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->AlarmLed_subState == Uc_Uc1ArmingLogger_FaultIndicatorOff;
}

int Uc_Uc1ArmingLogger_AlarmIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->AlarmLed_subState == Uc_Uc1ArmingLogger_AlarmIndicatorOn;
}

int Uc_Uc1ArmingLogger_AlarmIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->AlarmLed_subState == Uc_Uc1ArmingLogger_AlarmIndicatorOff;
}

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes) {
    
    const Uc_Uc1ArmingLogger * const me = (const Uc_Uc1ArmingLogger *)void_me;
    ARCSA_addAttribute_c(arcsAttributes, "t_WakeUp", ARC_int2String(me->t_WakeUp));
    ARCSA_addAttribute_c(arcsAttributes, "t_ExitTimeout", ARC_int2String(me->t_ExitTimeout));
    ARCSA_addAttribute_c(arcsAttributes, "t_IdleLed", ARC_int2String(me->t_IdleLed));
    ARCSA_addAttribute_c(arcsAttributes, "t_AlarmLed", ARC_int2String(me->t_AlarmLed));
    ARCSA_addAttribute_c(arcsAttributes, "t_BatteryLowLed", ARC_int2String(me->t_BatteryLowLed));
    ARCSA_addAttribute_c(arcsAttributes, "t_ExitTimeoutLed", ARC_int2String(me->t_ExitTimeoutLed));
    ARCSA_addAttribute_c(arcsAttributes, "t_FaultLed", ARC_int2String(me->t_FaultLed));
    ARCSA_addAttribute_c(arcsAttributes, "Mode", ARC_int2String((int)me->Mode));
    ARCSA_addAttribute_c(arcsAttributes, "Key", ARC_charP2String(me->Key));
    ARCSA_addAttribute_c(arcsAttributes, "keyStatus", ARC_int2String((int)me->keyStatus));
    ARCSA_addAttribute_c(arcsAttributes, "flagMemoryLow", ARC_int2String((int)me->flagMemoryLow));
    ARCSA_addAttribute_c(arcsAttributes, "flagSensorsFailure", ARC_RiCBoolean2String(me->flagSensorsFailure));
    ARCSA_addAttribute_c(arcsAttributes, "flagAlarm", ARC_RiCBoolean2String(me->flagAlarm));
    ARCSA_addAttribute_c(arcsAttributes, "flagBatteryLow", ARC_RiCBoolean2String(me->flagBatteryLow));
    ARCSA_addAttribute_c(arcsAttributes, "flagFault", ARC_RiCBoolean2String(me->flagFault));
    ARCSA_addAttribute_c(arcsAttributes, "faultLedCount", ARC_int2String(me->faultLedCount));
    ARCSA_addAttribute_c(arcsAttributes, "savedKeys", ARC_charPArray2String(8, me->savedKeys, sizeof(char*), &ARC_charP2String));
    ARCSA_addAttribute_c(arcsAttributes, "counter", ARC_int2String(me->counter));
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const Uc_Uc1ArmingLogger * const me = (const Uc_Uc1ArmingLogger *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    if(me->rootState_subState == Uc_Uc1ArmingLogger_Uc1ArmingLogger)
        {
            Uc1ArmingLogger_serializeStates(me, arcsState);
        }
}
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me) {
    
    Uc_Uc1ArmingLogger * const me = (Uc_Uc1ArmingLogger *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT");
        Uc_Uc1ArmingLogger_rootStateEntDef(me);
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    Uc_Uc1ArmingLogger * const me = (Uc_Uc1ArmingLogger *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    if(me->rootState_active == Uc_Uc1ArmingLogger_Uc1ArmingLogger)
        {
            res = Uc1ArmingLogger_dispatchEvent(me, id);
        }
    return res;
}

#ifdef _OMINSTRUMENT
static void Uc1ArmingLogger_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger");
    Main_serializeStates(me, arcsState);
    IdleLed_serializeStates(me, arcsState);
    AlarmLed_serializeStates(me, arcsState);
    LowBatteryLed_serializeStates(me, arcsState);
}
#endif /* _OMINSTRUMENT */

static void Uc1ArmingLogger_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger");
    me->rootState_subState = Uc_Uc1ArmingLogger_Uc1ArmingLogger;
    me->rootState_active = Uc_Uc1ArmingLogger_Uc1ArmingLogger;
    Main_entDef(me);
    IdleLed_entDef(me);
    AlarmLed_entDef(me);
    LowBatteryLed_entDef(me);
}

static RiCTakeEventStatus Uc1ArmingLogger_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(Main_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Uc_Uc1ArmingLogger_Uc1ArmingLogger))
                {
                    return res;
                }
        }
    if(IdleLed_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Uc_Uc1ArmingLogger_Uc1ArmingLogger))
                {
                    return res;
                }
        }
    if(AlarmLed_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Uc_Uc1ArmingLogger_Uc1ArmingLogger))
                {
                    return res;
                }
        }
    if(LowBatteryLed_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Uc_Uc1ArmingLogger_Uc1ArmingLogger))
                {
                    return res;
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
static void Main_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main");
    switch (me->Main_subState) {
        case Uc_Uc1ArmingLogger_WaitForWakeUp:
        {
            WaitForWakeUp_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_WaitForKey:
        {
            WaitForKey_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_RunExitTimeoutMode:
        {
            RunExitTimeoutMode_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_StartAcquisitionMode:
        {
            StartAcquisitionMode_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey:
        {
            CheckKey_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_evReadKey:
        {
            evReadKey_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_8:
        {
            sendaction_8_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_9:
        {
            sendaction_9_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckMemory:
        {
            CheckMemory_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckSensors:
        {
            CheckSensors_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_DeviceFailure:
        {
            DeviceFailure_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_15:
        {
            sendaction_15_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_16:
        {
            sendaction_16_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_25:
        {
            sendaction_25_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_terminationstate_43:
        {
            terminationstate_43_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void Main_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "46");
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.WaitForWakeUp");
    me->Main_subState = Uc_Uc1ArmingLogger_WaitForWakeUp;
    me->Main_active = Uc_Uc1ArmingLogger_WaitForWakeUp;
    {
        /*#[ state ROOT.Uc1ArmingLogger.Main.WaitForWakeUp.(Entry) */
        printf("Waiting for power on ...\n");
        /*#]*/
    }
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "46");
}

static RiCTakeEventStatus Main_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->Main_active) {
        case Uc_Uc1ArmingLogger_WaitForWakeUp:
        {
            if(id == evWakeUpButtonPressed_InterfacesPkg_id)
                {
                    /*## transition 0 */
                    if(me->Mode == IDLE)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "0");
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.WaitForWakeUp");
                            {
                                /*#[ transition 0 */
                                
                                systemWakeUp(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.WaitForKey");
                            me->Main_subState = Uc_Uc1ArmingLogger_WaitForKey;
                            me->Main_active = Uc_Uc1ArmingLogger_WaitForKey;
                            {
                                /*#[ state ROOT.Uc1ArmingLogger.Main.WaitForKey.(Entry) */
                                printf("Waiting for key ...\n");
                                /*#]*/
                            }
                            RiCTask_schedTm(me->ric_reactive.myTask, me->t_WakeUp, Uc_Uc1ArmingLogger_Timeout_WaitForKey_id, &(me->ric_reactive), "ROOT.Uc1ArmingLogger.Main.WaitForKey");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "0");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_WaitForKey:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc1ArmingLogger_Timeout_WaitForKey_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "3");
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_WaitForKey_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.WaitForKey");
                            {
                                /*#[ transition 3 */
                                
                                systemGoToSleep(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.WaitForWakeUp");
                            me->Main_subState = Uc_Uc1ArmingLogger_WaitForWakeUp;
                            me->Main_active = Uc_Uc1ArmingLogger_WaitForWakeUp;
                            {
                                /*#[ state ROOT.Uc1ArmingLogger.Main.WaitForWakeUp.(Entry) */
                                printf("Waiting for power on ...\n");
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "3");
                            res = eventConsumed;
                        }
                }
                break;
                case evKeyApplied_InterfacesPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "1");
                    RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_WaitForKey_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.WaitForKey");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.evReadKey");
                    me->Main_subState = Uc_Uc1ArmingLogger_evReadKey;
                    me->Main_active = Uc_Uc1ArmingLogger_evReadKey;
                    {
                        /*#[ state ROOT.Uc1ArmingLogger.Main.evReadKey.(Entry) */
                        RiCGEN_PORT(me->pScanner, reqReadKey());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "1");
                    res = eventConsumed;
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        case Uc_Uc1ArmingLogger_RunExitTimeoutMode:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc1ArmingLogger_Timeout_RunExitTimeoutMode_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "2");
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_RunExitTimeoutMode_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.RunExitTimeoutMode");
                            {
                                /*#[ transition 2 */
                                
                                changeMode(me, ACQUISITION);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.StartAcquisitionMode");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->Main_subState = Uc_Uc1ArmingLogger_StartAcquisitionMode;
                            me->Main_active = Uc_Uc1ArmingLogger_StartAcquisitionMode;
                            {
                                /*#[ state ROOT.Uc1ArmingLogger.Main.StartAcquisitionMode.(Entry) */
                                printf("Start logging.\n");
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "2");
                            res = eventConsumed;
                        }
                }
                break;
                case evKeyApplied_InterfacesPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "4");
                    RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_RunExitTimeoutMode_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.RunExitTimeoutMode");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_16");
                    me->Main_subState = Uc_Uc1ArmingLogger_sendaction_16;
                    me->Main_active = Uc_Uc1ArmingLogger_sendaction_16;
                    {
                        /*#[ state ROOT.Uc1ArmingLogger.Main.sendaction_16.(Entry) */
                        RiCGEN_PORT(me->pScanner, reqReadKey());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "4");
                    res = eventConsumed;
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        case Uc_Uc1ArmingLogger_StartAcquisitionMode:
        {
            switch (id) {
                case Null_id:
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "47");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.StartAcquisitionMode");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.terminationstate_43");
                    me->Main_subState = Uc_Uc1ArmingLogger_terminationstate_43;
                    me->Main_active = Uc_Uc1ArmingLogger_terminationstate_43;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "47");
                    res = eventConsumed;
                }
                break;
                case evReset_Uc_Uc1ArmingLogger_Event_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "48");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.StartAcquisitionMode");
                    {
                        /*#[ transition 48 */
                        
                        changeMode(me, IDLE);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_25");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->Main_subState = Uc_Uc1ArmingLogger_sendaction_25;
                    me->Main_active = Uc_Uc1ArmingLogger_sendaction_25;
                    {
                        /*#[ state ROOT.Uc1ArmingLogger.Main.sendaction_25.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqTurnOffSensorsPower());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "48");
                    res = eventConsumed;
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        case Uc_Uc1ArmingLogger_Check:
        {
            res = Uc_Uc1ArmingLogger_Check_takeEvent(me, id);
        }
        break;
        case Uc_Uc1ArmingLogger_NotAuthenticatedHelperState:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.5");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->CheckKey_subState = Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState;
                    me->Main_active = Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.5");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_GoToIdleHelperState:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.6");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->CheckKey_subState = Uc_Uc1ArmingLogger_CheckKey_GoToIdleHelperState;
                    me->Main_active = Uc_Uc1ArmingLogger_CheckKey_GoToIdleHelperState;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.6");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_AuthenticatedHelperState:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.7");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->CheckKey_subState = Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState;
                    me->Main_active = Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.7");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState:
        {
            res = Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState_takeEvent(me, id);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_GoToIdleHelperState:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.9");
                    Uc_Uc1ArmingLogger_CheckKey_exit(me);
                    {
                        /*#[ transition 5 */
                        changeMode(me, IDLE);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_15");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->Main_subState = Uc_Uc1ArmingLogger_sendaction_15;
                    me->Main_active = Uc_Uc1ArmingLogger_sendaction_15;
                    {
                        /*#[ state ROOT.Uc1ArmingLogger.Main.sendaction_15.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqTurnOffSensorsPower());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.9");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.10");
                    Uc_Uc1ArmingLogger_CheckKey_exit(me);
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_8");
                    me->Main_subState = Uc_Uc1ArmingLogger_sendaction_8;
                    me->Main_active = Uc_Uc1ArmingLogger_sendaction_8;
                    {
                        /*#[ state ROOT.Uc1ArmingLogger.Main.sendaction_8.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqTurnOnSensorsPower());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.10");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_evReadKey:
        {
            if(id == evKeyReaded_InterfacesPkg_id)
                {
                    RiCSETPARAMS(me, evKeyReaded);
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "7");
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.evReadKey");
                    {
                        /*#[ transition 7 */
                        
                        readKey(me, params->Key);
                        /*#]*/
                    }
                    CheckKey_entDef(me);
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "7");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_8:
        {
            if(id == evSensorsPoweredUp_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "16");
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_8");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_9");
                    me->Main_subState = Uc_Uc1ArmingLogger_sendaction_9;
                    me->Main_active = Uc_Uc1ArmingLogger_sendaction_9;
                    {
                        /*#[ state ROOT.Uc1ArmingLogger.Main.sendaction_9.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqCheckSensors());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "16");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_9:
        {
            if(id == evSensorsStatus_InterfacesPkg_id)
                {
                    RiCSETPARAMS(me, evSensorsStatus);
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "8");
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_9");
                    {
                        /*#[ transition 8 */
                        
                        checkSensors(me, params->Failure);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckSensors");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->Main_subState = Uc_Uc1ArmingLogger_CheckSensors;
                    me->Main_active = Uc_Uc1ArmingLogger_CheckSensors;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "8");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_CheckMemory:
        {
            if(id == Null_id)
                {
                    /*## transition 10 */
                    if(me->flagMemoryLow == OK)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "10");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckMemory");
                            {
                                /*#[ transition 10 */
                                
                                ledTimeoutMode(me);
                                changeMode(me, EXIT_TIMEOUT);
                                printf("Memory OK.\n");
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.RunExitTimeoutMode");
                            me->Main_subState = Uc_Uc1ArmingLogger_RunExitTimeoutMode;
                            me->Main_active = Uc_Uc1ArmingLogger_RunExitTimeoutMode;
                            {
                                /*#[ state ROOT.Uc1ArmingLogger.Main.RunExitTimeoutMode.(Entry) */
                                printf("Waiting for exit ...\n");
                                /*#]*/
                            }
                            RiCTask_schedTm(me->ric_reactive.myTask, me->t_ExitTimeout, Uc_Uc1ArmingLogger_Timeout_RunExitTimeoutMode_id, &(me->ric_reactive), "ROOT.Uc1ArmingLogger.Main.RunExitTimeoutMode");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "10");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 11 */
                            if(me->flagMemoryLow == LOW)
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "11");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckMemory");
                                    {
                                        /*#[ transition 11 */
                                        
                                        printf("Memory check error.\n");
                                        /*#]*/
                                    }
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.DeviceFailure");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->Main_subState = Uc_Uc1ArmingLogger_DeviceFailure;
                                    me->Main_active = Uc_Uc1ArmingLogger_DeviceFailure;
                                    {
                                        /*#[ state ROOT.Uc1ArmingLogger.Main.DeviceFailure.(Entry) */
                                        setFaultFlag(me);
                                        /*#]*/
                                    }
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "11");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_CheckSensors:
        {
            if(id == Null_id)
                {
                    /*## transition 9 */
                    if(!(me->flagSensorsFailure))
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "9");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckSensors");
                            {
                                /*#[ transition 9 */
                                
                                printf("Sensors OK.\n");
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckMemory");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->Main_subState = Uc_Uc1ArmingLogger_CheckMemory;
                            me->Main_active = Uc_Uc1ArmingLogger_CheckMemory;
                            {
                                /*#[ state ROOT.Uc1ArmingLogger.Main.CheckMemory.(Entry) */
                                checkFreeMemory(me);
                                printf("Checking memory ...\n");
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "9");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 12 */
                            if(me->flagSensorsFailure)
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "12");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckSensors");
                                    {
                                        /*#[ transition 12 */
                                        
                                        printf("Sensors failure.\n");
                                        /*#]*/
                                    }
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.DeviceFailure");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->Main_subState = Uc_Uc1ArmingLogger_DeviceFailure;
                                    me->Main_active = Uc_Uc1ArmingLogger_DeviceFailure;
                                    {
                                        /*#[ state ROOT.Uc1ArmingLogger.Main.DeviceFailure.(Entry) */
                                        setFaultFlag(me);
                                        /*#]*/
                                    }
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "12");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_DeviceFailure:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "24");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.DeviceFailure");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_25");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->Main_subState = Uc_Uc1ArmingLogger_sendaction_25;
                    me->Main_active = Uc_Uc1ArmingLogger_sendaction_25;
                    {
                        /*#[ state ROOT.Uc1ArmingLogger.Main.sendaction_25.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqTurnOffSensorsPower());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "24");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_15:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "17");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_15");
                    {
                        /*#[ transition 17 */
                        systemGoToSleep(me);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.WaitForWakeUp");
                    me->Main_subState = Uc_Uc1ArmingLogger_WaitForWakeUp;
                    me->Main_active = Uc_Uc1ArmingLogger_WaitForWakeUp;
                    {
                        /*#[ state ROOT.Uc1ArmingLogger.Main.WaitForWakeUp.(Entry) */
                        printf("Waiting for power on ...\n");
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "17");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_16:
        {
            if(id == evKeyReaded_InterfacesPkg_id)
                {
                    RiCSETPARAMS(me, evKeyReaded);
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "18");
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_16");
                    {
                        /*#[ transition 18 */
                        
                        readKey(me, params->Key);
                        /*#]*/
                    }
                    CheckKey_entDef(me);
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "18");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_25:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "15");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.sendaction_25");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.WaitForWakeUp");
                    me->Main_subState = Uc_Uc1ArmingLogger_WaitForWakeUp;
                    me->Main_active = Uc_Uc1ArmingLogger_WaitForWakeUp;
                    {
                        /*#[ state ROOT.Uc1ArmingLogger.Main.WaitForWakeUp.(Entry) */
                        printf("Waiting for power on ...\n");
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "15");
                    res = eventConsumed;
                }
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
static void WaitForWakeUp_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.WaitForWakeUp");
}

static void WaitForKey_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.WaitForKey");
}

static void terminationstate_43_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.terminationstate_43");
}

static void StartAcquisitionMode_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.StartAcquisitionMode");
}

static void sendaction_9_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.sendaction_9");
}

static void sendaction_8_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.sendaction_8");
}

static void sendaction_25_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.sendaction_25");
}

static void sendaction_16_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.sendaction_16");
}

static void sendaction_15_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.sendaction_15");
}

static void RunExitTimeoutMode_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.RunExitTimeoutMode");
}

static void evReadKey_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.evReadKey");
}

static void DeviceFailure_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.DeviceFailure");
}

static void CheckSensors_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.CheckSensors");
}

static void CheckMemory_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.CheckMemory");
}

static void CheckKey_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.CheckKey");
    switch (me->CheckKey_subState) {
        case Uc_Uc1ArmingLogger_Check:
        {
            Check_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_NotAuthenticatedHelperState:
        {
            NotAuthenticatedHelperState_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_GoToIdleHelperState:
        {
            GoToIdleHelperState_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_AuthenticatedHelperState:
        {
            AuthenticatedHelperState_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState:
        {
            CheckKey_NotAuthenticatedHelperState_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_GoToIdleHelperState:
        {
            CheckKey_GoToIdleHelperState_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState:
        {
            CheckKey_AuthenticatedHelperState_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void CheckKey_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey");
    me->Main_subState = Uc_Uc1ArmingLogger_CheckKey;
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.0");
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.Check");
    RiCReactive_pushNullConfig(&(me->ric_reactive));
    me->CheckKey_subState = Uc_Uc1ArmingLogger_Check;
    me->Main_active = Uc_Uc1ArmingLogger_Check;
    {
        /*#[ state ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.Check.(Entry) */
        validateKey(me);
        printf("Key checking ...\n");
        
        /*#]*/
    }
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.Main.CheckKey.0");
}

#ifdef _OMINSTRUMENT
static void NotAuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.NotAuthenticatedHelperState");
}

static void CheckKey_NotAuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.NotAuthenticatedHelperState");
}

static void GoToIdleHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.GoToIdleHelperState");
}

static void CheckKey_GoToIdleHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.GoToIdleHelperState");
}

static void Check_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.Check");
}

static void AuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.AuthenticatedHelperState");
}

static void CheckKey_AuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.Main.CheckKey.ROOT.CheckKey.AuthenticatedHelperState");
}

static void LowBatteryLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.LowBatteryLed");
    switch (me->LowBatteryLed_subState) {
        case Uc_Uc1ArmingLogger_BatteryIndicatorOff:
        {
            BatteryIndicatorOff_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_BatteryIndicatorOn:
        {
            BatteryIndicatorOn_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_WaitFlag:
        {
            WaitFlag_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void LowBatteryLed_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "31");
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed.WaitFlag");
    RiCReactive_pushNullConfig(&(me->ric_reactive));
    me->LowBatteryLed_subState = Uc_Uc1ArmingLogger_WaitFlag;
    me->LowBatteryLed_active = Uc_Uc1ArmingLogger_WaitFlag;
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "31");
}

static RiCTakeEventStatus LowBatteryLed_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->LowBatteryLed_active) {
        case Uc_Uc1ArmingLogger_BatteryIndicatorOff:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "33");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed.BatteryIndicatorOff");
                            {
                                /*#[ transition 33 */
                                
                                ledBatteryLow(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed.BatteryIndicatorOn");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->LowBatteryLed_subState = Uc_Uc1ArmingLogger_BatteryIndicatorOn;
                            me->LowBatteryLed_active = Uc_Uc1ArmingLogger_BatteryIndicatorOn;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "33");
                            res = eventConsumed;
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 34 */
                    if(!(me->flagBatteryLow))
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "34");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed.BatteryIndicatorOff");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed.WaitFlag");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->LowBatteryLed_subState = Uc_Uc1ArmingLogger_WaitFlag;
                            me->LowBatteryLed_active = Uc_Uc1ArmingLogger_WaitFlag;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "34");
                            res = eventConsumed;
                        }
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        case Uc_Uc1ArmingLogger_BatteryIndicatorOn:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "35");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed.BatteryIndicatorOn");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed.BatteryIndicatorOff");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->LowBatteryLed_subState = Uc_Uc1ArmingLogger_BatteryIndicatorOff;
                    me->LowBatteryLed_active = Uc_Uc1ArmingLogger_BatteryIndicatorOff;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_BatteryLowLed, Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id, &(me->ric_reactive), "ROOT.Uc1ArmingLogger.LowBatteryLed.BatteryIndicatorOff");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "35");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_WaitFlag:
        {
            if(id == Null_id)
                {
                    /*## transition 32 */
                    if(me->flagBatteryLow)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "32");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed.WaitFlag");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.LowBatteryLed.BatteryIndicatorOff");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->LowBatteryLed_subState = Uc_Uc1ArmingLogger_BatteryIndicatorOff;
                            me->LowBatteryLed_active = Uc_Uc1ArmingLogger_BatteryIndicatorOff;
                            RiCTask_schedTm(me->ric_reactive.myTask, me->t_BatteryLowLed, Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id, &(me->ric_reactive), "ROOT.Uc1ArmingLogger.LowBatteryLed.BatteryIndicatorOff");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "32");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
static void WaitFlag_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.LowBatteryLed.WaitFlag");
}

static void BatteryIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.LowBatteryLed.BatteryIndicatorOn");
}

static void BatteryIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.LowBatteryLed.BatteryIndicatorOff");
}

static void IdleLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.IdleLed");
    switch (me->IdleLed_subState) {
        case Uc_Uc1ArmingLogger_IdleIndicatorOff:
        {
            IdleIndicatorOff_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_IdleIndicatorOn:
        {
            IdleIndicatorOn_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_WaitMode:
        {
            WaitMode_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_TimeoutIndicatorOn:
        {
            TimeoutIndicatorOn_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_TimeoutIndicatorOff:
        {
            TimeoutIndicatorOff_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void IdleLed_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "23");
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.WaitMode");
    RiCReactive_pushNullConfig(&(me->ric_reactive));
    me->IdleLed_subState = Uc_Uc1ArmingLogger_WaitMode;
    me->IdleLed_active = Uc_Uc1ArmingLogger_WaitMode;
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "23");
}

static RiCTakeEventStatus IdleLed_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->IdleLed_active) {
        case Uc_Uc1ArmingLogger_IdleIndicatorOff:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "21");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.IdleIndicatorOff");
                            {
                                /*#[ transition 21 */
                                
                                ledIdleMode(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.IdleIndicatorOn");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->IdleLed_subState = Uc_Uc1ArmingLogger_IdleIndicatorOn;
                            me->IdleLed_active = Uc_Uc1ArmingLogger_IdleIndicatorOn;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "21");
                            res = eventConsumed;
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 26 */
                    if(me->Mode != IDLE)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "26");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.IdleIndicatorOff");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.WaitMode");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->IdleLed_subState = Uc_Uc1ArmingLogger_WaitMode;
                            me->IdleLed_active = Uc_Uc1ArmingLogger_WaitMode;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "26");
                            res = eventConsumed;
                        }
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        case Uc_Uc1ArmingLogger_IdleIndicatorOn:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "22");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.IdleIndicatorOn");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.IdleIndicatorOff");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->IdleLed_subState = Uc_Uc1ArmingLogger_IdleIndicatorOff;
                    me->IdleLed_active = Uc_Uc1ArmingLogger_IdleIndicatorOff;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_IdleLed, Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id, &(me->ric_reactive), "ROOT.Uc1ArmingLogger.IdleLed.IdleIndicatorOff");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "22");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_WaitMode:
        {
            if(id == Null_id)
                {
                    /*## transition 25 */
                    if(me->Mode == IDLE)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "25");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.WaitMode");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.IdleIndicatorOff");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->IdleLed_subState = Uc_Uc1ArmingLogger_IdleIndicatorOff;
                            me->IdleLed_active = Uc_Uc1ArmingLogger_IdleIndicatorOff;
                            RiCTask_schedTm(me->ric_reactive.myTask, me->t_IdleLed, Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id, &(me->ric_reactive), "ROOT.Uc1ArmingLogger.IdleLed.IdleIndicatorOff");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "25");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 36 */
                            if(me->Mode == EXIT_TIMEOUT)
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "36");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.WaitMode");
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.TimeoutIndicatorOff");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->IdleLed_subState = Uc_Uc1ArmingLogger_TimeoutIndicatorOff;
                                    me->IdleLed_active = Uc_Uc1ArmingLogger_TimeoutIndicatorOff;
                                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_ExitTimeoutLed, Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id, &(me->ric_reactive), "ROOT.Uc1ArmingLogger.IdleLed.TimeoutIndicatorOff");
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "36");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_TimeoutIndicatorOn:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "39");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.TimeoutIndicatorOn");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.TimeoutIndicatorOff");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->IdleLed_subState = Uc_Uc1ArmingLogger_TimeoutIndicatorOff;
                    me->IdleLed_active = Uc_Uc1ArmingLogger_TimeoutIndicatorOff;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_ExitTimeoutLed, Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id, &(me->ric_reactive), "ROOT.Uc1ArmingLogger.IdleLed.TimeoutIndicatorOff");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "39");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_TimeoutIndicatorOff:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "38");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.TimeoutIndicatorOff");
                            {
                                /*#[ transition 38 */
                                
                                ledTimeoutMode(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.TimeoutIndicatorOn");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->IdleLed_subState = Uc_Uc1ArmingLogger_TimeoutIndicatorOn;
                            me->IdleLed_active = Uc_Uc1ArmingLogger_TimeoutIndicatorOn;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "38");
                            res = eventConsumed;
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 37 */
                    if(me->Mode != EXIT_TIMEOUT)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "37");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.TimeoutIndicatorOff");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.IdleLed.WaitMode");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->IdleLed_subState = Uc_Uc1ArmingLogger_WaitMode;
                            me->IdleLed_active = Uc_Uc1ArmingLogger_WaitMode;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "37");
                            res = eventConsumed;
                        }
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
static void WaitMode_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.IdleLed.WaitMode");
}

static void TimeoutIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.IdleLed.TimeoutIndicatorOn");
}

static void TimeoutIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.IdleLed.TimeoutIndicatorOff");
}

static void IdleIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.IdleLed.IdleIndicatorOn");
}

static void IdleIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.IdleLed.IdleIndicatorOff");
}

static void AlarmLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.AlarmLed");
    switch (me->AlarmLed_subState) {
        case Uc_Uc1ArmingLogger_WaitForButton:
        {
            WaitForButton_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_AlarmIndicatorOff:
        {
            AlarmIndicatorOff_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_AlarmIndicatorOn:
        {
            AlarmIndicatorOn_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_FaultIndicatorOn:
        {
            FaultIndicatorOn_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_FaultIndicatorOff:
        {
            FaultIndicatorOff_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void AlarmLed_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "45");
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.WaitForButton");
    RiCReactive_pushNullConfig(&(me->ric_reactive));
    me->AlarmLed_subState = Uc_Uc1ArmingLogger_WaitForButton;
    me->AlarmLed_active = Uc_Uc1ArmingLogger_WaitForButton;
    {
        /*#[ state ROOT.Uc1ArmingLogger.AlarmLed.WaitForButton.(Entry) */
        me->counter = 0;
        /*#]*/
    }
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "45");
}

static RiCTakeEventStatus AlarmLed_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->AlarmLed_active) {
        case Uc_Uc1ArmingLogger_WaitForButton:
        {
            switch (id) {
                case evWakeUpButtonPressed_InterfacesPkg_id:
                {
                    /*## transition 27 */
                    if( me->Mode == IDLE)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "27");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.WaitForButton");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.AlarmIndicatorOff");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->AlarmLed_subState = Uc_Uc1ArmingLogger_AlarmIndicatorOff;
                            me->AlarmLed_active = Uc_Uc1ArmingLogger_AlarmIndicatorOff;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "27");
                            res = eventConsumed;
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 41 */
                    if(me->flagFault)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "41");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.WaitForButton");
                            {
                                /*#[ transition 41 */
                                
                                ledSystemFailure(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOn");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->AlarmLed_subState = Uc_Uc1ArmingLogger_FaultIndicatorOn;
                            me->AlarmLed_active = Uc_Uc1ArmingLogger_FaultIndicatorOn;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "41");
                            res = eventConsumed;
                        }
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        case Uc_Uc1ArmingLogger_AlarmIndicatorOff:
        {
            if(id == Null_id)
                {
                    /*## transition 28 */
                    if(me->flagAlarm)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "28");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.AlarmIndicatorOff");
                            {
                                /*#[ transition 28 */
                                
                                ledAlarm(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.AlarmIndicatorOn");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->AlarmLed_subState = Uc_Uc1ArmingLogger_AlarmIndicatorOn;
                            me->AlarmLed_active = Uc_Uc1ArmingLogger_AlarmIndicatorOn;
                            RiCTask_schedTm(me->ric_reactive.myTask, me->t_AlarmLed, Uc_Uc1ArmingLogger_Timeout_AlarmIndicatorOn_id, &(me->ric_reactive), "ROOT.Uc1ArmingLogger.AlarmLed.AlarmIndicatorOn");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "28");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 30 */
                            if(!(me->flagAlarm))
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "30");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.AlarmIndicatorOff");
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.WaitForButton");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->AlarmLed_subState = Uc_Uc1ArmingLogger_WaitForButton;
                                    me->AlarmLed_active = Uc_Uc1ArmingLogger_WaitForButton;
                                    {
                                        /*#[ state ROOT.Uc1ArmingLogger.AlarmLed.WaitForButton.(Entry) */
                                        me->counter = 0;
                                        /*#]*/
                                    }
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "30");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_AlarmIndicatorOn:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc1ArmingLogger_Timeout_AlarmIndicatorOn_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "29");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_AlarmIndicatorOn_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.AlarmIndicatorOn");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.WaitForButton");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->AlarmLed_subState = Uc_Uc1ArmingLogger_WaitForButton;
                            me->AlarmLed_active = Uc_Uc1ArmingLogger_WaitForButton;
                            {
                                /*#[ state ROOT.Uc1ArmingLogger.AlarmLed.WaitForButton.(Entry) */
                                me->counter = 0;
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "29");
                            res = eventConsumed;
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 40 */
                    if(me->flagFault)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "40");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_AlarmIndicatorOn_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.AlarmIndicatorOn");
                            {
                                /*#[ transition 40 */
                                
                                ledSystemFailure(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOn");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->AlarmLed_subState = Uc_Uc1ArmingLogger_FaultIndicatorOn;
                            me->AlarmLed_active = Uc_Uc1ArmingLogger_FaultIndicatorOn;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "40");
                            res = eventConsumed;
                        }
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        case Uc_Uc1ArmingLogger_FaultIndicatorOn:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "42");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOn");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOff");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->AlarmLed_subState = Uc_Uc1ArmingLogger_FaultIndicatorOff;
                    me->AlarmLed_active = Uc_Uc1ArmingLogger_FaultIndicatorOff;
                    {
                        /*#[ state ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOff.(Entry) */
                        me->counter++;
                        /*#]*/
                    }
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_FaultLed, Uc_Uc1ArmingLogger_Timeout_FaultIndicatorOff_id, &(me->ric_reactive), "ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOff");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "42");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_FaultIndicatorOff:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc1ArmingLogger_Timeout_FaultIndicatorOff_id)
                        {
                            /*## transition 43 */
                            if( me->counter < me-> faultLedCount)
                                {
                                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "43");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_FaultIndicatorOff_id, &(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOff");
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOn");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->AlarmLed_subState = Uc_Uc1ArmingLogger_FaultIndicatorOn;
                                    me->AlarmLed_active = Uc_Uc1ArmingLogger_FaultIndicatorOn;
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "43");
                                    res = eventConsumed;
                                }
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 44 */
                    if(me->counter == me->faultLedCount)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "44");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_FaultIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOff");
                            {
                                /*#[ transition 44 */
                                
                                me->flagFault = 0;
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.Uc1ArmingLogger.AlarmLed.WaitForButton");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->AlarmLed_subState = Uc_Uc1ArmingLogger_WaitForButton;
                            me->AlarmLed_active = Uc_Uc1ArmingLogger_WaitForButton;
                            {
                                /*#[ state ROOT.Uc1ArmingLogger.AlarmLed.WaitForButton.(Entry) */
                                me->counter = 0;
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "44");
                            res = eventConsumed;
                        }
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
static void WaitForButton_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.AlarmLed.WaitForButton");
}

static void FaultIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOn");
}

static void FaultIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.AlarmLed.FaultIndicatorOff");
}

static void AlarmIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.AlarmLed.AlarmIndicatorOn");
}

static void AlarmIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Uc1ArmingLogger.AlarmLed.AlarmIndicatorOff");
}
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Uc_Uc1ArmingLogger* const me) {
    free(me);
}

BasicWebAdapter * Uc_Uc1ArmingLogger_getItsWebAdapter(const Uc_Uc1ArmingLogger* const me) {
    return me->itsWebAdapter;
}

void Uc_Uc1ArmingLogger_visitWebAdaptedRelations(const Uc_Uc1ArmingLogger* const me) {
}

static void Uc_Uc1ArmingLogger_initWebAdapters(Uc_Uc1ArmingLogger* const me) {
    me->itsWebAdapter = NewObjectTypeWebAdapter("struct Uc_Uc1ArmingLogger", me, (void (*)(void *)) Uc_Uc1ArmingLogger_visitWebAdaptedRelations);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_WakeUp", me, (int (*)(void *)) Uc_Uc1ArmingLogger_getT_WakeUp, (void (*)(void *, int)) Uc_Uc1ArmingLogger_setT_WakeUp), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_ExitTimeout", me, (int (*)(void *)) Uc_Uc1ArmingLogger_getT_ExitTimeout, (void (*)(void *, int)) Uc_Uc1ArmingLogger_setT_ExitTimeout), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_IdleLed", me, (int (*)(void *)) Uc_Uc1ArmingLogger_getT_IdleLed, (void (*)(void *, int)) Uc_Uc1ArmingLogger_setT_IdleLed), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_AlarmLed", me, (int (*)(void *)) Uc_Uc1ArmingLogger_getT_AlarmLed, (void (*)(void *, int)) Uc_Uc1ArmingLogger_setT_AlarmLed), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_BatteryLowLed", me, (int (*)(void *)) Uc_Uc1ArmingLogger_getT_BatteryLowLed, (void (*)(void *, int)) Uc_Uc1ArmingLogger_setT_BatteryLowLed), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_ExitTimeoutLed", me, (int (*)(void *)) Uc_Uc1ArmingLogger_getT_ExitTimeoutLed, (void (*)(void *, int)) Uc_Uc1ArmingLogger_setT_ExitTimeoutLed), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_FaultLed", me, (int (*)(void *)) Uc_Uc1ArmingLogger_getT_FaultLed, (void (*)(void *, int)) Uc_Uc1ArmingLogger_setT_FaultLed), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("Mode", me, (int (*)(void *)) Uc_Uc1ArmingLogger_getModeWebWrapper, (void (*)(void *, int)) Uc_Uc1ArmingLogger_setModeWebWrapper), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewCStrAttrWebAdapter("Key", me, (char* (*)(void *)) Uc_Uc1ArmingLogger_getKeyWebWrapper, (void (*)(void *, char*)) NULL), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("keyStatus", me, (int (*)(void *)) Uc_Uc1ArmingLogger_getKeyStatusWebWrapper, (void (*)(void *, int)) Uc_Uc1ArmingLogger_setKeyStatusWebWrapper), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("flagMemoryLow", me, (int (*)(void *)) Uc_Uc1ArmingLogger_getFlagMemoryLowWebWrapper, (void (*)(void *, int)) Uc_Uc1ArmingLogger_setFlagMemoryLowWebWrapper), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagSensorsFailure", me, (RiCBoolean (*)(void *)) Uc_Uc1ArmingLogger_getFlagSensorsFailure, (void (*)(void *, RiCBoolean)) NULL), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagAlarm", me, (RiCBoolean (*)(void *)) Uc_Uc1ArmingLogger_getFlagAlarm, (void (*)(void *, RiCBoolean)) Uc_Uc1ArmingLogger_setFlagAlarm), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagBatteryLow", me, (RiCBoolean (*)(void *)) Uc_Uc1ArmingLogger_getFlagBatteryLow, (void (*)(void *, RiCBoolean)) Uc_Uc1ArmingLogger_setFlagBatteryLow), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagFault", me, (RiCBoolean (*)(void *)) Uc_Uc1ArmingLogger_getFlagFault, (void (*)(void *, RiCBoolean)) Uc_Uc1ArmingLogger_setFlagFault), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("faultLedCount", me, (int (*)(void *)) Uc_Uc1ArmingLogger_getFaultLedCount, (void (*)(void *, int)) Uc_Uc1ArmingLogger_setFaultLedCount), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewObjectTypeOperationWebAdapter("evReset", me, (void (*)(void *)) Uc_Uc1ArmingLogger_evReset), me->itsWebAdapter);
}

static int Uc_Uc1ArmingLogger_getModeWebWrapper(Uc_Uc1ArmingLogger* const me) {
    return (int) Uc_Uc1ArmingLogger_getMode(me);
}

static void Uc_Uc1ArmingLogger_setModeWebWrapper(Uc_Uc1ArmingLogger* const me, int value) {
    Uc_Uc1ArmingLogger_setMode(me, (Uc_Uc1ArmingLogger__Mode) value);
}

static char* Uc_Uc1ArmingLogger_getKeyWebWrapper(Uc_Uc1ArmingLogger* const me) {
    return (char*) Uc_Uc1ArmingLogger_getKey(me);
}

static int Uc_Uc1ArmingLogger_getKeyStatusWebWrapper(Uc_Uc1ArmingLogger* const me) {
    return (int) Uc_Uc1ArmingLogger_getKeyStatus(me);
}

static void Uc_Uc1ArmingLogger_setKeyStatusWebWrapper(Uc_Uc1ArmingLogger* const me, int value) {
    Uc_Uc1ArmingLogger_setKeyStatus(me, (Uc_Uc1ArmingLogger__keyStatus) value);
}

static int Uc_Uc1ArmingLogger_getFlagMemoryLowWebWrapper(Uc_Uc1ArmingLogger* const me) {
    return (int) Uc_Uc1ArmingLogger_getFlagMemoryLow(me);
}

static void Uc_Uc1ArmingLogger_setFlagMemoryLowWebWrapper(Uc_Uc1ArmingLogger* const me, int value) {
    Uc_Uc1ArmingLogger_setFlagMemoryLow(me, (Uc_Uc1ArmingLogger__keyStatus) value);
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecution\Animate\Uc_Uc1ArmingLogger.c
*********************************************************************/
