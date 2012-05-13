/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: Uc_Uc2DataLoggingAndIntrusionDetection
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecutionUc1\Animate\Uc_Uc2DataLoggingAndIntrusionDetection.c
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

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_startIntrusionTimer_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_validateKey_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_checkSensors_SERIALIZE ARCSA_addAttribute_c(arcsmethod, "Status", ARC_RiCBoolean2String(Status));

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_writeIntrusion_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_setSync_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_resetSync_SERIALIZE OM_NO_OP

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

/*## operation setPSensorFlag() */
static void setPSensorFlag(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation resetPSensorFlag() */
static void resetPSensorFlag(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation validateKey() */
static void validateKey(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation checkSensors(RiCBoolean) */
static void checkSensors(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean Status);

/*## operation writeIntrusion() */
static void writeIntrusion(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation setSync() */
static void setSync(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## operation resetSync() */
static void resetSync(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

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
static void AcquisitionMode_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void AcquisitionMode_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

/*## statechart_method */
static RiCTakeEventStatus AcquisitionMode_dispatchEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id);

#ifdef _OMINSTRUMENT
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
static void terminationstate_37_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_38_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void KeyHandling_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void KeyHandling_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WaitForKey_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void WaitForButton_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void WaitFlag_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void SwitchToIdleMode_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

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
static void WaitForSync_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void WaitForAcquisitionMode_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void terminationstate_13_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void Sleeping_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void SensorsFailure_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_9_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_7_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_6_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_4_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_2_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

/*## statechart_method */
static void MotionHandling_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState);

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

static void Uc_Uc2DataLoggingAndIntrusionDetection_setModeWebWrapper(Uc_Uc2DataLoggingAndIntrusionDetection* const me, int value);
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
    me->flagFault = 0;
    me->t_SensorsPollTime = 5000;
    me->t_IntrusionDelay = 10000;
    me->keyStatus = 0;
    me->Mode = IDLE;
    me->flagSync = 0;
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
    /*#[ operation writeSensors() */
    /*#]*/
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
void Uc_Uc2DataLoggingAndIntrusionDetection_systemFailure(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, Uc_Uc2DataLoggingAndIntrusionDetection_systemFailure, Uc_Uc2DataLoggingAndIntrusionDetection_systemFailure(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_systemFailure_SERIALIZE);
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

/*## operation startIntrusionTimer() */
void Uc_Uc2DataLoggingAndIntrusionDetection_startIntrusionTimer(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, Uc_Uc2DataLoggingAndIntrusionDetection_startIntrusionTimer, Uc_Uc2DataLoggingAndIntrusionDetection_startIntrusionTimer(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_startIntrusionTimer_SERIALIZE);
    /*#[ operation startIntrusionTimer() */
    /*#]*/
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
    /*#[ operation checkSensors(RiCBoolean) */
    /*#]*/
}

/*## operation writeIntrusion() */
static void writeIntrusion(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, writeIntrusion, writeIntrusion(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_writeIntrusion_SERIALIZE);
    /*#[ operation writeIntrusion() */
    /*#]*/
}

/*## operation setSync() */
static void setSync(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, setSync, setSync(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_setSync_SERIALIZE);
    {
        /*#[ operation setSync() */
        me->flagSync = 1;
        /*#]*/
    }
}

/*## operation resetSync() */
static void resetSync(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Uc_Uc2DataLoggingAndIntrusionDetection, resetSync, resetSync(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc_Uc2DataLoggingAndIntrusionDetection_resetSync_SERIALIZE);
    {
        /*#[ operation resetSync() */
        me->flagSync = 0;
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

void Uc_Uc2DataLoggingAndIntrusionDetection_setFlagPSensor(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_flagPSensor) {
    me->flagPSensor = p_flagPSensor;
    NOTIFY_SET_OPERATION(me, Uc_Uc2DataLoggingAndIntrusionDetection);
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

void Uc_Uc2DataLoggingAndIntrusionDetection_setFlagSensorsFailure(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_flagSensorsFailure) {
    me->flagSensorsFailure = p_flagSensorsFailure;
    NOTIFY_SET_OPERATION(me, Uc_Uc2DataLoggingAndIntrusionDetection);
}

RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getFlagFault(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->flagFault;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_setFlagFault(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_flagFault) {
    me->flagFault = p_flagFault;
    NOTIFY_SET_OPERATION(me, Uc_Uc2DataLoggingAndIntrusionDetection);
}

int Uc_Uc2DataLoggingAndIntrusionDetection_getT_SensorsPollTime(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->t_SensorsPollTime;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_setT_SensorsPollTime(Uc_Uc2DataLoggingAndIntrusionDetection* const me, int p_t_SensorsPollTime) {
    me->t_SensorsPollTime = p_t_SensorsPollTime;
    NOTIFY_SET_OPERATION(me, Uc_Uc2DataLoggingAndIntrusionDetection);
}

int Uc_Uc2DataLoggingAndIntrusionDetection_getT_IntrusionDelay(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->t_IntrusionDelay;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_setT_IntrusionDelay(Uc_Uc2DataLoggingAndIntrusionDetection* const me, int p_t_IntrusionDelay) {
    me->t_IntrusionDelay = p_t_IntrusionDelay;
    NOTIFY_SET_OPERATION(me, Uc_Uc2DataLoggingAndIntrusionDetection);
}

RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_getKeyStatus(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->keyStatus;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_setKeyStatus(Uc_Uc2DataLoggingAndIntrusionDetection* const me, RiCBoolean p_keyStatus) {
    me->keyStatus = p_keyStatus;
    NOTIFY_SET_OPERATION(me, Uc_Uc2DataLoggingAndIntrusionDetection);
}

Uc_Uc2DataLoggingAndIntrusionDetection__Mode Uc_Uc2DataLoggingAndIntrusionDetection_getMode(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->Mode;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_setMode(Uc_Uc2DataLoggingAndIntrusionDetection* const me, Uc_Uc2DataLoggingAndIntrusionDetection__Mode p_Mode) {
    me->Mode = p_Mode;
    NOTIFY_SET_OPERATION(me, Uc_Uc2DataLoggingAndIntrusionDetection);
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
    return RiCTRUE;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->rootState_subState == Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode;
}

RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_isCompleted(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    if(IS_COMPLETED(me, Uc_Uc2DataLoggingAndIntrusionDetection_state_19) == RiCFALSE)
        {
            return RiCFALSE;
        }
    if(IS_COMPLETED(me, Uc_Uc2DataLoggingAndIntrusionDetection_state_20) == RiCFALSE)
        {
            return RiCFALSE;
        }
    return RiCTRUE;
}

void Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_exit(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    Uc_Uc2DataLoggingAndIntrusionDetection_state_19_exit(me);
    Uc_Uc2DataLoggingAndIntrusionDetection_state_20_exit(me);
    
    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode");
}

int Uc_Uc2DataLoggingAndIntrusionDetection_state_20_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode_IN(me);
}

RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_state_20_isCompleted(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return ( IS_IN(me, Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_37) );
}

void Uc_Uc2DataLoggingAndIntrusionDetection_state_20_exit(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
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
        case Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_37:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.terminationstate_37");
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
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_20_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_37_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_20_subState == Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_37;
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
            RiCReactive_popNullConfig(&(me->ric_reactive));
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
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitFlag");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.SwitchToIdleMode");
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
    RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_KeyHandling_id, &(me->ric_reactive));
    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling");
}

RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == Timeout_id)
        {
            if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_KeyHandling_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "25");
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
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "25");
                    res = eventConsumed;
                }
        }
    
    return res;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitForKey;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag;
}

RiCTakeEventStatus Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag_takeEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == Null_id)
        {
            /*## transition ROOT.AcquisitionMode.state_20.KeyHandling.10 */
            if(me->flagPSensor)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.9");
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.10");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitFlag");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitFlag");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.10");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.9");
                    res = eventConsumed;
                }
            else
                {
                    /*## transition ROOT.AcquisitionMode.state_20.KeyHandling.11 */
                    if(!(me->flagPSensor))
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.9");
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.11");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitFlag");
                            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.SwitchToIdleMode");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode;
                            me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.11");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.9");
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

int Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->KeyHandling_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_33;
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
            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.13");
            Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_exit(me);
            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.terminationstate_37");
            me->state_20_subState = Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_37;
            me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_37;
            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.13");
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

RiCBoolean Uc_Uc2DataLoggingAndIntrusionDetection_state_19_isCompleted(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return ( IS_IN(me, Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13) );
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
        case Uc_Uc2DataLoggingAndIntrusionDetection_SensorsFailure:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.SensorsFailure");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.terminationstate_13");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitForSync");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_MotionHandling:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_MotionHandling_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.MotionHandling");
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode:
        {
            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitForAcquisitionMode");
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

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_SensorsFailure_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_SensorsFailure;
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

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_4;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_2;
}

