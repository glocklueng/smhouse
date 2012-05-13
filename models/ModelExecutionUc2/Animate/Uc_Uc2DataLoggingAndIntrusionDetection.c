/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc2 
	Configuration 	: Animate
	Model Element	: Uc_Uc2DataLoggingAndIntrusionDetection
//!	Generated Date	: Sat, 12, May 2012  
	File Path	: ModelExecutionUc2\Animate\Uc_Uc2DataLoggingAndIntrusionDetection.c
*********************************************************************/

/*## auto_generated */
#include "Uc_Uc2DataLoggingAndIntrusionDetection.h"
/*## event evSensorsPoweredUp() */
#include "InterfacesPkg.h"
/*#[ ignore */
#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_writeSensors_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_goToSleep_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_systemWakeUp_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_checkSensorsData_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_systemFailure_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_setPSensorFlag_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_resetPSensorFlag_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_readKey_SERIALIZE ARCSA_addAttribute_c(arcsmethod, "Key", ARC_charP2String(Key));

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_validateKey_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_checkSensors_SERIALIZE ARCSA_addAttribute_c(arcsmethod, "Status", ARC_RiCBoolean2String(Status));

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_writeIntrusion_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_changeMode_SERIALIZE ARCSA_addAttribute_c(arcsmethod, "Mode", ARC_int2String(Mode));

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_Uc_Uc2DataLoggingAndIntrusionDetection_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_evStart_SERIALIZE OM_NO_OP
/*#]*/

/*#[ ignore */
static void evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event_Init(evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event* const me);

static void evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event_Init(evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event* const me) {
    RiCEvent_init(&(me->ric_event), evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event_id, NULL);
}
/*#]*/

/*## package FunctionalAnalysisPkg::Uc2DataLoggingAndIntrusionDetectionPkg */

