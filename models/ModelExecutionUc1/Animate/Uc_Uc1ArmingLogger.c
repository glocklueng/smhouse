/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: Uc_Uc1ArmingLogger
//!	Generated Date	: Sat, 12, May 2012  
	File Path	: ModelExecutionUc1\Animate\Uc_Uc1ArmingLogger.c
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

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_goToSleep_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_validateKey_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_checkSensors_SERIALIZE ARCSA_addAttribute_c(arcsmethod, "Status", ARC_RiCBoolean2String(Status));

#define FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_changeMode_SERIALIZE ARCSA_addAttribute_c(arcsmethod, "Mode", ARC_int2String(Mode));
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
static void terminationstate_58_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void IdleMode_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void IdleMode_entDef(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
static RiCTakeEventStatus IdleMode_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void ModeLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void ModeLed_entDef(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
static RiCTakeEventStatus ModeLed_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id);

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
static void IdleMode_IdleMode_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void IdleMode_IdleMode_entDef(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
static RiCTakeEventStatus IdleMode_IdleMode_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WaitForWakeUp_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void WaitForKey_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void WaitExitTimeout_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_79_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_61_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_60_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_59_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_53_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_52_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_48_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

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
static void Check_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void CheckKey_AuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void AuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void ErrorLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void ErrorLed_entDef(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
static RiCTakeEventStatus ErrorLed_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id);

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

/*## statechart_method */
static void BatteryLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void BatteryLed_entDef(Uc_Uc1ArmingLogger* const me);

/*## statechart_method */
static RiCTakeEventStatus BatteryLed_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void BatteryLed_BatteryLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void BatteryLed_BatteryLed_entDef(Uc_Uc1ArmingLogger* const me);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WaitFlag_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void BatteryIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);

/*## statechart_method */
static void BatteryIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Uc_Uc1ArmingLogger* const me);

static void Uc_Uc1ArmingLogger_initWebAdapters(Uc_Uc1ArmingLogger* const me);

static int Uc_Uc1ArmingLogger_getModeWebWrapper(Uc_Uc1ArmingLogger* const me);

static void Uc_Uc1ArmingLogger_setModeWebWrapper(Uc_Uc1ArmingLogger* const me, int value);

static char* Uc_Uc1ArmingLogger_getKeyWebWrapper(Uc_Uc1ArmingLogger* const me);

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

/*## operation goToSleep() */
static void goToSleep(Uc_Uc1ArmingLogger* const me);

/*## operation validateKey() */
static void validateKey(Uc_Uc1ArmingLogger* const me);

/*## operation checkSensors(RiCBoolean) */
static void checkSensors(Uc_Uc1ArmingLogger* const me, RiCBoolean Status);

/*## operation changeMode(int) */
static void changeMode(Uc_Uc1ArmingLogger* const me, int Mode);

/*## auto_generated */
static void initRelations(Uc_Uc1ArmingLogger* const me);

void Uc_Uc1ArmingLogger_Cleanup(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_DESTRUCTOR(me, &me, Uc_Uc1ArmingLogger, ~Uc_Uc1ArmingLogger);
    BasicWebAdapter_Destroy(me->itsWebAdapter);
    RiCReactive_cleanup(&(me->ric_reactive));
}

/*## operation goToSleep() */
static void goToSleep(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc1ArmingLogger, goToSleep, goToSleep(), 0, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc_Uc1ArmingLogger_goToSleep_SERIALIZE);
    /*#[ operation goToSleep() */
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
    me->ModeLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
    me->ModeLed_active = Uc_Uc1ArmingLogger_RiCNonState;
    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_RiCNonState;
    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_RiCNonState;
    me->CheckKey_subState = Uc_Uc1ArmingLogger_RiCNonState;
    me->ErrorLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
    me->ErrorLed_active = Uc_Uc1ArmingLogger_RiCNonState;
    me->BatteryLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
    me->BatteryLed_active = Uc_Uc1ArmingLogger_RiCNonState;
    me->BatteryLed_BatteryLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
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

RiCBoolean Uc_Uc1ArmingLogger_getKeyStatus(const Uc_Uc1ArmingLogger* const me) {
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
    me->keyStatus = 0;
    me->flagMemoryLow = 0;
    me->flagAlarm = 0;
    me->flagBatteryLow = 0;
    me->faultLedCount = 10;
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

_Mode Uc_Uc1ArmingLogger_getMode(const Uc_Uc1ArmingLogger* const me) {
    return me->Mode;
}

RiCBoolean Uc_Uc1ArmingLogger_getFlagMemoryLow(const Uc_Uc1ArmingLogger* const me) {
    return me->flagMemoryLow;
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

void Uc_Uc1ArmingLogger_setMode(Uc_Uc1ArmingLogger* const me, _Mode p_Mode) {
    me->Mode = p_Mode;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

void Uc_Uc1ArmingLogger_setKeyStatus(Uc_Uc1ArmingLogger* const me, RiCBoolean p_keyStatus) {
    me->keyStatus = p_keyStatus;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

void Uc_Uc1ArmingLogger_setFlagMemoryLow(Uc_Uc1ArmingLogger* const me, RiCBoolean p_flagMemoryLow) {
    me->flagMemoryLow = p_flagMemoryLow;
    NOTIFY_SET_OPERATION(me, Uc_Uc1ArmingLogger);
}

int Uc_Uc1ArmingLogger_rootState_IN(const Uc_Uc1ArmingLogger* const me) {
    return 1;
}

RiCBoolean Uc_Uc1ArmingLogger_rootState_isCompleted(Uc_Uc1ArmingLogger* const me) {
    return ( IS_IN(me, Uc_Uc1ArmingLogger_terminationstate_58) );
}

void Uc_Uc1ArmingLogger_rootStateEntDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "0");
    IdleMode_entDef(me);
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "0");
}

int Uc_Uc1ArmingLogger_terminationstate_58_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->rootState_subState == Uc_Uc1ArmingLogger_terminationstate_58;
}

int Uc_Uc1ArmingLogger_IdleMode_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->rootState_subState == Uc_Uc1ArmingLogger_IdleMode;
}

void Uc_Uc1ArmingLogger_IdleMode_exit(Uc_Uc1ArmingLogger* const me) {
    Uc_Uc1ArmingLogger_IdleMode_IdleMode_exit(me);
    Uc_Uc1ArmingLogger_ModeLed_exit(me);
    Uc_Uc1ArmingLogger_ErrorLed_exit(me);
    Uc_Uc1ArmingLogger_BatteryLed_exit(me);
    
    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode");
}