int Uc_Uc2DataLoggingAndIntrusionDetection_MotionHandling_IN(const Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return me->state_19_subState == Uc_Uc2DataLoggingAndIntrusionDetection_MotionHandling;
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
    ARCSA_addAttribute_c(arcsAttributes, "flagFault", ARC_RiCBoolean2String(me->flagFault));
    ARCSA_addAttribute_c(arcsAttributes, "t_SensorsPollTime", ARC_int2String(me->t_SensorsPollTime));
    ARCSA_addAttribute_c(arcsAttributes, "t_IntrusionDelay", ARC_int2String(me->t_IntrusionDelay));
    ARCSA_addAttribute_c(arcsAttributes, "keyStatus", ARC_RiCBoolean2String(me->keyStatus));
    ARCSA_addAttribute_c(arcsAttributes, "Mode", ARC_int2String((int)me->Mode));
    ARCSA_addAttribute_c(arcsAttributes, "flagSync", ARC_RiCBoolean2String(me->flagSync));
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const Uc_Uc2DataLoggingAndIntrusionDetection * const me = (const Uc_Uc2DataLoggingAndIntrusionDetection *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    if(me->rootState_subState == Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode)
        {
            AcquisitionMode_serializeStates(me, arcsState);
        }
}
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me) {
    
    Uc_Uc2DataLoggingAndIntrusionDetection * const me = (Uc_Uc2DataLoggingAndIntrusionDetection *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT");
        AcquisitionMode_entDef(me);
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
static void AcquisitionMode_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode");
    state_19_serializeStates(me, arcsState);
    state_20_serializeStates(me, arcsState);
}
#endif /* _OMINSTRUMENT */

static void AcquisitionMode_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode");
    me->rootState_subState = Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode;
    me->rootState_active = Uc_Uc2DataLoggingAndIntrusionDetection_AcquisitionMode;
    state_19_entDef(me);
    state_20_entDef(me);
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
    
    return res;
}