/*## class Uc_Uc2DataLoggingAndIntrusionDetection */
/*## operation writeSensors() */
static void writeSensors(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation goToSleep() */
static void goToSleep(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation systemWakeUp() */
static void systemWakeUp(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation checkSensorsData() */
static void checkSensorsData(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation systemFailure() */
static void systemFailure(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation setPSensorFlag() */
static void setPSensorFlag(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation resetPSensorFlag() */
static void resetPSensorFlag(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation readKey(char*) */
static void readKey(Uc_Uc2DataLoggingAndIntrusionDetection* const me, char* Key);

/*## operation validateKey() */
static void validateKey(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation checkSensors(RiCBoolean) */
static void checkSensors(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean Status);

/*## operation writeIntrusion() */
static void writeIntrusion(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation changeMode(int) */
static void changeMode(Uc_Uc2DataLoggingAndIntrusionDetection* const me, int Mode);

/*## auto_generated */
static void initRelations(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## auto_generated */
static void initStatechart(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

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
static void terminationstate_46_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void terminationstate_13_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void AcquisitionMode_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void AcquisitionMode_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
static RiCTakeEventStatus AcquisitionMode_dispatchEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void state_55_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void state_55_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
static RiCTakeEventStatus state_55_dispatchEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WaitForTrigger_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void StartTimer_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void state_20_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void state_20_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
static RiCTakeEventStatus state_20_dispatchEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WaitForMotion_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_38_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void KeyHandling_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void KeyHandling_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WaitForSync_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void WaitForKey_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void WaitForButton_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void SwitchToIdleMode_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_40_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_33_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_25_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_23_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void GoToIdleModeHelperState_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void CheckKey_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void state_19_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void state_19_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
static RiCTakeEventStatus state_19_dispatchEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WriteSensorsData_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void WaitIntrusionDelay_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void WaitForAcquisitionMode_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void SystemFailure_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void Sleeping_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_9_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_7_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_6_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_53_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_42_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_41_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_4_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_2_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void InitialWrite_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void InitialSensorsRead_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void CheckSensors_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void CheckData_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

static const ARCSerCVtbl FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_instrumentVtbl = {
    serializeAttributes,
    NULL
};

static void Uc_Uc2DataLoggingAndIntrusionDetection_initWebAdapters(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

static int Uc_Uc2DataLoggingAndIntrusionDetection_getModeWebWrapper(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

static char* Uc_Uc2DataLoggingAndIntrusionDetection_getKeyWebWrapper(Uc_Uc2DataLoggingAndIntrusionDetection* const me);
/*#]*/

#ifdef _OMINSTRUMENT
OM_INSTRUMENT_OBJECT_TYPE(Uc_Uc2DataLoggingAndIntrusionDetection, Uc2DataLoggingAndIntrusionDetectionPkg, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg, FALSE, &FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_instrumentVtbl)
#endif /* _OMINSTRUMENT */

void Uc_Uc2DataLoggingAndIntrusionDetection_Init(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCTask * p_task) {
    /* Virtual tables Initialization */
    static const RiCReactive_Vtbl Uc_Uc2DataLoggingAndIntrusionDetection_reactiveVtbl = {
        rootState_dispatchEvent,
        rootState_entDef,
        ROOT_STATE_SERIALIZE_STATES(rootState_serializeStates),
        (RiCObjectDestroyMethod) Uc_Uc2DataLoggingAndIntrusionDetection_Destroy,
        NULL,
        NULL,
        NULL,
        (RiCObjectCleanupMethod) Uc_Uc2DataLoggingAndIntrusionDetection_Cleanup,
        (RiCObjectFreeMethod) FreeInstance
    };
    me->flagPSensor = 0;
    me->flagWriteSensors = 0;
    me->flagSensorsFailure = 0;
    me->t_SensorsPoll = 5000;
    me->t_IntrusionDelay = 10000;
    me->writesCnt = 0;
    me->intrusionCnt = 0;
    me->keyStatus = 0;
    me->Mode = IDLE;
    me->Key = "myInitKey";
    RiCReactive_init(&(me->ric_reactive), (void*)me, p_task, &Uc_Uc2DataLoggingAndIntrusionDetection_reactiveVtbl);
    NOTIFY_REACTIVE_CONSTRUCTOR(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, Uc_Uc2DataLoggingAndIntrusionDetection_Init, Uc_Uc2DataLoggingAndIntrusionDetection_Init(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_Uc_Uc2DataLoggingAndIntrusionDetection_SERIALIZE);
    RiCReactive_setActive(&(me->ric_reactive), RiCFALSE);
    initRelations(me);
    initStatechart(me);
    Uc_Uc2DataLoggingAndIntrusionDetection_initWebAdapters(me);
    NOTIFY_END_CONSTRUCTOR(me);
}

void Uc_Uc2DataLoggingAndIntrusionDetection_Cleanup(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_DESTRUCTOR(me, &me, Uc_Uc2DataLoggingAndIntrusionDetection, ~Uc_Uc2DataLoggingAndIntrusionDetection);
    BasicWebAdapter_Destroy(me->itsWebAdapter);
    RiCReactive_cleanup(&(me->ric_reactive));
}

/*## operation writeSensors() */
static void writeSensors(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, writeSensors, writeSensors(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_writeSensors_SERIALIZE);
    {
        /*#[ operation writeSensors() */
        me->writesCnt++;
        /*#]*/
    }
}

/*## operation goToSleep() */
static void goToSleep(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, goToSleep, goToSleep(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_goToSleep_SERIALIZE);
    /*#[ operation goToSleep() */
    /*#]*/
}

/*## operation systemWakeUp() */
static void systemWakeUp(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, systemWakeUp, systemWakeUp(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_systemWakeUp_SERIALIZE);
    /*#[ operation systemWakeUp() */
    /*#]*/
}

/*## operation checkSensorsData() */
static void checkSensorsData(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, checkSensorsData, checkSensorsData(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_checkSensorsData_SERIALIZE);
    /*#[ operation checkSensorsData() */
    /*#]*/
}

/*## operation systemFailure() */
static void systemFailure(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, systemFailure, systemFailure(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_systemFailure_SERIALIZE);
    /*#[ operation systemFailure() */
    /*#]*/
}

/*## operation setPSensorFlag() */
static void setPSensorFlag(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, setPSensorFlag, setPSensorFlag(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_setPSensorFlag_SERIALIZE);
    {
        /*#[ operation setPSensorFlag() */
        me->flagPSensor = 1;
        /*#]*/
    }
}

/*## operation resetPSensorFlag() */
static void resetPSensorFlag(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, resetPSensorFlag, resetPSensorFlag(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_resetPSensorFlag_SERIALIZE);
    {
        /*#[ operation resetPSensorFlag() */
        me->flagPSensor = 0;
        /*#]*/
    }
}

/*## operation readKey(char*) */
static void readKey(Uc_Uc2DataLoggingAndIntrusionDetection* const me, char* Key) {
    NOTIFY_OPERATION(me, &me, &Key, Uc_Uc2DataLoggingAndIntrusionDetection, readKey, readKey(char*), 1, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_readKey_SERIALIZE);
    {
        /*#[ operation readKey(char*) */
        me->Key = Key;
        /*#]*/
    }
}

/*## operation validateKey() */
static void validateKey(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, validateKey, validateKey(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_validateKey_SERIALIZE);
    /*#[ operation validateKey() */
    /*#]*/
}

/*## operation checkSensors(RiCBoolean) */
static void checkSensors(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean Status) {
    NOTIFY_OPERATION(me, &me, &Status, Uc_Uc2DataLoggingAndIntrusionDetection, checkSensors, checkSensors(RiCBoolean), 1, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_checkSensors_SERIALIZE);
    {
        /*#[ operation checkSensors(RiCBoolean) */
        me->flagSensorsFailure = Status;
        /*#]*/
    }
}

/*## operation writeIntrusion() */
static void writeIntrusion(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, writeIntrusion, writeIntrusion(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_writeIntrusion_SERIALIZE);
    {
        /*#[ operation writeIntrusion() */
        me->intrusionCnt++;
        /*#]*/
    }
}

/*## operation changeMode(int) */
static void changeMode(Uc_Uc2DataLoggingAndIntrusionDetection* const me, int Mode) {
    NOTIFY_OPERATION(me, &me, &Mode, Uc_Uc2DataLoggingAndIntrusionDetection, changeMode, changeMode(int), 1, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_changeMode_SERIALIZE);
    {
        /*#[ operation changeMode(int) */
        me->Mode = Mode;
        /*#]*/
    }
}

RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getFlagPSensor(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->flagPSensor;
}

RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getFlagWriteSensors(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->flagWriteSensors;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_setFlagWriteSensors(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_flagWriteSensors) {
    me->flagWriteSensors = p_flagWriteSensors;
    NOTIFY_SET_OPERATION(me, Uc_Uc2DataLoggingAndIntrusionDetection);
}

RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getFlagSensorsFailure(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->flagSensorsFailure;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_getT_SensorsPoll(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->t_SensorsPoll;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_setT_SensorsPoll(Uc_Uc2DataLoggingAndIntrusionDetection* const me, int p_t_SensorsPoll) {
    me->t_SensorsPoll = p_t_SensorsPoll;
    NOTIFY_SET_OPERATION(me, Uc_Uc2DataLoggingAndIntrusionDetection);
}

int Uc_Uc2DataLoggingAndIntrusionDetection_getT_IntrusionDelay(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->t_IntrusionDelay;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_setT_IntrusionDelay(Uc_Uc2DataLoggingAndIntrusionDetection* const me, int p_t_IntrusionDelay) {
    me->t_IntrusionDelay = p_t_IntrusionDelay;
    NOTIFY_SET_OPERATION(me, Uc_Uc2DataLoggingAndIntrusionDetection);
}

int Uc_Uc2DataLoggingAndIntrusionDetection_getWritesCnt(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->writesCnt;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_getIntrusionCnt(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->intrusionCnt;
}

RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getKeyStatus(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->keyStatus;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_setKeyStatus(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_keyStatus) {
    me->keyStatus = p_keyStatus;
    NOTIFY_SET_OPERATION(me, Uc_Uc2DataLoggingAndIntrusionDetection);
}

_Mode Uc_Uc2DataLoggingAndIntrusionDetection_getMode(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->Mode;
}

char* Uc_Uc2DataLoggingAndIntrusionDetection_getKey(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->Key;
}

Uc_Uc2DataLoggingAndIntrusionDetection * Uc_Uc2DataLoggingAndIntrusionDetection_Create(RiCTask * p_task) {
    Uc_Uc2DataLoggingAndIntrusionDetection* me = (Uc_Uc2DataLoggingAndIntrusionDetection *) malloc(sizeof(Uc_Uc2DataLoggingAndIntrusionDetection));
    if(me!=NULL)
        {
            Uc_Uc2DataLoggingAndIntrusionDetection_Init(me, p_task);
        }
    DYNAMICALLY_ALLOCATED(me);
    return me;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_Destroy(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    if(me!=NULL)
        {
            Uc_Uc2DataLoggingAndIntrusionDetection_Cleanup(me);
        }
    free(me);
}

RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_startBehavior(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    RiCBoolean done = RiCFALSE;
    done = RiCReactive_startBehavior(&(me->ric_reactive));
    return done;
}

static void initRelations(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    RiCDefaultReactivePort_Init(&me->pSensors);
    
    RiCDefaultReactivePort_Init(&me->pScanner);
    
    RiCDefaultReactivePort_Init(&me->pDriver);
    
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pSensors.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pScanner.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pDriver.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
}

static void initStatechart(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    me->rootState_subState = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
    me->rootState_active = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
    me->state_55_subState = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
    me->state_55_active = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
    me->state_20_subState = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
}

/*## TriggeredOperation evStart() */
void Uc_Uc2DataLoggingAndIntrusionDetection_evStart(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_TRIGGERED_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, evStart, evStart(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_evStart_SERIALIZE);
    {
        evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event triggerEvent;
        evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event_Init(&(triggerEvent));
        RiCReactive_takeTrigger(&(me->ric_reactive), &triggerEvent.ric_event);
    }
}

int Uc_Uc2DataLoggingAndIntrusionDetection_rootState_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return 1;
}

RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_rootState_isCompleted(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return ( IS_IN(me, Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13) || IS_IN(me, Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_46) );
}

int Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_46_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->rootState_subState == Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_46;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->rootState_subState == Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->rootState_subState == Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_exit(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    Uc_Uc2DataLoggingAndIntrusionDetection_state_19_exit(me);
    switch (me->state_20_subState) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.WaitForMotion");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling:
        {
            Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_exit(me);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_38:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.sendaction_38");
        }
        break;
        default:
            break;
    }
    me->state_20_subState = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20");
    switch (me->state_55_subState) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForTrigger:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_55.WaitForTrigger");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_StartTimer:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_StartTimer_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_55.StartTimer");
        }
        break;
        default:
            break;
    }
    me->state_55_subState = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_55");
    
    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode");
}

RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionModeTakeevMotionDetected(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    RiCTakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "19");
    Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_exit(me);
    {
        /*#[ transition 19 */
        
        RiCGEN(me, evStartIntTimer());
        systemWakeUp(me);
        setPSensorFlag(me);
        /*#]*/
    }
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode");
    me->rootState_subState = Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode;
    me->rootState_active = Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode;
    state_20_entDef(me);
    state_55_entDef(me);
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19");
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_6");
    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6;
    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6;
    {
        /*#[ state ROOT.AcquisitionMode.state_19.sendaction_6.(Entry) */
        RiCGEN_PORT(me->pSensors, reqTurnOnSensorsPower());
        /*#]*/
    }
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "19");
    res = eventConsumed;
    return res;
}

RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == evMotionDetected_InterfacesPkg_id)
        {
            res = Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionModeTakeevMotionDetected(me);
        }
    return res;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_state_55_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_IN(me);
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForTrigger_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_55_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitForTrigger;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_StartTimer_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_55_subState == Uc_Uc2DataLoggingAndIntrusionDetection_StartTimer;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_state_20_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_IN(me);
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_20_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_38_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_20_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_38;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_20_subState == Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_exit(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    switch (me->KeyHandling_subState) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForButton");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_23:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_23");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForKey");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_25:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_25");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.CheckKey");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_33");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForSync");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.SwitchToIdleMode");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_40:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_40");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
        }
        break;
        default:
            break;
    }
    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling");
}

RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == evIntTimerExpired_Uc2DataLoggingAndIntrusionDetectionPkg_FunctionalAnalysisPkg_id)
        {
            NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "23");
            Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_exit(me);
            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.sendaction_38");
            RiCReactive_pushNullConfig(&(me->ric_reactive));
            me->state_20_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_38;
            me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_38;
            {
                /*#[ state ROOT.AcquisitionMode.state_20.sendaction_38.(Entry) */
                RiCGEN_PORT(me->pScanner, reqTurnOffScanner());
                /*#]*/
            }
            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "23");
            res = eventConsumed;
        }
    
    return res;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_40_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_40;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33;
}

RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == Null_id)
        {
            /*## transition ROOT.AcquisitionMode.state_20.KeyHandling.12 */
            if(me->flagPSensor)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.8");
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.12");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_33");
                    {
                        /*#[ transition ROOT.AcquisitionMode.state_20.KeyHandling.8 */
                        me->keyStatus = 0;
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForSync");
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.12");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.8");
                    res = eventConsumed;
                }
            else
                {
                    /*## transition ROOT.AcquisitionMode.state_20.KeyHandling.13 */
                    if(!(me->flagPSensor))
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.8");
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.13");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_33");
                            {
                                /*#[ transition ROOT.AcquisitionMode.state_20.KeyHandling.8 */
                                me->keyStatus = 0;
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.SwitchToIdleMode");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode;
                            me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.13");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.8");
                            res = eventConsumed;
                        }
                }
        }
    if(res == eventNotConsumed)
        {
            res = Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(me, id);
        }
    return res;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_25_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_25;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_23_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_23;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState;
}

RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == Null_id)
        {
            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.14");
            Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_exit(me);
            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.terminationstate_46");
            me->rootState_subState = Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_46;
            me->rootState_active = Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_46;
            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.14");
            res = eventConsumed;
        }
    if(res == eventNotConsumed)
        {
            res = Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(me, id);
        }
    return res;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey;
}

RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == Null_id)
        {
            /*## transition ROOT.AcquisitionMode.state_20.KeyHandling.6 */
            if(!(me->keyStatus))
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.5");
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.6");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.CheckKey");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForKey");
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.6");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.5");
                    res = eventConsumed;
                }
            else
                {
                    /*## transition ROOT.AcquisitionMode.state_20.KeyHandling.7 */
                    if(me->keyStatus)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.5");
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.7");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.CheckKey");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_33");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33;
                            me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33;
                            {
                                /*#[ state ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_33.(Entry) */
                                RiCGEN_PORT(me->pScanner, reqTurnOffScanner());
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.7");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.5");
                            res = eventConsumed;
                        }
                }
        }
    if(res == eventNotConsumed)
        {
            res = Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(me, id);
        }
    return res;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_state_19_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_IN(me);
}

void Uc_Uc2DataLoggingAndIntrusionDetection_state_19_exit(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    switch (me->state_19_subState) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_InitialSensorsRead:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.InitialSensorsRead");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_InitialWrite:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.InitialWrite");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_2");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_4");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_Sleeping_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.Sleeping");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_6");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_7:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_7");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_CheckSensors:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.CheckSensors");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_9:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_9");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_CheckData:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.CheckData");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WriteSensorsData");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitIntrusionDelay:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitIntrusionDelay");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitForAcquisitionMode");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_41:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_41");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_42:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_42");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_53:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_53");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_SystemFailure:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.SystemFailure");
        }
        break;
        default:
            break;
    }
    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19");
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitIntrusionDelay_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitIntrusionDelay;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_SystemFailure_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_SystemFailure;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_9_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_9;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_7_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_7;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_53_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_53;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_42_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_42;
}

RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_42_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == Null_id)
        {
            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "30");
            Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_exit(me);
            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.terminationstate_13");
            me->rootState_subState = Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13;
            me->rootState_active = Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13;
            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "30");
            res = eventConsumed;
        }
    
    return res;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_41_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_41;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_InitialWrite_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_InitialWrite;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_InitialSensorsRead_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_InitialSensorsRead;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_CheckSensors_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_CheckSensors;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_CheckData_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_CheckData;
}

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes) {
    
    const Uc_Uc2DataLoggingAndIntrusionDetection * const me = (const Uc_Uc2DataLoggingAndIntrusionDetection *)void_me;
    ARCSA_addAttribute_c(arcsAttributes, "flagPSensor", ARC_RiCBoolean2String(me->flagPSensor));
    ARCSA_addAttribute_c(arcsAttributes, "flagWriteSensors", ARC_RiCBoolean2String(me->flagWriteSensors));
    ARCSA_addAttribute_c(arcsAttributes, "flagSensorsFailure", ARC_RiCBoolean2String(me->flagSensorsFailure));
    ARCSA_addAttribute_c(arcsAttributes, "t_SensorsPoll", ARC_int2String(me->t_SensorsPoll));
    ARCSA_addAttribute_c(arcsAttributes, "t_IntrusionDelay", ARC_int2String(me->t_IntrusionDelay));
    ARCSA_addAttribute_c(arcsAttributes, "writesCnt", ARC_int2String(me->writesCnt));
    ARCSA_addAttribute_c(arcsAttributes, "intrusionCnt", ARC_int2String(me->intrusionCnt));
    ARCSA_addAttribute_c(arcsAttributes, "keyStatus", ARC_RiCBoolean2String(me->keyStatus));
    ARCSA_addAttribute_c(arcsAttributes, "Mode", ARC_int2String((int)me->Mode));
    ARCSA_addAttribute_c(arcsAttributes, "Key", ARC_charP2String(me->Key));
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const Uc_Uc2DataLoggingAndIntrusionDetection * const me = (const Uc_Uc2DataLoggingAndIntrusionDetection *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    switch (me->rootState_subState) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13:
        {
            terminationstate_13_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode:
        {
            AcquisitionMode_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_46:
        {
            terminationstate_46_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me) {
    
    Uc_Uc2DataLoggingAndIntrusionDetection * const me = (Uc_Uc2DataLoggingAndIntrusionDetection *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT");
        NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "28");
        AcquisitionMode_entDef(me);
        NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "28");
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    Uc_Uc2DataLoggingAndIntrusionDetection * const me = (Uc_Uc2DataLoggingAndIntrusionDetection *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    if(me->rootState_active == Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode)
        {
            res = AcquisitionMode_dispatchEvent(me, id);
        }
    return res;
}

#ifdef _OMINSTRUMENT
static void terminationstate_46_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.terminationstate_46");
}

static void terminationstate_13_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.terminationstate_13");
}

static void AcquisitionMode_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode");
    state_19_serializeStates(me, arcsState);
    state_20_serializeStates(me, arcsState);
    state_55_serializeStates(me, arcsState);
}
#endif /* _OMINSTRUMENT */

static void AcquisitionMode_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode");
    me->rootState_subState = Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode;
    me->rootState_active = Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode;
    state_19_entDef(me);
    state_20_entDef(me);
    state_55_entDef(me);
}