int Uc_Uc1ArmingLogger_ModeLed_IN(const Uc_Uc1ArmingLogger* const me) {
    return Uc_Uc1ArmingLogger_IdleMode_IN(me);
}

void Uc_Uc1ArmingLogger_ModeLed_exit(Uc_Uc1ArmingLogger* const me) {
    switch (me->ModeLed_subState) {
        case Uc_Uc1ArmingLogger_IdleIndicatorOff:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.IdleIndicatorOff");
        }
        break;
        case Uc_Uc1ArmingLogger_IdleIndicatorOn:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.IdleIndicatorOn");
        }
        break;
        case Uc_Uc1ArmingLogger_WaitMode:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.WaitMode");
        }
        break;
        case Uc_Uc1ArmingLogger_TimeoutIndicatorOn:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.TimeoutIndicatorOn");
        }
        break;
        case Uc_Uc1ArmingLogger_TimeoutIndicatorOff:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.TimeoutIndicatorOff");
        }
        break;
        default:
            break;
    }
    me->ModeLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed");
}

int Uc_Uc1ArmingLogger_WaitMode_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->ModeLed_subState == Uc_Uc1ArmingLogger_WaitMode;
}

int Uc_Uc1ArmingLogger_TimeoutIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->ModeLed_subState == Uc_Uc1ArmingLogger_TimeoutIndicatorOn;
}

int Uc_Uc1ArmingLogger_TimeoutIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->ModeLed_subState == Uc_Uc1ArmingLogger_TimeoutIndicatorOff;
}

int Uc_Uc1ArmingLogger_IdleIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->ModeLed_subState == Uc_Uc1ArmingLogger_IdleIndicatorOn;
}

int Uc_Uc1ArmingLogger_IdleIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->ModeLed_subState == Uc_Uc1ArmingLogger_IdleIndicatorOff;
}

int Uc_Uc1ArmingLogger_IdleMode_IdleMode_IN(const Uc_Uc1ArmingLogger* const me) {
    return Uc_Uc1ArmingLogger_IdleMode_IN(me);
}

void Uc_Uc1ArmingLogger_IdleMode_IdleMode_exit(Uc_Uc1ArmingLogger* const me) {
    switch (me->IdleMode_IdleMode_subState) {
        case Uc_Uc1ArmingLogger_WaitForWakeUp:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitForWakeUp");
        }
        break;
        case Uc_Uc1ArmingLogger_WaitForKey:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_WaitForKey_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitForKey");
        }
        break;
        case Uc_Uc1ArmingLogger_evReadKey:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.evReadKey");
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_48:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_48");
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey:
        {
            Uc_Uc1ArmingLogger_CheckKey_exit(me);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_52:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_52");
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_53:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_53");
        }
        break;
        case Uc_Uc1ArmingLogger_CheckSensors:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckSensors");
        }
        break;
        case Uc_Uc1ArmingLogger_CheckMemory:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckMemory");
        }
        break;
        case Uc_Uc1ArmingLogger_DeviceFailure:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.DeviceFailure");
        }
        break;
        case Uc_Uc1ArmingLogger_WaitExitTimeout:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_WaitExitTimeout_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitExitTimeout");
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_59:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_59");
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_60:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_60");
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_61:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_61");
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_79:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_79");
        }
        break;
        default:
            break;
    }
    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode");
}

int Uc_Uc1ArmingLogger_WaitForWakeUp_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_WaitForWakeUp;
}

int Uc_Uc1ArmingLogger_WaitForKey_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_WaitForKey;
}

int Uc_Uc1ArmingLogger_WaitExitTimeout_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_WaitExitTimeout;
}

int Uc_Uc1ArmingLogger_sendaction_79_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_sendaction_79;
}

int Uc_Uc1ArmingLogger_sendaction_61_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_sendaction_61;
}

int Uc_Uc1ArmingLogger_sendaction_60_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_sendaction_60;
}

int Uc_Uc1ArmingLogger_sendaction_59_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_sendaction_59;
}

RiCTakeEventStatus Uc_Uc1ArmingLogger_sendaction_59TakeNull(Uc_Uc1ArmingLogger* const me) {
    RiCTakeEventStatus res = eventNotConsumed;
    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "17");
    Uc_Uc1ArmingLogger_IdleMode_exit(me);
    {
        /*#[ transition 17 */
        printf("Start logging.\n");
        /*#]*/
    }
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.terminationstate_58");
    me->rootState_subState = Uc_Uc1ArmingLogger_terminationstate_58;
    me->rootState_active = Uc_Uc1ArmingLogger_terminationstate_58;
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "17");
    res = eventConsumed;
    return res;
}

RiCTakeEventStatus Uc_Uc1ArmingLogger_sendaction_59_takeEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == Null_id)
        {
            res = Uc_Uc1ArmingLogger_sendaction_59TakeNull(me);
        }
    
    return res;
}

int Uc_Uc1ArmingLogger_sendaction_53_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_sendaction_53;
}

int Uc_Uc1ArmingLogger_sendaction_52_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_sendaction_52;
}

int Uc_Uc1ArmingLogger_sendaction_48_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_sendaction_48;
}

int Uc_Uc1ArmingLogger_evReadKey_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_evReadKey;
}

int Uc_Uc1ArmingLogger_DeviceFailure_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_DeviceFailure;
}

int Uc_Uc1ArmingLogger_CheckSensors_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_CheckSensors;
}

int Uc_Uc1ArmingLogger_CheckMemory_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_CheckMemory;
}

int Uc_Uc1ArmingLogger_CheckKey_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->IdleMode_IdleMode_subState == Uc_Uc1ArmingLogger_CheckKey;
}