#ifdef _OMINSTRUMENT
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
        case Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_37:
        {
            terminationstate_37_serializeStates(me, arcsState);
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
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "22");
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.WaitForMotion");
    me->state_20_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion;
    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion;
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "22");
}

static RiCTakeEventStatus state_20_dispatchEvent(Uc_Uc2DataLoggingAndIntrusionDetection* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->state_20_active) {
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion:
        {
            if(id == evMotionDetected_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "23");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.WaitForMotion");
                    KeyHandling_entDef(me);
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "23");
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
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
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
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.2");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
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
                        
                        validateKey(me);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.CheckKey");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_CheckKey;
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
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.8");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.sendaction_33");
                    {
                        /*#[ transition ROOT.AcquisitionMode.state_20.KeyHandling.8 */
                        me->keyStatus = 0;
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitFlag");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.8");
                    res = eventConsumed;
                }
            if(res == eventNotConsumed)
                {
                    res = Uc_Uc2DataLoggingAndIntrusionDetection_KeyHandling_takeEvent(me, id);
                }
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag:
        {
            res = Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag_takeEvent(me, id);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.12");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.SwitchToIdleMode");
                    {
                        /*#[ transition ROOT.AcquisitionMode.state_20.KeyHandling.12 */
                        changeMode(me, IDLE);
                        /*#]*/
                    }
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_GoToIdleModeHelperState;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.12");
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
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "26");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.sendaction_38");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.WaitForMotion");
                    me->state_20_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion;
                    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForMotion;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "26");
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