static RiCTakeEventStatus AcquisitionMode_dispatchEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(state_19_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode))
                {
                    return res;
                }
        }
    if(state_20_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode))
                {
                    return res;
                }
        }
    if(state_55_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode))
                {
                    return res;
                }
        }
    if(res == eventNotConsumed)
        {
            res = Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_takeEvent(me, id);
        }
    return res;
}

#ifdef _OMINSTRUMENT
static void state_55_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_55");
    switch (me->state_55_subState) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForTrigger:
        {
            WaitForTrigger_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_StartTimer:
        {
            StartTimer_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void state_55_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_55");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "31");
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_55.WaitForTrigger");
    me->state_55_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForTrigger;
    me->state_55_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForTrigger;
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "31");
}

static RiCTakeEventStatus state_55_dispatchEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->state_55_active) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForTrigger:
        {
            if(id == evStartIntTimer_Uc2DataLoggingAndIntrusionDetectionPkg_FunctionalAnalysisPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "32");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_55.WaitForTrigger");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_55.StartTimer");
                    me->state_55_subState = Uc_Uc2DataLoggingAndIntrusionDetection_StartTimer;
                    me->state_55_active = Uc_Uc2DataLoggingAndIntrusionDetection_StartTimer;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_IntrusionDelay, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_StartTimer_id, &(me->ric_reactive), "ROOT.AcquisitionMode.state_55.StartTimer");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "32");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_StartTimer:
        {
            if(id == Timeout_id)
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_StartTimer_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "33");
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_StartTimer_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_55.StartTimer");
                            {
                                /*#[ transition 33 */
                                
                                RiCGEN(me, evIntTimerExpired());
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_55.WaitForTrigger");
                            me->state_55_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForTrigger;
                            me->state_55_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForTrigger;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "33");
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
static void WaitForTrigger_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_55.WaitForTrigger");
}

static void StartTimer_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_55.StartTimer");
}

static void state_20_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20");
    switch (me->state_20_subState) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion:
        {
            WaitForMotion_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling:
        {
            KeyHandling_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_38:
        {
            sendaction_38_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void state_20_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "20");
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.WaitForMotion");
    me->state_20_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion;
    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion;
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "20");
}