void Uc_Uc1ArmingLogger_CheckKey_exit(Uc_Uc1ArmingLogger* const me) {
    switch (me->CheckKey_subState) {
        case Uc_Uc1ArmingLogger_Check:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.ROOT.CheckKey.Check");
        }
        break;
        case Uc_Uc1ArmingLogger_AuthenticatedHelperState:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
        }
        break;
        case Uc_Uc1ArmingLogger_NotAuthenticatedHelperState:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
        }
        break;
        default:
            break;
    }
    me->CheckKey_subState = Uc_Uc1ArmingLogger_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey");
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
            /*## transition 25 */
            if(me->Mode == IDLE)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.7");
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "25");
                    Uc_Uc1ArmingLogger_CheckKey_exit(me);
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitForKey");
                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_WaitForKey;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_WaitForKey;
                    {
                        /*#[ state ROOT.IdleMode.IdleMode.WaitForKey.(Entry) */
                        printf("Waiting for key ...\n");
                        /*#]*/
                    }
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_WakeUp, Uc_Uc1ArmingLogger_Timeout_WaitForKey_id, &(me->ric_reactive), "ROOT.IdleMode.IdleMode.WaitForKey");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "25");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.7");
                    res = eventConsumed;
                }
            else
                {
                    /*## transition 26 */
                    if(me->Mode == EXIT_TIMEOUT)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.7");
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "26");
                            Uc_Uc1ArmingLogger_CheckKey_exit(me);
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitExitTimeout");
                            me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_WaitExitTimeout;
                            me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_WaitExitTimeout;
                            {
                                /*#[ state ROOT.IdleMode.IdleMode.WaitExitTimeout.(Entry) */
                                printf("Waiting for exit ...\n");
                                /*#]*/
                            }
                            RiCTask_schedTm(me->ric_reactive.myTask, me->t_ExitTimeout, Uc_Uc1ArmingLogger_Timeout_WaitExitTimeout_id, &(me->ric_reactive), "ROOT.IdleMode.IdleMode.WaitExitTimeout");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "26");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.7");
                            res = eventConsumed;
                        }
                }
        }
    
    return res;
}

int Uc_Uc1ArmingLogger_Check_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->CheckKey_subState == Uc_Uc1ArmingLogger_Check;
}

int Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->CheckKey_subState == Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState;
}

RiCTakeEventStatus Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState_takeEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == Null_id)
        {
            /*## transition 7 */
            if(me->Mode == IDLE)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.6");
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "7");
                    Uc_Uc1ArmingLogger_CheckKey_exit(me);
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_52");
                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_sendaction_52;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_sendaction_52;
                    {
                        /*#[ state ROOT.IdleMode.IdleMode.sendaction_52.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqTurnOnSensorsPower());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "7");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.6");
                    res = eventConsumed;
                }
            else
                {
                    /*## transition 22 */
                    if(me->Mode == EXIT_TIMEOUT)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.6");
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "22");
                            Uc_Uc1ArmingLogger_CheckKey_exit(me);
                            {
                                /*#[ transition 22 */
                                
                                changeMode(me, IDLE);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_60");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_sendaction_60;
                            me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_sendaction_60;
                            {
                                /*#[ state ROOT.IdleMode.IdleMode.sendaction_60.(Entry) */
                                RiCGEN_PORT(me->pSensors, reqTurnOffSensorsPower());
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "22");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.6");
                            res = eventConsumed;
                        }
                }
        }
    
    return res;
}

int Uc_Uc1ArmingLogger_AuthenticatedHelperState_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->CheckKey_subState == Uc_Uc1ArmingLogger_AuthenticatedHelperState;
}

int Uc_Uc1ArmingLogger_ErrorLed_IN(const Uc_Uc1ArmingLogger* const me) {
    return Uc_Uc1ArmingLogger_IdleMode_IN(me);
}

void Uc_Uc1ArmingLogger_ErrorLed_exit(Uc_Uc1ArmingLogger* const me) {
    switch (me->ErrorLed_subState) {
        case Uc_Uc1ArmingLogger_WaitForButton:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.WaitForButton");
        }
        break;
        case Uc_Uc1ArmingLogger_AlarmIndicatorOff:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.AlarmIndicatorOff");
        }
        break;
        case Uc_Uc1ArmingLogger_AlarmIndicatorOn:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_AlarmIndicatorOn_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.AlarmIndicatorOn");
        }
        break;
        case Uc_Uc1ArmingLogger_FaultIndicatorOn:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.FaultIndicatorOn");
        }
        break;
        case Uc_Uc1ArmingLogger_FaultIndicatorOff:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_FaultIndicatorOff_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.FaultIndicatorOff");
        }
        break;
        default:
            break;
    }
    me->ErrorLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed");
}

int Uc_Uc1ArmingLogger_WaitForButton_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->ErrorLed_subState == Uc_Uc1ArmingLogger_WaitForButton;
}

int Uc_Uc1ArmingLogger_FaultIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->ErrorLed_subState == Uc_Uc1ArmingLogger_FaultIndicatorOn;
}

int Uc_Uc1ArmingLogger_FaultIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->ErrorLed_subState == Uc_Uc1ArmingLogger_FaultIndicatorOff;
}

int Uc_Uc1ArmingLogger_AlarmIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->ErrorLed_subState == Uc_Uc1ArmingLogger_AlarmIndicatorOn;
}

int Uc_Uc1ArmingLogger_AlarmIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->ErrorLed_subState == Uc_Uc1ArmingLogger_AlarmIndicatorOff;
}

int Uc_Uc1ArmingLogger_BatteryLed_IN(const Uc_Uc1ArmingLogger* const me) {
    return Uc_Uc1ArmingLogger_IdleMode_IN(me);
}

void Uc_Uc1ArmingLogger_BatteryLed_exit(Uc_Uc1ArmingLogger* const me) {
    if(me->BatteryLed_subState == Uc_Uc1ArmingLogger_BatteryLed_BatteryLed)
        {
            switch (me->BatteryLed_BatteryLed_subState) {
                case Uc_Uc1ArmingLogger_BatteryIndicatorOff:
                {
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed.BatteryIndicatorOff");
                }
                break;
                case Uc_Uc1ArmingLogger_BatteryIndicatorOn:
                {
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed.BatteryIndicatorOn");
                }
                break;
                case Uc_Uc1ArmingLogger_WaitFlag:
                {
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed.WaitFlag");
                }
                break;
                default:
                    break;
            }
            me->BatteryLed_BatteryLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed");
        }
    me->BatteryLed_subState = Uc_Uc1ArmingLogger_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed");
}

int Uc_Uc1ArmingLogger_BatteryLed_BatteryLed_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->BatteryLed_subState == Uc_Uc1ArmingLogger_BatteryLed_BatteryLed;
}

int Uc_Uc1ArmingLogger_WaitFlag_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->BatteryLed_BatteryLed_subState == Uc_Uc1ArmingLogger_WaitFlag;
}

int Uc_Uc1ArmingLogger_BatteryIndicatorOn_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->BatteryLed_BatteryLed_subState == Uc_Uc1ArmingLogger_BatteryIndicatorOn;
}