static void terminationstate_37_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.terminationstate_37");
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
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitFlag:
        {
            WaitFlag_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_SwitchToIdleMode:
        {
            SwitchToIdleMode_serializeStates(me, arcsState);
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
    RiCTask_schedTm(me->ric_reactive.myTask, me->t_IntrusionDelay, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_KeyHandling_id, &(me->ric_reactive), "ROOT.AcquisitionMode.state_20.KeyHandling");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.0");
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForButton");
    me->KeyHandling_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton;
    me->state_20_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForButton;
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_20.KeyHandling.0");
}

#ifdef _OMINSTRUMENT
static void WaitForKey_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForKey");
}

static void WaitForButton_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitForButton");
}

static void WaitFlag_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.WaitFlag");
}

static void SwitchToIdleMode_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_20.KeyHandling.ROOT.KeyHandling.SwitchToIdleMode");
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
        case Uc_Uc2DataLoggingAndIntrusionDetection_SensorsFailure:
        {
            SensorsFailure_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13:
        {
            terminationstate_13_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync:
        {
            WaitForSync_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_MotionHandling:
        {
            MotionHandling_serializeStates(me, arcsState);
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode:
        {
            WaitForAcquisitionMode_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void state_19_entDef(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19");
    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "27");
    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitForAcquisitionMode");
    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode;
    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode;
    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "27");
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
                            RiCTask_schedTm(me->ric_reactive.myTask, me->t_SensorsPollTime, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_Sleeping_id, &(me->ric_reactive), "ROOT.AcquisitionMode.state_19.Sleeping");
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
                                        /*#]*/
                                    }
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitForSync");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync;
                                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync;
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
            switch (id) {
                case Timeout_id:
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
                break;
                case evMotionDetected_InterfacesPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "19");
                    RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_Sleeping_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.Sleeping");
                    {
                        /*#[ transition 19 */
                        
                        systemWakeUp(me);
                        setPSensorFlag(me);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.MotionHandling");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_MotionHandling;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_MotionHandling;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_IntrusionDelay, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_MotionHandling_id, &(me->ric_reactive), "ROOT.AcquisitionMode.state_19.MotionHandling");
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "19");
                    res = eventConsumed;
                }
                break;
                default:
                    break;
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
                                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.SensorsFailure");
                                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_SensorsFailure;
                                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_SensorsFailure;
                                    {
                                        /*#[ state ROOT.AcquisitionMode.state_19.SensorsFailure.(Entry) */
                                        printf("Sensors failure.\n");
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
        case Uc_Uc2DataLoggingAndIntrusionDetection_SensorsFailure:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "14");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.SensorsFailure");
                    {
                        /*#[ transition 14 */
                        changeMode(me, IDLE);
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.terminationstate_13");
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_terminationstate_13;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "14");
                    res = eventConsumed;
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync:
        {
            if(id == Null_id)
                {
                    /*## transition 18 */
                    if(me->flagSync)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "18");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitForSync");
                            {
                                /*#[ transition 18 */
                                
                                writeIntrusion(me);
                                resetSync(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.Sleeping");
                            me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping;
                            me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_Sleeping;
                            RiCTask_schedTm(me->ric_reactive.myTask, me->t_SensorsPollTime, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_Sleeping_id, &(me->ric_reactive), "ROOT.AcquisitionMode.state_19.Sleeping");
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "18");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_MotionHandling:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_MotionHandling_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "20");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_MotionHandling_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.MotionHandling");
                            {
                                /*#[ transition 20 */
                                
                                setSync(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitForSync");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync;
                            me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_WaitForSync;
                            NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "20");
                            res = eventConsumed;
                        }
                }
                break;
                case Null_id:
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "21");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCTask_unschedTm(me->ric_reactive.myTask, Uc_Uc2DataLoggingAndIntrusionDetection_Timeout_MotionHandling_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.MotionHandling");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.sendaction_6");
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_sendaction_6;
                    {
                        /*#[ state ROOT.AcquisitionMode.state_19.sendaction_6.(Entry) */
                        RiCGEN_PORT(me->pSensors, reqTurnOnSensorsPower());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "21");
                    res = eventConsumed;
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        case Uc_Uc2DataLoggingAndIntrusionDetection_WaitForAcquisitionMode:
        {
            if(id == evStart_Uc_Uc2DataLoggingAndIntrusionDetection_Event_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "28");
                    NOTIFY_STATE_EXITED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.WaitForAcquisitionMode");
                    NOTIFY_STATE_ENTERED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "ROOT.AcquisitionMode.state_19.InitialSensorsRead");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_19_subState = Uc_Uc2DataLoggingAndIntrusionDetection_InitialSensorsRead;
                    me->state_19_active = Uc_Uc2DataLoggingAndIntrusionDetection_InitialSensorsRead;
                    NOTIFY_TRANSITION_TERMINATED(me, Uc_Uc2DataLoggingAndIntrusionDetection, "28");
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

static void WaitForSync_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.WaitForSync");
}