static RiCTakeEventStatus state_20_dispatchEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->state_20_active) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion:
        {
            if(id == evStartScanner_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "21");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.WaitForMotion");
                    KeyHandling_entDef(me);
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "21");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton:
        {
            if(id == evWakeUpButtonPressed_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.1");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForButton");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_23");
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_23;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_23;
                    {
                        /*#[ state ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_23.(Entry) */
                        RiCGEN_PORT(me->pScanner, reqTurnOnScanner());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.1");
                    res = eventConsumed;
                }
            if(res == eventNotConsumed)
                {
                    res = Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(me, id);
                }
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_23:
        {
            if(id == evScannerPoweredUp_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.2");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_23");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForKey");
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.2");
                    res = eventConsumed;
                }
            if(res == eventNotConsumed)
                {
                    res = Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(me, id);
                }
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey:
        {
            if(id == evKeyApplied_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.3");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForKey");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_25");
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_25;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_25;
                    {
                        /*#[ state ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_25.(Entry) */
                        RiCGEN_PORT(me->pScanner, reqReadKey());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.3");
                    res = eventConsumed;
                }
            if(res == eventNotConsumed)
                {
                    res = Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(me, id);
                }
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_25:
        {
            if(id == evKeyReaded_InterfacesPkg_id)
                {
                    RiCSETPARAMS(me, evKeyReaded);
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.4");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_25");
                    {
                        /*#[ transition ROOT.AcquisitionMode.state_20.KeyHandling.4 */
                        
                        readKey(me, params->Key);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.CheckKey");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey;
                    {
                        /*#[ state ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.CheckKey.(Entry) */
                        validateKey(me);
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.4");
                    res = eventConsumed;
                }
            if(res == eventNotConsumed)
                {
                    res = Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(me, id);
                }
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey:
        {
            res = Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey_takeEvent(me, id);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33:
        {
            res = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33_takeEvent(me, id);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync:
        {
            if(id == evSynced_Uc2DataLoggingAndIntrusionDetectionPkg_FunctionalAnalysisPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.11");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForSync");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.SwitchToIdleMode");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.11");
                    res = eventConsumed;
                }
            if(res == eventNotConsumed)
                {
                    res = Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(me, id);
                }
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.9");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.SwitchToIdleMode");
                    {
                        /*#[ transition ROOT.AcquisitionMode.state_20.KeyHandling.9 */
                        changeMode(me, IDLE);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_40");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_40;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_40;
                    {
                        /*#[ state ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_40.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqIdleModeActive());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.9");
                    res = eventConsumed;
                }
            if(res == eventNotConsumed)
                {
                    res = Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(me, id);
                }
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_40:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.10");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_40");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.10");
                    res = eventConsumed;
                }
            if(res == eventNotConsumed)
                {
                    res = Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(me, id);
                }
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState:
        {
            res = Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState_takeEvent(me, id);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_38:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "24");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.sendaction_38");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.WaitForMotion");
                    me->state_20_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "24");
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
static void WaitForMotion_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.WaitForMotion");
}

static void sendaction_38_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.sendaction_38");
}

static void KeyHandling_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling");
    switch (me->KeyHandling_subState) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton:
        {
            WaitForButton_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_23:
        {
            sendaction_23_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey:
        {
            WaitForKey_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_25:
        {
            sendaction_25_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey:
        {
            CheckKey_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33:
        {
            sendaction_33_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync:
        {
            WaitForSync_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode:
        {
            SwitchToIdleMode_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_40:
        {
            sendaction_40_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState:
        {
            GoToIdleModeHelperState_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void KeyHandling_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling");
    me->state_20_subState = Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling;
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.0");
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForButton");
    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton;
    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton;
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.0");
}

#ifdef _OMINSTRUMENT
static void WaitForSync_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForSync");
}

static void WaitForKey_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForKey");
}

static void WaitForButton_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForButton");
}

static void SwitchToIdleMode_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.SwitchToIdleMode");
}

static void sendaction_40_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_40");
}

static void sendaction_33_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_33");
}

static void sendaction_25_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_25");
}

static void sendaction_23_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_23");
}

static void GoToIdleModeHelperState_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.GoToIdleModeHelperState");
}

static void CheckKey_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.CheckKey");
}

static void state_19_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19");
    switch (me->state_19_subState) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_InitialSensorsRead:
        {
            InitialSensorsRead_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_InitialWrite:
        {
            InitialWrite_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2:
        {
            sendaction_2_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4:
        {
            sendaction_4_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping:
        {
            Sleeping_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6:
        {
            sendaction_6_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_7:
        {
            sendaction_7_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_CheckSensors:
        {
            CheckSensors_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_9:
        {
            sendaction_9_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_CheckData:
        {
            CheckData_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData:
        {
            WriteSensorsData_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitIntrusionDelay:
        {
            WaitIntrusionDelay_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode:
        {
            WaitForAcquisitionMode_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_41:
        {
            sendaction_41_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_42:
        {
            sendaction_42_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_53:
        {
            sendaction_53_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_SystemFailure:
        {
            SystemFailure_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void state_19_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "25");
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitForAcquisitionMode");
    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode;
    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode;
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "25");
}

static RiCTakeEventStatus state_19_dispatchEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->state_19_active) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_InitialSensorsRead:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "0");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.InitialSensorsRead");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_2");
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2;
                    {
                        /*#[ state ROOT.AcquisitionMode.state_19.sendaction_2.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqReadSensors());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "0");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_InitialWrite:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "2");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.InitialWrite");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_4");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4;
                    {
                        /*#[ state ROOT.AcquisitionMode.state_19.sendaction_4.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqTurnOffSensorsPower());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "2");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2:
        {
            if(id == evSensorsReaded_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "1");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_2");
                    {
                        /*#[ transition 1 */
                        
                        writeSensors(me);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.InitialWrite");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_InitialWrite;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_InitialWrite;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "1");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4:
        {
            if(id == Null_id)
                {
                    /*## transition 4 */
                    if(!(me->flagPSensor))
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "3");
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "4");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_4");
                            {
                                /*#[ transition 4 */
                                
                                goToSleep(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.Sleeping");
                            me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping;
                            me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping;
                            RiCTask_schedTm(me->ric_reactive.myTask, me->t_SensorsPoll, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_Sleeping_id, &(me->ric_reactive), "ROOT.AcquisitionMode.state_19.Sleeping");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "4");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "3");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 17 */
                            if(me->flagPSensor)
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "3");
                                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "17");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_4");
                                    {
                                        /*#[ transition 17 */
                                        
                                        resetPSensorFlag(me);
                                        RiCGEN(me, evSynced());
                                        /*#]*/
                                    }
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitIntrusionDelay");
                                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitIntrusionDelay;
                                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitIntrusionDelay;
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "17");
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "3");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping:
        {
            if(id == Timeout_id)
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_Sleeping_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "5");
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_Sleeping_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.Sleeping");
                            {
                                /*#[ transition 5 */
                                
                                systemWakeUp(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_6");
                            me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6;
                            me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6;
                            {
                                /*#[ state ROOT.AcquisitionMode.state_19.sendaction_6.(Entry) */
                                RiCGEN_PORT(me->pSensors, reqTurnOnSensorsPower());
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "5");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6:
        {
            if(id == evSensorsPoweredUp_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "6");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_6");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_7");
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_7;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_7;
                    {
                        /*#[ state ROOT.AcquisitionMode.state_19.sendaction_7.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqCheckSensors());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "6");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_7:
        {
            if(id == evSensorsStatus_InterfacesPkg_id)
                {
                    RiCSETPARAMS(me, evSensorsStatus);
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "7");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_7");
                    {
                        /*#[ transition 7 */
                        
                        checkSensors(me, params->Failure);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.CheckSensors");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_CheckSensors;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_CheckSensors;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "7");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_CheckSensors:
        {
            if(id == Null_id)
                {
                    /*## transition 8 */
                    if(!(me->flagSensorsFailure))
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "8");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.CheckSensors");
                            {
                                /*#[ transition 8 */
                                
                                printf("Sensors OK.\n");
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_9");
                            me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_9;
                            me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_9;
                            {
                                /*#[ state ROOT.AcquisitionMode.state_19.sendaction_9.(Entry) */
                                RiCGEN_PORT(me->pSensors, reqReadSensors());
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "8");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 13 */
                            if(me->flagSensorsFailure)
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "13");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.CheckSensors");
                                    {
                                        /*#[ transition 13 */
                                        
                                        systemFailure(me);
                                        /*#]*/
                                    }
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.SystemFailure");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_SystemFailure;
                                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_SystemFailure;
                                    {
                                        /*#[ state ROOT.AcquisitionMode.state_19.SystemFailure.(Entry) */
                                        printf("System failure.\n");
                                        /*#]*/
                                    }
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "13");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_9:
        {
            if(id == evSensorsReaded_InterfacesPkg_id)
                {
                    /*## transition 10 */
                    if(!(me->flagPSensor))
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "9");
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "10");
                            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_9");
                            {
                                /*#[ transition 10 */
                                
                                checkSensorsData(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.CheckData");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_CheckData;
                            me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_CheckData;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "10");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "9");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 16 */
                            if(me->flagPSensor)
                                {
                                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "9");
                                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "16");
                                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_9");
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WriteSensorsData");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData;
                                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData;
                                    {
                                        /*#[ state ROOT.AcquisitionMode.state_19.WriteSensorsData.(Entry) */
                                        writeSensors(me);
                                        printf("Writing sensors data ...\n");
                                        /*#]*/
                                    }
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "16");
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "9");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_CheckData:
        {
            if(id == Null_id)
                {
                    /*## transition 11 */
                    if(me->flagWriteSensors)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "11");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.CheckData");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WriteSensorsData");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData;
                            me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData;
                            {
                                /*#[ state ROOT.AcquisitionMode.state_19.WriteSensorsData.(Entry) */
                                writeSensors(me);
                                printf("Writing sensors data ...\n");
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "11");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 15 */
                            if(!me->flagWriteSensors)
                                {
                                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "15");
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.CheckData");
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_4");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4;
                                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4;
                                    {
                                        /*#[ state ROOT.AcquisitionMode.state_19.sendaction_4.(Entry) */
                                        RiCGEN_PORT(me->pSensors, reqTurnOffSensorsPower());
                                        /*#]*/
                                    }
                                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "15");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WriteSensorsData:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "12");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WriteSensorsData");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_4");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4;
                    {
                        /*#[ state ROOT.AcquisitionMode.state_19.sendaction_4.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqTurnOffSensorsPower());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "12");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitIntrusionDelay:
        {
            if(id == evIntTimerExpired_Uc2DataLoggingAndIntrusionDetectionPkg_FunctionalAnalysisPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "18");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitIntrusionDelay");
                    {
                        /*#[ transition 18 */
                        
                        writeIntrusion(me);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.Sleeping");
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_SensorsPoll, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_Sleeping_id, &(me->ric_reactive), "ROOT.AcquisitionMode.state_19.Sleeping");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "18");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode:
        {
            if(id == evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "26");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitForAcquisitionMode");
                    {
                        /*#[ transition 26 */
                        
                        changeMode(me, ACQUISITION);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_41");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_41;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_41;
                    {
                        /*#[ state ROOT.AcquisitionMode.state_19.sendaction_41.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqAcquisitionModeActive());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "26");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_41:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "27");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_41");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.InitialSensorsRead");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_InitialSensorsRead;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_InitialSensorsRead;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "27");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_42:
        {
            res = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_42_takeEvent(me, id);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_53:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "29");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_53");
                    {
                        /*#[ transition 29 */
                        changeMode(me, IDLE);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_42");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_42;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_42;
                    {
                        /*#[ state ROOT.AcquisitionMode.state_19.sendaction_42.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqIdleModeActive());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "29");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_SystemFailure:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "14");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.SystemFailure");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_53");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_53;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_53;
                    {
                        /*#[ state ROOT.AcquisitionMode.state_19.sendaction_53.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqTurnOffSensorsPower());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "14");
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
static void WriteSensorsData_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.WriteSensorsData");
}

static void WaitIntrusionDelay_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.WaitIntrusionDelay");
}

static void WaitForAcquisitionMode_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.WaitForAcquisitionMode");
}

static void SystemFailure_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.SystemFailure");
}

static void Sleeping_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.Sleeping");
}

static void sendaction_9_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.sendaction_9");
}

static void sendaction_7_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.sendaction_7");
}

static void sendaction_6_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.sendaction_6");
}

static void sendaction_53_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.sendaction_53");
}

static void sendaction_42_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.sendaction_42");
}

static void sendaction_41_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.sendaction_41");
}

static void sendaction_4_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.sendaction_4");
}

static void sendaction_2_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.sendaction_2");
}

static void InitialWrite_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.InitialWrite");
}

static void InitialSensorsRead_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.InitialSensorsRead");
}

static void CheckSensors_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.CheckSensors");
}

static void CheckData_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.CheckData");
}
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    free(me);
}

BasicWebAdapter * Uc_Uc2DataLoggingAndIntrusionDetection_getItsWebAdapter(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->itsWebAdapter;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_visitWebAdaptedRelations(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
}

static void Uc_Uc2DataLoggingAndIntrusionDetection_initWebAdapters(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    me->itsWebAdapter = NewObjectTypeWebAdapter("struct Uc_Uc2DataLoggingAndIntrusionDetection", me, (void (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_visitWebAdaptedRelations);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagPSensor", me, (RiCBoolean (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getFlagPSensor, (void (*)(void *, RiCBoolean)) NULL), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagWriteSensors", me, (RiCBoolean (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getFlagWriteSensors, (void (*)(void *, RiCBoolean)) Uc_Uc2DataLoggingAndIntrusionDetection_setFlagWriteSensors), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagSensorsFailure", me, (RiCBoolean (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getFlagSensorsFailure, (void (*)(void *, RiCBoolean)) NULL), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_SensorsPoll", me, (int (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getT_SensorsPoll, (void (*)(void *, int)) Uc_Uc2DataLoggingAndIntrusionDetection_setT_SensorsPoll), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_IntrusionDelay", me, (int (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getT_IntrusionDelay, (void (*)(void *, int)) Uc_Uc2DataLoggingAndIntrusionDetection_setT_IntrusionDelay), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("writesCnt", me, (int (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getWritesCnt, (void (*)(void *, int)) NULL), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("intrusionCnt", me, (int (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getIntrusionCnt, (void (*)(void *, int)) NULL), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("keyStatus", me, (RiCBoolean (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getKeyStatus, (void (*)(void *, RiCBoolean)) Uc_Uc2DataLoggingAndIntrusionDetection_setKeyStatus), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("Mode", me, (int (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getModeWebWrapper, (void (*)(void *, int)) NULL), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewCStrAttrWebAdapter("Key", me, (char* (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getKeyWebWrapper, (void (*)(void *, char*)) NULL), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewObjectTypeOperationWebAdapter("evStart", me, (void (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_evStart), me->itsWebAdapter);
}

static int Uc_Uc2DataLoggingAndIntrusionDetection_getModeWebWrapper(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return (int) Uc_Uc2DataLoggingAndIntrusionDetection_getMode(me);
}

static char* Uc_Uc2DataLoggingAndIntrusionDetection_getKeyWebWrapper(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return (char*) Uc_Uc2DataLoggingAndIntrusionDetection_getKey(me);
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecutionUc2\Animate\Uc_Uc2DataLoggingAndIntrusionDetection.c
*********************************************************************/