int Uc_Uc1ArmingLogger_BatteryIndicatorOff_IN(const Uc_Uc1ArmingLogger* const me) {
    return me->BatteryLed_BatteryLed_subState == Uc_Uc1ArmingLogger_BatteryIndicatorOff;
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
    ARCSA_addAttribute_c(arcsAttributes, "keyStatus", ARC_RiCBoolean2String(me->keyStatus));
    ARCSA_addAttribute_c(arcsAttributes, "flagMemoryLow", ARC_RiCBoolean2String(me->flagMemoryLow));
    ARCSA_addAttribute_c(arcsAttributes, "flagSensorsFailure", ARC_RiCBoolean2String(me->flagSensorsFailure));
    ARCSA_addAttribute_c(arcsAttributes, "flagAlarm", ARC_RiCBoolean2String(me->flagAlarm));
    ARCSA_addAttribute_c(arcsAttributes, "flagBatteryLow", ARC_RiCBoolean2String(me->flagBatteryLow));
    ARCSA_addAttribute_c(arcsAttributes, "faultLedCount", ARC_int2String(me->faultLedCount));
    ARCSA_addAttribute_c(arcsAttributes, "savedKeys", ARC_charPArray2String(8, me->savedKeys, sizeof(char*), &ARC_charP2String));
    ARCSA_addAttribute_c(arcsAttributes, "counter", ARC_int2String(me->counter));
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const Uc_Uc1ArmingLogger * const me = (const Uc_Uc1ArmingLogger *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    switch (me->rootState_subState) {
        case Uc_Uc1ArmingLogger_IdleMode:
        {
            IdleMode_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_terminationstate_58:
        {
            terminationstate_58_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
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
    if(me->rootState_active == Uc_Uc1ArmingLogger_IdleMode)
        {
            res = IdleMode_dispatchEvent(me, id);
        }
    return res;
}

#ifdef _OMINSTRUMENT
static void terminationstate_58_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.terminationstate_58");
}

static void IdleMode_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode");
    IdleMode_IdleMode_serializeStates(me, arcsState);
    ModeLed_serializeStates(me, arcsState);
    ErrorLed_serializeStates(me, arcsState);
    BatteryLed_serializeStates(me, arcsState);
}
#endif /* _OMINSTRUMENT */

static void IdleMode_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode");
    me->rootState_subState = Uc_Uc1ArmingLogger_IdleMode;
    me->rootState_active = Uc_Uc1ArmingLogger_IdleMode;
    IdleMode_IdleMode_entDef(me);
    ModeLed_entDef(me);
    ErrorLed_entDef(me);
    BatteryLed_entDef(me);
}

static RiCTakeEventStatus IdleMode_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(IdleMode_IdleMode_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Uc_Uc1ArmingLogger_IdleMode))
                {
                    return res;
                }
        }
    if(ModeLed_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Uc_Uc1ArmingLogger_IdleMode))
                {
                    return res;
                }
        }
    if(ErrorLed_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Uc_Uc1ArmingLogger_IdleMode))
                {
                    return res;
                }
        }
    if(BatteryLed_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Uc_Uc1ArmingLogger_IdleMode))
                {
                    return res;
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
static void ModeLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.ModeLed");
    switch (me->ModeLed_subState) {
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

static void ModeLed_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "29");
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.WaitMode");
    RiCReactive_pushNullConfig(&(me->ric_reactive));
    me->ModeLed_subState = Uc_Uc1ArmingLogger_WaitMode;
    me->ModeLed_active = Uc_Uc1ArmingLogger_WaitMode;
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "29");
}

static RiCTakeEventStatus ModeLed_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->ModeLed_active) {
        case Uc_Uc1ArmingLogger_IdleIndicatorOff:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "30");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.IdleIndicatorOff");
                            {
                                /*#[ transition 30 */
                                
                                ledIdleMode(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.IdleIndicatorOn");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->ModeLed_subState = Uc_Uc1ArmingLogger_IdleIndicatorOn;
                            me->ModeLed_active = Uc_Uc1ArmingLogger_IdleIndicatorOn;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "30");
                            res = eventConsumed;
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 33 */
                    if(me->Mode != IDLE)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "33");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.IdleIndicatorOff");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.WaitMode");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->ModeLed_subState = Uc_Uc1ArmingLogger_WaitMode;
                            me->ModeLed_active = Uc_Uc1ArmingLogger_WaitMode;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "33");
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
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "31");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.IdleIndicatorOn");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.IdleIndicatorOff");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->ModeLed_subState = Uc_Uc1ArmingLogger_IdleIndicatorOff;
                    me->ModeLed_active = Uc_Uc1ArmingLogger_IdleIndicatorOff;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_IdleLed, Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id, &(me->ric_reactive), "ROOT.IdleMode.ModeLed.IdleIndicatorOff");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "31");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_WaitMode:
        {
            if(id == Null_id)
                {
                    /*## transition 32 */
                    if(me->Mode == IDLE)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "32");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.WaitMode");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.IdleIndicatorOff");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->ModeLed_subState = Uc_Uc1ArmingLogger_IdleIndicatorOff;
                            me->ModeLed_active = Uc_Uc1ArmingLogger_IdleIndicatorOff;
                            RiCTask_schedTm(me->ric_reactive.myTask, me->t_IdleLed, Uc_Uc1ArmingLogger_Timeout_IdleIndicatorOff_id, &(me->ric_reactive), "ROOT.IdleMode.ModeLed.IdleIndicatorOff");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "32");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 34 */
                            if(me->Mode == EXIT_TIMEOUT)
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "34");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.WaitMode");
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.TimeoutIndicatorOff");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->ModeLed_subState = Uc_Uc1ArmingLogger_TimeoutIndicatorOff;
                                    me->ModeLed_active = Uc_Uc1ArmingLogger_TimeoutIndicatorOff;
                                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_ExitTimeoutLed, Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id, &(me->ric_reactive), "ROOT.IdleMode.ModeLed.TimeoutIndicatorOff");
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "34");
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
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "37");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.TimeoutIndicatorOn");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.TimeoutIndicatorOff");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->ModeLed_subState = Uc_Uc1ArmingLogger_TimeoutIndicatorOff;
                    me->ModeLed_active = Uc_Uc1ArmingLogger_TimeoutIndicatorOff;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_ExitTimeoutLed, Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id, &(me->ric_reactive), "ROOT.IdleMode.ModeLed.TimeoutIndicatorOff");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "37");
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
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "36");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.TimeoutIndicatorOff");
                            {
                                /*#[ transition 36 */
                                
                                ledTimeoutMode(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.TimeoutIndicatorOn");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->ModeLed_subState = Uc_Uc1ArmingLogger_TimeoutIndicatorOn;
                            me->ModeLed_active = Uc_Uc1ArmingLogger_TimeoutIndicatorOn;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "36");
                            res = eventConsumed;
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 35 */
                    if(me->Mode != EXIT_TIMEOUT)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "35");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_TimeoutIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.TimeoutIndicatorOff");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ModeLed.WaitMode");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->ModeLed_subState = Uc_Uc1ArmingLogger_WaitMode;
                            me->ModeLed_active = Uc_Uc1ArmingLogger_WaitMode;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "35");
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
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.ModeLed.WaitMode");
}