static void WaitForAcquisitionMode_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.WaitForAcquisitionMode");
}

static void terminationstate_13_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.terminationstate_13");
}

static void Sleeping_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.Sleeping");
}

static void SensorsFailure_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.SensorsFailure");
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

static void sendaction_4_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.sendaction_4");
}

static void sendaction_2_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.sendaction_2");
}

static void MotionHandling_serializeStates(const Uc_Uc2DataLoggingAndIntrusionDetection* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.AcquisitionMode.state_19.MotionHandling");
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
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagPSensor", me, (RiCBoolean (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getFlagPSensor, (void (*)(void *, RiCBoolean)) Uc_Uc2DataLoggingAndIntrusionDetection_setFlagPSensor), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagWriteSensors", me, (RiCBoolean (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getFlagWriteSensors, (void (*)(void *, RiCBoolean)) Uc_Uc2DataLoggingAndIntrusionDetection_setFlagWriteSensors), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagSensorsFailure", me, (RiCBoolean (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getFlagSensorsFailure, (void (*)(void *, RiCBoolean)) Uc_Uc2DataLoggingAndIntrusionDetection_setFlagSensorsFailure), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("flagFault", me, (RiCBoolean (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getFlagFault, (void (*)(void *, RiCBoolean)) Uc_Uc2DataLoggingAndIntrusionDetection_setFlagFault), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_SensorsPollTime", me, (int (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getT_SensorsPollTime, (void (*)(void *, int)) Uc_Uc2DataLoggingAndIntrusionDetection_setT_SensorsPollTime), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_IntrusionDelay", me, (int (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getT_IntrusionDelay, (void (*)(void *, int)) Uc_Uc2DataLoggingAndIntrusionDetection_setT_IntrusionDelay), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("keyStatus", me, (RiCBoolean (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getKeyStatus, (void (*)(void *, RiCBoolean)) Uc_Uc2DataLoggingAndIntrusionDetection_setKeyStatus), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("Mode", me, (int (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_getModeWebWrapper, (void (*)(void *, int)) Uc_Uc2DataLoggingAndIntrusionDetection_setModeWebWrapper), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewObjectTypeOperationWebAdapter("evStart", me, (void (*)(void *)) Uc_Uc2DataLoggingAndIntrusionDetection_evStart), me->itsWebAdapter);
}

static int Uc_Uc2DataLoggingAndIntrusionDetection_getModeWebWrapper(Uc_Uc2DataLoggingAndIntrusionDetection* const me) {
    return (int) Uc_Uc2DataLoggingAndIntrusionDetection_getMode(me);
}

static void Uc_Uc2DataLoggingAndIntrusionDetection_setModeWebWrapper(Uc_Uc2DataLoggingAndIntrusionDetection* const me, int value) {
    Uc_Uc2DataLoggingAndIntrusionDetection_setMode(me, (Uc_Uc2DataLoggingAndIntrusionDetection__Mode) value);
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\Uc_Uc2DataLoggingAndIntrusionDetection.c
*********************************************************************/