static void TimeoutIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.ModeLed.TimeoutIndicatorOn");
}

static void TimeoutIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.ModeLed.TimeoutIndicatorOff");
}

static void IdleIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.ModeLed.IdleIndicatorOn");
}

static void IdleIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.ModeLed.IdleIndicatorOff");
}

static void IdleMode_IdleMode_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode");
    switch (me->IdleMode_IdleMode_subState) {
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
        case Uc_Uc1ArmingLogger_evReadKey:
        {
            evReadKey_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_48:
        {
            sendaction_48_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey:
        {
            CheckKey_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_52:
        {
            sendaction_52_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_53:
        {
            sendaction_53_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckSensors:
        {
            CheckSensors_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckMemory:
        {
            CheckMemory_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_DeviceFailure:
        {
            DeviceFailure_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_WaitExitTimeout:
        {
            WaitExitTimeout_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_59:
        {
            sendaction_59_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_60:
        {
            sendaction_60_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_61:
        {
            sendaction_61_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_79:
        {
            sendaction_79_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void IdleMode_IdleMode_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "1");
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitForWakeUp");
    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_WaitForWakeUp;
    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_WaitForWakeUp;
    {
        /*#[ state ROOT.IdleMode.IdleMode.WaitForWakeUp.(Entry) */
        printf("Waiting for power on ...\n");
        /*#]*/
    }
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "1");
}

static RiCTakeEventStatus IdleMode_IdleMode_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->IdleMode_IdleMode_active) {
        case Uc_Uc1ArmingLogger_WaitForWakeUp:
        {
            if(id == evWakeUpButtonPressed_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "2");
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitForWakeUp");
                    {
                        /*#[ transition 2 */
                        
                        systemWakeUp(me);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_48");
                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_sendaction_48;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_sendaction_48;
                    {
                        /*#[ state ROOT.IdleMode.IdleMode.sendaction_48.(Entry) */
                        RiCGEN_PORT(me->pScanner, reqTurnOnScanner());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "2");
                    res = eventConsumed;
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
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "28");
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_WaitForKey_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitForKey");
                            {
                                /*#[ transition 28 */
                                
                                goToSleep(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_79");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_sendaction_79;
                            me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_sendaction_79;
                            {
                                /*#[ state ROOT.IdleMode.IdleMode.sendaction_79.(Entry) */
                                RiCGEN_PORT(me->pScanner, reqTurnOffScanner());
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "28");
                            res = eventConsumed;
                        }
                }
                break;
                case evKeyApplied_InterfacesPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "4");
                    RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_WaitForKey_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitForKey");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.evReadKey");
                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_evReadKey;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_evReadKey;
                    {
                        /*#[ state ROOT.IdleMode.IdleMode.evReadKey.(Entry) */
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
        case Uc_Uc1ArmingLogger_evReadKey:
        {
            if(id == evKeyReaded_InterfacesPkg_id)
                {
                    RiCSETPARAMS(me, evKeyReaded);
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "5");
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.evReadKey");
                    {
                        /*#[ transition 5 */
                        
                        readKey(me, params->Key);
                        /*#]*/
                    }
                    CheckKey_entDef(me);
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "5");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_48:
        {
            if(id == evScannerPoweredUp_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "3");
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_48");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitForKey");
                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_WaitForKey;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_WaitForKey;
                    {
                        /*#[ state ROOT.IdleMode.IdleMode.WaitForKey.(Entry) */
                        printf("Waiting for key ...\n");
                        /*#]*/
                    }
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_WakeUp, Uc_Uc1ArmingLogger_Timeout_WaitForKey_id, &(me->ric_reactive), "ROOT.IdleMode.IdleMode.WaitForKey");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "3");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_Check:
        {
            if(id == Null_id)
                {
                    /*## transition ROOT.IdleMode.IdleMode.CheckKey.2 */
                    if(me->keyStatus)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.1");
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.2");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.ROOT.CheckKey.Check");
                            {
                                /*#[ transition ROOT.IdleMode.IdleMode.CheckKey.2 */
                                
                                printf("Key is valid.\n");
                                /*#]*/
                            }
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->CheckKey_subState = Uc_Uc1ArmingLogger_AuthenticatedHelperState;
                            me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_AuthenticatedHelperState;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.2");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.1");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition ROOT.IdleMode.IdleMode.CheckKey.3 */
                            if(!(me->keyStatus))
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.1");
                                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.3");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.ROOT.CheckKey.Check");
                                    {
                                        /*#[ transition ROOT.IdleMode.IdleMode.CheckKey.3 */
                                        
                                        printf("Key is not valid.\n");
                                        /*#]*/
                                    }
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->CheckKey_subState = Uc_Uc1ArmingLogger_NotAuthenticatedHelperState;
                                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_NotAuthenticatedHelperState;
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.3");
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.1");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_AuthenticatedHelperState:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.4");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->CheckKey_subState = Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.4");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_NotAuthenticatedHelperState:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.5");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->CheckKey_subState = Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.5");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState:
        {
            res = Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState_takeEvent(me, id);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState:
        {
            res = Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState_takeEvent(me, id);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_52:
        {
            if(id == evSensorsPoweredUp_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "8");
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_52");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_53");
                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_sendaction_53;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_sendaction_53;
                    {
                        /*#[ state ROOT.IdleMode.IdleMode.sendaction_53.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqCheckSensors());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "8");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_53:
        {
            if(id == evSensorsStatus_InterfacesPkg_id)
                {
                    RiCSETPARAMS(me, evSensorsStatus);
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "9");
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_53");
                    {
                        /*#[ transition 9 */
                        
                        checkSensors(me, params->Failure);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckSensors");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_CheckSensors;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_CheckSensors;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "9");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_CheckSensors:
        {
            if(id == Null_id)
                {
                    /*## transition 11 */
                    if(!(me->flagSensorsFailure))
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "10");
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "11");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckSensors");
                            {
                                /*#[ transition 11 */
                                
                                printf("Sensors OK.\n");
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckMemory");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_CheckMemory;
                            me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_CheckMemory;
                            {
                                /*#[ state ROOT.IdleMode.IdleMode.CheckMemory.(Entry) */
                                checkFreeMemory(me);
                                
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "11");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "10");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 12 */
                            if(me->flagSensorsFailure)
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "10");
                                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "12");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckSensors");
                                    {
                                        /*#[ transition 12 */
                                        
                                        printf("Sensors failure.\n");
                                        /*#]*/
                                    }
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.DeviceFailure");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_DeviceFailure;
                                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_DeviceFailure;
                                    {
                                        /*#[ state ROOT.IdleMode.IdleMode.DeviceFailure.(Entry) */
                                        RiCGEN(me, evFault());
                                        /*#]*/
                                    }
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "12");
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "10");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_CheckMemory:
        {
            if(id == Null_id)
                {
                    /*## transition 14 */
                    if(me->flagMemoryLow)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "13");
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "14");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckMemory");
                            {
                                /*#[ transition 14 */
                                
                                printf("Memory failure.\n");
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.DeviceFailure");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_DeviceFailure;
                            me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_DeviceFailure;
                            {
                                /*#[ state ROOT.IdleMode.IdleMode.DeviceFailure.(Entry) */
                                RiCGEN(me, evFault());
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "14");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "13");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 15 */
                            if(!(me->flagMemoryLow))
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "13");
                                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "15");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckMemory");
                                    {
                                        /*#[ transition 15 */
                                        
                                        changeMode(me, EXIT_TIMEOUT);
                                        ledTimeoutMode(me);
                                        printf("Memory OK.\n");
                                        /*#]*/
                                    }
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitExitTimeout");
                                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_WaitExitTimeout;
                                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_WaitExitTimeout;
                                    {
                                        /*#[ state ROOT.IdleMode.IdleMode.WaitExitTimeout.(Entry) */
                                        printf("Waiting for exit ...\n");
                                        /*#]*/
                                    }
                                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_ExitTimeout, Uc_Uc1ArmingLogger_Timeout_WaitExitTimeout_id, &(me->ric_reactive), "ROOT.IdleMode.IdleMode.WaitExitTimeout");
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "15");
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "13");
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
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "18");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.DeviceFailure");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_60");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_sendaction_60;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_sendaction_60;
                    {
                        /*#[ state ROOT.IdleMode.IdleMode.sendaction_60.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqTurnOffSensorsPower());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "18");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_WaitExitTimeout:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc1ArmingLogger_Timeout_WaitExitTimeout_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "16");
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_WaitExitTimeout_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitExitTimeout");
                            {
                                /*#[ transition 16 */
                                
                                changeMode(me, ACQUISITION);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_59");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_sendaction_59;
                            me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_sendaction_59;
                            {
                                /*#[ state ROOT.IdleMode.IdleMode.sendaction_59.(Entry) */
                                RiCGEN_PORT(me->pScanner, reqTurnOffScanner());
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "16");
                            res = eventConsumed;
                        }
                }
                break;
                case evKeyApplied_InterfacesPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "24");
                    RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_WaitExitTimeout_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitExitTimeout");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.evReadKey");
                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_evReadKey;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_evReadKey;
                    {
                        /*#[ state ROOT.IdleMode.IdleMode.evReadKey.(Entry) */
                        RiCGEN_PORT(me->pScanner, reqReadKey());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "24");
                    res = eventConsumed;
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_59:
        {
            res = Uc_Uc1ArmingLogger_sendaction_59_takeEvent(me, id);
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_60:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "19");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_60");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_61");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_sendaction_61;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_sendaction_61;
                    {
                        /*#[ state ROOT.IdleMode.IdleMode.sendaction_61.(Entry) */
                        RiCGEN_PORT(me->pScanner, reqTurnOffScanner());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "19");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_61:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "20");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_61");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitForWakeUp");
                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_WaitForWakeUp;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_WaitForWakeUp;
                    {
                        /*#[ state ROOT.IdleMode.IdleMode.WaitForWakeUp.(Entry) */
                        printf("Waiting for power on ...\n");
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "20");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_sendaction_79:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "53");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.sendaction_79");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.WaitForWakeUp");
                    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_WaitForWakeUp;
                    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_WaitForWakeUp;
                    {
                        /*#[ state ROOT.IdleMode.IdleMode.WaitForWakeUp.(Entry) */
                        printf("Waiting for power on ...\n");
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "53");
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
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.WaitForWakeUp");
}

static void WaitForKey_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.WaitForKey");
}

static void WaitExitTimeout_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.WaitExitTimeout");
}

static void sendaction_79_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.sendaction_79");
}

static void sendaction_61_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.sendaction_61");
}

static void sendaction_60_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.sendaction_60");
}

static void sendaction_59_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.sendaction_59");
}

static void sendaction_53_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.sendaction_53");
}

static void sendaction_52_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.sendaction_52");
}

static void sendaction_48_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.sendaction_48");
}

static void evReadKey_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.evReadKey");
}

static void DeviceFailure_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.DeviceFailure");
}

static void CheckSensors_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.CheckSensors");
}

static void CheckMemory_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.CheckMemory");
}

static void CheckKey_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.CheckKey");
    switch (me->CheckKey_subState) {
        case Uc_Uc1ArmingLogger_Check:
        {
            Check_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_AuthenticatedHelperState:
        {
            AuthenticatedHelperState_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_NotAuthenticatedHelperState:
        {
            NotAuthenticatedHelperState_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_AuthenticatedHelperState:
        {
            CheckKey_AuthenticatedHelperState_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc1ArmingLogger_CheckKey_NotAuthenticatedHelperState:
        {
            CheckKey_NotAuthenticatedHelperState_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void CheckKey_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey");
    me->IdleMode_IdleMode_subState = Uc_Uc1ArmingLogger_CheckKey;
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.0");
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.ROOT.CheckKey.Check");
    RiCReactive_pushNullConfig(&(me->ric_reactive));
    me->CheckKey_subState = Uc_Uc1ArmingLogger_Check;
    me->IdleMode_IdleMode_active = Uc_Uc1ArmingLogger_Check;
    {
        /*#[ state ROOT.IdleMode.IdleMode.CheckKey.ROOT.CheckKey.Check.(Entry) */
        validateKey(me);
        
        
        /*#]*/
    }
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.IdleMode.CheckKey.0");
}

#ifdef _OMINSTRUMENT
static void NotAuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.CheckKey.ROOT.CheckKey.NotAuthenticatedHelperState");
}

static void CheckKey_NotAuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.CheckKey.ROOT.CheckKey.NotAuthenticatedHelperState");
}

static void Check_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.CheckKey.ROOT.CheckKey.Check");
}

static void CheckKey_AuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.CheckKey.ROOT.CheckKey.AuthenticatedHelperState");
}

static void AuthenticatedHelperState_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.IdleMode.CheckKey.ROOT.CheckKey.AuthenticatedHelperState");
}

static void ErrorLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.ErrorLed");
    switch (me->ErrorLed_subState) {
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

static void ErrorLed_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "38");
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.WaitForButton");
    me->ErrorLed_subState = Uc_Uc1ArmingLogger_WaitForButton;
    me->ErrorLed_active = Uc_Uc1ArmingLogger_WaitForButton;
    {
        /*#[ state ROOT.IdleMode.ErrorLed.WaitForButton.(Entry) */
        me->counter = 0;
        /*#]*/
    }
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "38");
}

static RiCTakeEventStatus ErrorLed_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->ErrorLed_active) {
        case Uc_Uc1ArmingLogger_WaitForButton:
        {
            switch (id) {
                case evWakeUpButtonPressed_InterfacesPkg_id:
                {
                    /*## transition 39 */
                    if( me->Mode == IDLE)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "39");
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.WaitForButton");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.AlarmIndicatorOff");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->ErrorLed_subState = Uc_Uc1ArmingLogger_AlarmIndicatorOff;
                            me->ErrorLed_active = Uc_Uc1ArmingLogger_AlarmIndicatorOff;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "39");
                            res = eventConsumed;
                        }
                }
                break;
                case evFault_Uc1ArmingLoggerPkg_FunctionalAnalysisPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "44");
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.WaitForButton");
                    {
                        /*#[ transition 44 */
                        
                        ledSystemFailure(me);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.FaultIndicatorOn");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->ErrorLed_subState = Uc_Uc1ArmingLogger_FaultIndicatorOn;
                    me->ErrorLed_active = Uc_Uc1ArmingLogger_FaultIndicatorOn;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "44");
                    res = eventConsumed;
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
                    /*## transition 40 */
                    if(!(me->flagAlarm))
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "40");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.AlarmIndicatorOff");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.WaitForButton");
                            me->ErrorLed_subState = Uc_Uc1ArmingLogger_WaitForButton;
                            me->ErrorLed_active = Uc_Uc1ArmingLogger_WaitForButton;
                            {
                                /*#[ state ROOT.IdleMode.ErrorLed.WaitForButton.(Entry) */
                                me->counter = 0;
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "40");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 41 */
                            if(me->flagAlarm)
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "41");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.AlarmIndicatorOff");
                                    {
                                        /*#[ transition 41 */
                                        
                                        ledAlarm(me);
                                        /*#]*/
                                    }
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.AlarmIndicatorOn");
                                    me->ErrorLed_subState = Uc_Uc1ArmingLogger_AlarmIndicatorOn;
                                    me->ErrorLed_active = Uc_Uc1ArmingLogger_AlarmIndicatorOn;
                                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_AlarmLed, Uc_Uc1ArmingLogger_Timeout_AlarmIndicatorOn_id, &(me->ric_reactive), "ROOT.IdleMode.ErrorLed.AlarmIndicatorOn");
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "41");
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
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "42");
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_AlarmIndicatorOn_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.AlarmIndicatorOn");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.WaitForButton");
                            me->ErrorLed_subState = Uc_Uc1ArmingLogger_WaitForButton;
                            me->ErrorLed_active = Uc_Uc1ArmingLogger_WaitForButton;
                            {
                                /*#[ state ROOT.IdleMode.ErrorLed.WaitForButton.(Entry) */
                                me->counter = 0;
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "42");
                            res = eventConsumed;
                        }
                }
                break;
                case evFault_Uc1ArmingLoggerPkg_FunctionalAnalysisPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "43");
                    RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_AlarmIndicatorOn_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.AlarmIndicatorOn");
                    {
                        /*#[ transition 43 */
                        
                        ledSystemFailure(me);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.FaultIndicatorOn");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->ErrorLed_subState = Uc_Uc1ArmingLogger_FaultIndicatorOn;
                    me->ErrorLed_active = Uc_Uc1ArmingLogger_FaultIndicatorOn;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "43");
                    res = eventConsumed;
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
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "45");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.FaultIndicatorOn");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.FaultIndicatorOff");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->ErrorLed_subState = Uc_Uc1ArmingLogger_FaultIndicatorOff;
                    me->ErrorLed_active = Uc_Uc1ArmingLogger_FaultIndicatorOff;
                    {
                        /*#[ state ROOT.IdleMode.ErrorLed.FaultIndicatorOff.(Entry) */
                        me->counter++;
                        /*#]*/
                    }
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_FaultLed, Uc_Uc1ArmingLogger_Timeout_FaultIndicatorOff_id, &(me->ric_reactive), "ROOT.IdleMode.ErrorLed.FaultIndicatorOff");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "45");
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
                            /*## transition 46 */
                            if( me->counter < me-> faultLedCount)
                                {
                                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "46");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_FaultIndicatorOff_id, &(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.FaultIndicatorOff");
                                    {
                                        /*#[ transition 46 */
                                        
                                        ledSystemFailure(me);
                                        /*#]*/
                                    }
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.FaultIndicatorOn");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->ErrorLed_subState = Uc_Uc1ArmingLogger_FaultIndicatorOn;
                                    me->ErrorLed_active = Uc_Uc1ArmingLogger_FaultIndicatorOn;
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "46");
                                    res = eventConsumed;
                                }
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 47 */
                    if(me->counter == me->faultLedCount)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "47");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_FaultIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.FaultIndicatorOff");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.ErrorLed.WaitForButton");
                            me->ErrorLed_subState = Uc_Uc1ArmingLogger_WaitForButton;
                            me->ErrorLed_active = Uc_Uc1ArmingLogger_WaitForButton;
                            {
                                /*#[ state ROOT.IdleMode.ErrorLed.WaitForButton.(Entry) */
                                me->counter = 0;
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "47");
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
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.ErrorLed.WaitForButton");
}

static void FaultIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.ErrorLed.FaultIndicatorOn");
}

static void FaultIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.ErrorLed.FaultIndicatorOff");
}

static void AlarmIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.ErrorLed.AlarmIndicatorOn");
}

static void AlarmIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.ErrorLed.AlarmIndicatorOff");
}

static void BatteryLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.BatteryLed");
    if(me->BatteryLed_subState == Uc_Uc1ArmingLogger_BatteryLed_BatteryLed)
        {
            BatteryLed_BatteryLed_serializeStates(me, arcsState);
        }
}
#endif /* _OMINSTRUMENT */

static void BatteryLed_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "54");
    BatteryLed_BatteryLed_entDef(me);
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "54");
}

static RiCTakeEventStatus BatteryLed_dispatchEvent(Uc_Uc1ArmingLogger* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->BatteryLed_active) {
        case Uc_Uc1ArmingLogger_BatteryIndicatorOff:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "49");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed.BatteryIndicatorOff");
                            {
                                /*#[ transition 49 */
                                
                                ledBatteryLow(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed.BatteryIndicatorOn");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->BatteryLed_BatteryLed_subState = Uc_Uc1ArmingLogger_BatteryIndicatorOn;
                            me->BatteryLed_active = Uc_Uc1ArmingLogger_BatteryIndicatorOn;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "49");
                            res = eventConsumed;
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 52 */
                    if(!(me->flagBatteryLow))
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "52");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed.BatteryIndicatorOff");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed.WaitFlag");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->BatteryLed_BatteryLed_subState = Uc_Uc1ArmingLogger_WaitFlag;
                            me->BatteryLed_active = Uc_Uc1ArmingLogger_WaitFlag;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "52");
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
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "50");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed.BatteryIndicatorOn");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed.BatteryIndicatorOff");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->BatteryLed_BatteryLed_subState = Uc_Uc1ArmingLogger_BatteryIndicatorOff;
                    me->BatteryLed_active = Uc_Uc1ArmingLogger_BatteryIndicatorOff;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_BatteryLowLed, Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id, &(me->ric_reactive), "ROOT.IdleMode.BatteryLed.BatteryLed.BatteryIndicatorOff");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "50");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc1ArmingLogger_WaitFlag:
        {
            if(id == Null_id)
                {
                    /*## transition 51 */
                    if((me->flagBatteryLow) &&  (me->Mode != ACQUISITION))
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "51");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed.WaitFlag");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed.BatteryIndicatorOff");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->BatteryLed_BatteryLed_subState = Uc_Uc1ArmingLogger_BatteryIndicatorOff;
                            me->BatteryLed_active = Uc_Uc1ArmingLogger_BatteryIndicatorOff;
                            RiCTask_schedTm(me->ric_reactive.myTask, me->t_BatteryLowLed, Uc_Uc1ArmingLogger_Timeout_BatteryIndicatorOff_id, &(me->ric_reactive), "ROOT.IdleMode.BatteryLed.BatteryLed.BatteryIndicatorOff");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "51");
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
static void BatteryLed_BatteryLed_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.BatteryLed.BatteryLed");
    switch (me->BatteryLed_BatteryLed_subState) {
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

static void BatteryLed_BatteryLed_entDef(Uc_Uc1ArmingLogger* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed");
    me->BatteryLed_subState = Uc_Uc1ArmingLogger_BatteryLed_BatteryLed;
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc1ArmingLogger, "48");
    NOTIFY_STATE_ENTERED(me, Uc_Uc1ArmingLogger, "ROOT.IdleMode.BatteryLed.BatteryLed.WaitFlag");
    RiCReactive_pushNullConfig(&(me->ric_reactive));
    me->BatteryLed_BatteryLed_subState = Uc_Uc1ArmingLogger_WaitFlag;
    me->BatteryLed_active = Uc_Uc1ArmingLogger_WaitFlag;
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc1ArmingLogger, "48");
}

#ifdef _OMINSTRUMENT
static void WaitFlag_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.BatteryLed.BatteryLed.WaitFlag");
}

static void BatteryIndicatorOn_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.BatteryLed.BatteryLed.BatteryIndicatorOn");
}

static void BatteryIndicatorOff_serializeStates(const Uc_Uc1ArmingLogger* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.IdleMode.BatteryLed.BatteryLed.BatteryIndicatorOff");
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
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("keyStatus", me, (RiCBoolean (*)(void *)) Uc_Uc1ArmingLogger_getKeyStatus, (void (*)(void *, RiCBoolean)) Uc_Uc1ArmingLogger_setKeyStatus), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagMemoryLow", me, (RiCBoolean (*)(void *)) Uc_Uc1ArmingLogger_getFlagMemoryLow, (void (*)(void *, RiCBoolean)) Uc_Uc1ArmingLogger_setFlagMemoryLow), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagSensorsFailure", me, (RiCBoolean (*)(void *)) Uc_Uc1ArmingLogger_getFlagSensorsFailure, (void (*)(void *, RiCBoolean)) NULL), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagAlarm", me, (RiCBoolean (*)(void *)) Uc_Uc1ArmingLogger_getFlagAlarm, (void (*)(void *, RiCBoolean)) Uc_Uc1ArmingLogger_setFlagAlarm), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagBatteryLow", me, (RiCBoolean (*)(void *)) Uc_Uc1ArmingLogger_getFlagBatteryLow, (void (*)(void *, RiCBoolean)) Uc_Uc1ArmingLogger_setFlagBatteryLow), me->itsWebAdapter);
}

static int Uc_Uc1ArmingLogger_getModeWebWrapper(Uc_Uc1ArmingLogger* const me) {
    return (int) Uc_Uc1ArmingLogger_getMode(me);
}

static void Uc_Uc1ArmingLogger_setModeWebWrapper(Uc_Uc1ArmingLogger* const me, int value) {
    Uc_Uc1ArmingLogger_setMode(me, (_Mode) value);
}

static char* Uc_Uc1ArmingLogger_getKeyWebWrapper(Uc_Uc1ArmingLogger* const me) {
    return (char*) Uc_Uc1ArmingLogger_getKey(me);
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\Uc_Uc1ArmingLogger.c
*********************************************************************/
