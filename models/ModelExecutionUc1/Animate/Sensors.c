/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: Sensors
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc1\Animate\Sensors.c
*********************************************************************/

/*## auto_generated */
#include "Sensors.h"
/*## event reqTurnOnSensorsPower() */
#include "InterfacesPkg.h"
/*#[ ignore */
#define ActorPkg_Sensors_Sensors_SERIALIZE OM_NO_OP
/*#]*/

/*## package ActorPkg */

/*## actor Sensors */
/*## auto_generated */
static int getT_PowerDelay(const Sensors* const me);

/*## auto_generated */
static int getT_RetriggerDelay(const Sensors* const me);

/*## auto_generated */
static RiCBoolean getFailure(const Sensors* const me);

/*## auto_generated */
static void initRelations(Sensors* const me);

/*## auto_generated */
static void initStatechart(Sensors* const me);

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes);

static void serializeRelations(const void * const void_me, ARCSRelations * arcsRelations);

/*## statechart_method */
static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void rootState_entDef(void * const void_me);

/*## statechart_method */
static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void SensorsBehaviour_serializeStates(const Sensors* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void SensorsBehaviour_entDef(Sensors* const me);

/*## statechart_method */
static RiCTakeEventStatus SensorsBehaviour_dispatchEvent(Sensors* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void state_16_serializeStates(const Sensors* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void state_16_entDef(Sensors* const me);

/*## statechart_method */
static RiCTakeEventStatus state_16_dispatchEvent(Sensors* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WaitForAcquisitionMode_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void PrimarySensor_serializeStates(const Sensors* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void PrimarySensor_entDef(Sensors* const me);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void WaitRetriggerDelay_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_24_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_21_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void MotionMonitoring_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void state_15_serializeStates(const Sensors* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void state_15_entDef(Sensors* const me);

/*## statechart_method */
static RiCTakeEventStatus state_15_dispatchEvent(Sensors* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void sendaction_9_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_8_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_13_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_12_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_11_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void ReadingSensors_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void PowerOn_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void PowerOff_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void PoweringOn_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void CheckSensors_serializeStates(const Sensors* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Sensors* const me);

static const ARCSerCVtbl ActorPkg_Sensors_instrumentVtbl = {
    serializeAttributes,
    serializeRelations
};

static void Sensors_initWebAdapters(Sensors* const me);

static void MotionDetectedWebWrapper(Sensors* const me);
/*#]*/

#ifdef _OMINSTRUMENT
OM_INSTRUMENT_OBJECT_TYPE(Sensors, ActorPkg, ActorPkg, FALSE, &ActorPkg_Sensors_instrumentVtbl)
#endif /* _OMINSTRUMENT */

void Sensors_Init(Sensors* const me, RiCTask * p_task) {
    /* Virtual tables Initialization */
    static const RiCReactive_Vtbl Sensors_reactiveVtbl = {
        rootState_dispatchEvent,
        rootState_entDef,
        ROOT_STATE_SERIALIZE_STATES(rootState_serializeStates),
        (RiCObjectDestroyMethod) Sensors_Destroy,
        NULL,
        NULL,
        NULL,
        (RiCObjectCleanupMethod) Sensors_Cleanup,
        (RiCObjectFreeMethod) FreeInstance
    };
    me->t_PowerDelay = 1000;
    me->t_RetriggerDelay = 10000;
    me->Failure = 0;
    RiCReactive_init(&(me->ric_reactive), (void*)me, p_task, &Sensors_reactiveVtbl);
    NOTIFY_REACTIVE_CONSTRUCTOR(me, &me, NULL, Sensors, Sensors_Init, Sensors_Init(), 0, ActorPkg_Sensors_Sensors_SERIALIZE);
    RiCReactive_setActive(&(me->ric_reactive), RiCFALSE);
    initRelations(me);
    initStatechart(me);
    Sensors_initWebAdapters(me);
    NOTIFY_END_CONSTRUCTOR(me);
}

void Sensors_Cleanup(Sensors* const me) {
    NOTIFY_DESTRUCTOR(me, &me, Sensors, ~Sensors);
    BasicWebAdapter_Destroy(me->itsWebAdapter);
    RiCReactive_cleanup(&(me->ric_reactive));
}

void setT_PowerDelay(Sensors* const me, int p_t_PowerDelay) {
    me->t_PowerDelay = p_t_PowerDelay;
    NOTIFY_SET_OPERATION(me, Sensors);
}

void setFailure(Sensors* const me, RiCBoolean p_Failure) {
    me->Failure = p_Failure;
    NOTIFY_SET_OPERATION(me, Sensors);
}

Sensors * Sensors_Create(RiCTask * p_task) {
    Sensors* me = (Sensors *) malloc(sizeof(Sensors));
    if(me!=NULL)
        {
            Sensors_Init(me, p_task);
        }
    DYNAMICALLY_ALLOCATED(me);
    return me;
}

void Sensors_Destroy(Sensors* const me) {
    if(me!=NULL)
        {
            Sensors_Cleanup(me);
        }
    free(me);
}

RiCBoolean Sensors_startBehavior(Sensors* const me) {
    RiCBoolean done = RiCFALSE;
    done = RiCReactive_startBehavior(&(me->ric_reactive));
    return done;
}

static int getT_PowerDelay(const Sensors* const me) {
    return me->t_PowerDelay;
}

static int getT_RetriggerDelay(const Sensors* const me) {
    return me->t_RetriggerDelay;
}

static RiCBoolean getFailure(const Sensors* const me) {
    return me->Failure;
}

static void initRelations(Sensors* const me) {
    RiCDefaultReactivePort_Init(&me->pUc_Uc2DataLoggingAndIntrusionDetection);
    
    RiCDefaultReactivePort_Init(&me->pUc_Uc1ArmingLogger);
    
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pUc_Uc2DataLoggingAndIntrusionDetection.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pUc_Uc1ArmingLogger.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
}

static void initStatechart(Sensors* const me) {
    me->rootState_subState = Sensors_RiCNonState;
    me->rootState_active = Sensors_RiCNonState;
    me->state_16_subState = Sensors_RiCNonState;
    me->state_16_active = Sensors_RiCNonState;
    me->PrimarySensor_subState = Sensors_RiCNonState;
    me->state_15_subState = Sensors_RiCNonState;
    me->state_15_active = Sensors_RiCNonState;
}

int Sensors_rootState_IN(const Sensors* const me) {
    return 1;
}

int Sensors_SensorsBehaviour_IN(const Sensors* const me) {
    return me->rootState_subState == Sensors_SensorsBehaviour;
}

void Sensors_SensorsBehaviour_exit(Sensors* const me) {
    Sensors_state_15_exit(me);
    switch (me->state_16_subState) {
        case Sensors_WaitForAcquisitionMode:
        {
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_16.WaitForAcquisitionMode");
        }
        break;
        case Sensors_PrimarySensor:
        {
            Sensors_PrimarySensor_exit(me);
        }
        break;
        default:
            break;
    }
    me->state_16_subState = Sensors_RiCNonState;
    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_16");
    
    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour");
}

int Sensors_state_16_IN(const Sensors* const me) {
    return Sensors_SensorsBehaviour_IN(me);
}

int Sensors_WaitForAcquisitionMode_IN(const Sensors* const me) {
    return me->state_16_subState == Sensors_WaitForAcquisitionMode;
}

int Sensors_PrimarySensor_IN(const Sensors* const me) {
    return me->state_16_subState == Sensors_PrimarySensor;
}

void Sensors_PrimarySensor_exit(Sensors* const me) {
    switch (me->PrimarySensor_subState) {
        case Sensors_MotionMonitoring:
        {
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.MotionMonitoring");
        }
        break;
        case Sensors_sendaction_21:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.sendaction_21");
        }
        break;
        case Sensors_WaitRetriggerDelay:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, Sensors_Timeout_WaitRetriggerDelay_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.WaitRetriggerDelay");
        }
        break;
        case Sensors_sendaction_24:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.sendaction_24");
        }
        break;
        default:
            break;
    }
    me->PrimarySensor_subState = Sensors_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor");
}

RiCTakeEventStatus Sensors_PrimarySensor_takeEvent(Sensors* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == reqIdleModeActive_InterfacesPkg_id)
        {
            NOTIFY_TRANSITION_STARTED(me, Sensors, "20");
            Sensors_PrimarySensor_exit(me);
            NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_16.WaitForAcquisitionMode");
            me->state_16_subState = Sensors_WaitForAcquisitionMode;
            me->state_16_active = Sensors_WaitForAcquisitionMode;
            NOTIFY_TRANSITION_TERMINATED(me, Sensors, "20");
            res = eventConsumed;
        }
    
    return res;
}

int Sensors_WaitRetriggerDelay_IN(const Sensors* const me) {
    return me->PrimarySensor_subState == Sensors_WaitRetriggerDelay;
}

int Sensors_sendaction_24_IN(const Sensors* const me) {
    return me->PrimarySensor_subState == Sensors_sendaction_24;
}

int Sensors_sendaction_21_IN(const Sensors* const me) {
    return me->PrimarySensor_subState == Sensors_sendaction_21;
}

int Sensors_MotionMonitoring_IN(const Sensors* const me) {
    return me->PrimarySensor_subState == Sensors_MotionMonitoring;
}

int Sensors_state_15_IN(const Sensors* const me) {
    return Sensors_SensorsBehaviour_IN(me);
}

void Sensors_state_15_exit(Sensors* const me) {
    switch (me->state_15_subState) {
        case Sensors_PowerOff:
        {
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PowerOff");
        }
        break;
        case Sensors_PoweringOn:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, Sensors_Timeout_PoweringOn_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PoweringOn");
        }
        break;
        case Sensors_CheckSensors:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.CheckSensors");
        }
        break;
        case Sensors_PowerOn:
        {
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PowerOn");
        }
        break;
        case Sensors_sendaction_8:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_8");
        }
        break;
        case Sensors_sendaction_9:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_9");
        }
        break;
        case Sensors_ReadingSensors:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.ReadingSensors");
        }
        break;
        case Sensors_sendaction_11:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_11");
        }
        break;
        case Sensors_sendaction_12:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_12");
        }
        break;
        case Sensors_sendaction_13:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_13");
        }
        break;
        default:
            break;
    }
    me->state_15_subState = Sensors_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15");
}

int Sensors_sendaction_9_IN(const Sensors* const me) {
    return me->state_15_subState == Sensors_sendaction_9;
}

int Sensors_sendaction_8_IN(const Sensors* const me) {
    return me->state_15_subState == Sensors_sendaction_8;
}

int Sensors_sendaction_13_IN(const Sensors* const me) {
    return me->state_15_subState == Sensors_sendaction_13;
}

int Sensors_sendaction_12_IN(const Sensors* const me) {
    return me->state_15_subState == Sensors_sendaction_12;
}

int Sensors_sendaction_11_IN(const Sensors* const me) {
    return me->state_15_subState == Sensors_sendaction_11;
}

int Sensors_ReadingSensors_IN(const Sensors* const me) {
    return me->state_15_subState == Sensors_ReadingSensors;
}

int Sensors_PowerOn_IN(const Sensors* const me) {
    return me->state_15_subState == Sensors_PowerOn;
}

int Sensors_PowerOff_IN(const Sensors* const me) {
    return me->state_15_subState == Sensors_PowerOff;
}

int Sensors_PoweringOn_IN(const Sensors* const me) {
    return me->state_15_subState == Sensors_PoweringOn;
}

int Sensors_CheckSensors_IN(const Sensors* const me) {
    return me->state_15_subState == Sensors_CheckSensors;
}

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes) {
    
    const Sensors * const me = (const Sensors *)void_me;
    ARCSA_addAttribute_c(arcsAttributes, "t_PowerDelay", ARC_int2String(me->t_PowerDelay));
    ARCSA_addAttribute_c(arcsAttributes, "t_RetriggerDelay", ARC_int2String(me->t_RetriggerDelay));
    ARCSA_addAttribute_c(arcsAttributes, "Failure", ARC_RiCBoolean2String(me->Failure));
}

static void serializeRelations(const void * const void_me, ARCSRelations * arcsRelations) {
    
    const Sensors * const me = (const Sensors *)void_me;
    
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const Sensors * const me = (const Sensors *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    if(me->rootState_subState == Sensors_SensorsBehaviour)
        {
            SensorsBehaviour_serializeStates(me, arcsState);
        }
}
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me) {
    
    Sensors * const me = (Sensors *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, Sensors, "ROOT");
        SensorsBehaviour_entDef(me);
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    Sensors * const me = (Sensors *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    if(me->rootState_active == Sensors_SensorsBehaviour)
        {
            res = SensorsBehaviour_dispatchEvent(me, id);
        }
    return res;
}

#ifdef _OMINSTRUMENT
static void SensorsBehaviour_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour");
    state_15_serializeStates(me, arcsState);
    state_16_serializeStates(me, arcsState);
}
#endif /* _OMINSTRUMENT */

static void SensorsBehaviour_entDef(Sensors* const me) {
    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour");
    me->rootState_subState = Sensors_SensorsBehaviour;
    me->rootState_active = Sensors_SensorsBehaviour;
    state_15_entDef(me);
    state_16_entDef(me);
}

static RiCTakeEventStatus SensorsBehaviour_dispatchEvent(Sensors* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(state_15_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Sensors_SensorsBehaviour))
                {
                    return res;
                }
        }
    if(state_16_dispatchEvent(me, id) > 0)
        {
            res = eventConsumed;
            if(!IS_IN(me, Sensors_SensorsBehaviour))
                {
                    return res;
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
static void state_16_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_16");
    switch (me->state_16_subState) {
        case Sensors_WaitForAcquisitionMode:
        {
            WaitForAcquisitionMode_serializeStates(me, arcsState);
        }
        break;
        case Sensors_PrimarySensor:
        {
            PrimarySensor_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void state_16_entDef(Sensors* const me) {
    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_16");
    NOTIFY_TRANSITION_STARTED(me, Sensors, "13");
    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_16.WaitForAcquisitionMode");
    me->state_16_subState = Sensors_WaitForAcquisitionMode;
    me->state_16_active = Sensors_WaitForAcquisitionMode;
    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "13");
}

static RiCTakeEventStatus state_16_dispatchEvent(Sensors* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->state_16_active) {
        case Sensors_WaitForAcquisitionMode:
        {
            if(id == reqAcquisitionModeActive_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Sensors, "16");
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_16.WaitForAcquisitionMode");
                    PrimarySensor_entDef(me);
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "16");
                    res = eventConsumed;
                }
            
        }
        break;
        case Sensors_MotionMonitoring:
        {
            if(id == MotionDetected_ActorPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Sensors, "14");
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.MotionMonitoring");
                    {
                        /*#[ transition 14 */
                        
                        printf("Motion detected!\n");
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.sendaction_21");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->PrimarySensor_subState = Sensors_sendaction_21;
                    me->state_16_active = Sensors_sendaction_21;
                    {
                        /*#[ state ROOT.SensorsBehaviour.state_16.PrimarySensor.sendaction_21.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc2DataLoggingAndIntrusionDetection, evMotionDetected());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "14");
                    res = eventConsumed;
                }
            if(res == eventNotConsumed)
                {
                    res = Sensors_PrimarySensor_takeEvent(me, id);
                }
        }
        break;
        case Sensors_sendaction_21:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Sensors, "18");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.sendaction_21");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.sendaction_24");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->PrimarySensor_subState = Sensors_sendaction_24;
                    me->state_16_active = Sensors_sendaction_24;
                    {
                        /*#[ state ROOT.SensorsBehaviour.state_16.PrimarySensor.sendaction_24.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc2DataLoggingAndIntrusionDetection, evStartScanner());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "18");
                    res = eventConsumed;
                }
            if(res == eventNotConsumed)
                {
                    res = Sensors_PrimarySensor_takeEvent(me, id);
                }
        }
        break;
        case Sensors_WaitRetriggerDelay:
        {
            if(id == Timeout_id)
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Sensors_Timeout_WaitRetriggerDelay_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Sensors, "15");
                            RiCTask_unschedTm(me->ric_reactive.myTask, Sensors_Timeout_WaitRetriggerDelay_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.WaitRetriggerDelay");
                            NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.MotionMonitoring");
                            me->PrimarySensor_subState = Sensors_MotionMonitoring;
                            me->state_16_active = Sensors_MotionMonitoring;
                            NOTIFY_TRANSITION_TERMINATED(me, Sensors, "15");
                            res = eventConsumed;
                        }
                }
            if(res == eventNotConsumed)
                {
                    res = Sensors_PrimarySensor_takeEvent(me, id);
                }
        }
        break;
        case Sensors_sendaction_24:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Sensors, "17");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.sendaction_24");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.WaitRetriggerDelay");
                    me->PrimarySensor_subState = Sensors_WaitRetriggerDelay;
                    me->state_16_active = Sensors_WaitRetriggerDelay;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_RetriggerDelay, Sensors_Timeout_WaitRetriggerDelay_id, &(me->ric_reactive), "ROOT.SensorsBehaviour.state_16.PrimarySensor.WaitRetriggerDelay");
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "17");
                    res = eventConsumed;
                }
            if(res == eventNotConsumed)
                {
                    res = Sensors_PrimarySensor_takeEvent(me, id);
                }
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
static void WaitForAcquisitionMode_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_16.WaitForAcquisitionMode");
}

static void PrimarySensor_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_16.PrimarySensor");
    switch (me->PrimarySensor_subState) {
        case Sensors_MotionMonitoring:
        {
            MotionMonitoring_serializeStates(me, arcsState);
        }
        break;
        case Sensors_sendaction_21:
        {
            sendaction_21_serializeStates(me, arcsState);
        }
        break;
        case Sensors_WaitRetriggerDelay:
        {
            WaitRetriggerDelay_serializeStates(me, arcsState);
        }
        break;
        case Sensors_sendaction_24:
        {
            sendaction_24_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void PrimarySensor_entDef(Sensors* const me) {
    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor");
    me->state_16_subState = Sensors_PrimarySensor;
    NOTIFY_TRANSITION_STARTED(me, Sensors, "19");
    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_16.PrimarySensor.MotionMonitoring");
    me->PrimarySensor_subState = Sensors_MotionMonitoring;
    me->state_16_active = Sensors_MotionMonitoring;
    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "19");
}

#ifdef _OMINSTRUMENT
static void WaitRetriggerDelay_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_16.PrimarySensor.WaitRetriggerDelay");
}

static void sendaction_24_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_16.PrimarySensor.sendaction_24");
}

static void sendaction_21_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_16.PrimarySensor.sendaction_21");
}

static void MotionMonitoring_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_16.PrimarySensor.MotionMonitoring");
}

static void state_15_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_15");
    switch (me->state_15_subState) {
        case Sensors_PowerOff:
        {
            PowerOff_serializeStates(me, arcsState);
        }
        break;
        case Sensors_PoweringOn:
        {
            PoweringOn_serializeStates(me, arcsState);
        }
        break;
        case Sensors_CheckSensors:
        {
            CheckSensors_serializeStates(me, arcsState);
        }
        break;
        case Sensors_PowerOn:
        {
            PowerOn_serializeStates(me, arcsState);
        }
        break;
        case Sensors_sendaction_8:
        {
            sendaction_8_serializeStates(me, arcsState);
        }
        break;
        case Sensors_sendaction_9:
        {
            sendaction_9_serializeStates(me, arcsState);
        }
        break;
        case Sensors_ReadingSensors:
        {
            ReadingSensors_serializeStates(me, arcsState);
        }
        break;
        case Sensors_sendaction_11:
        {
            sendaction_11_serializeStates(me, arcsState);
        }
        break;
        case Sensors_sendaction_12:
        {
            sendaction_12_serializeStates(me, arcsState);
        }
        break;
        case Sensors_sendaction_13:
        {
            sendaction_13_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void state_15_entDef(Sensors* const me) {
    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15");
    NOTIFY_TRANSITION_STARTED(me, Sensors, "0");
    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PowerOff");
    me->state_15_subState = Sensors_PowerOff;
    me->state_15_active = Sensors_PowerOff;
    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "0");
}

static RiCTakeEventStatus state_15_dispatchEvent(Sensors* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->state_15_active) {
        case Sensors_PowerOff:
        {
            if(id == reqTurnOnSensorsPower_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Sensors, "1");
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PowerOff");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PoweringOn");
                    me->state_15_subState = Sensors_PoweringOn;
                    me->state_15_active = Sensors_PoweringOn;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_PowerDelay, Sensors_Timeout_PoweringOn_id, &(me->ric_reactive), "ROOT.SensorsBehaviour.state_15.PoweringOn");
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "1");
                    res = eventConsumed;
                }
            
        }
        break;
        case Sensors_PoweringOn:
        {
            if(id == Timeout_id)
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Sensors_Timeout_PoweringOn_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Sensors, "4");
                            RiCTask_unschedTm(me->ric_reactive.myTask, Sensors_Timeout_PoweringOn_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PoweringOn");
                            NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_8");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->state_15_subState = Sensors_sendaction_8;
                            me->state_15_active = Sensors_sendaction_8;
                            {
                                /*#[ state ROOT.SensorsBehaviour.state_15.sendaction_8.(Entry) */
                                RiCGEN_PORT(me->pUc_Uc1ArmingLogger, evSensorsPoweredUp());
                                /*#]*/
                            }
                            NOTIFY_TRANSITION_TERMINATED(me, Sensors, "4");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case Sensors_CheckSensors:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Sensors, "5");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.CheckSensors");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_9");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_15_subState = Sensors_sendaction_9;
                    me->state_15_active = Sensors_sendaction_9;
                    {
                        /*#[ state ROOT.SensorsBehaviour.state_15.sendaction_9.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc1ArmingLogger, evSensorsStatus(me->Failure));
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "5");
                    res = eventConsumed;
                }
            
        }
        break;
        case Sensors_PowerOn:
        {
            switch (id) {
                case reqCheckSensors_InterfacesPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Sensors, "2");
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PowerOn");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.CheckSensors");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_15_subState = Sensors_CheckSensors;
                    me->state_15_active = Sensors_CheckSensors;
                    {
                        /*#[ state ROOT.SensorsBehaviour.state_15.CheckSensors.(Entry) */
                        printf("Checking sensors status ...\n");
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "2");
                    res = eventConsumed;
                }
                break;
                case reqTurnOffSensorsPower_InterfacesPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Sensors, "3");
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PowerOn");
                    {
                        /*#[ transition 3 */
                        
                        printf("Sensors powered off.\n");
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PowerOff");
                    me->state_15_subState = Sensors_PowerOff;
                    me->state_15_active = Sensors_PowerOff;
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "3");
                    res = eventConsumed;
                }
                break;
                case reqReadSensors_InterfacesPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Sensors, "8");
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PowerOn");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.ReadingSensors");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_15_subState = Sensors_ReadingSensors;
                    me->state_15_active = Sensors_ReadingSensors;
                    {
                        /*#[ state ROOT.SensorsBehaviour.state_15.ReadingSensors.(Entry) */
                        printf("Reading sensors values ...\n");
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "8");
                    res = eventConsumed;
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        case Sensors_sendaction_8:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Sensors, "11");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_8");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_12");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_15_subState = Sensors_sendaction_12;
                    me->state_15_active = Sensors_sendaction_12;
                    {
                        /*#[ state ROOT.SensorsBehaviour.state_15.sendaction_12.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc2DataLoggingAndIntrusionDetection, evSensorsPoweredUp());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "11");
                    res = eventConsumed;
                }
            
        }
        break;
        case Sensors_sendaction_9:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Sensors, "12");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_9");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_13");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_15_subState = Sensors_sendaction_13;
                    me->state_15_active = Sensors_sendaction_13;
                    {
                        /*#[ state ROOT.SensorsBehaviour.state_15.sendaction_13.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc2DataLoggingAndIntrusionDetection, evSensorsStatus(me->Failure));
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "12");
                    res = eventConsumed;
                }
            
        }
        break;
        case Sensors_ReadingSensors:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Sensors, "9");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.ReadingSensors");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_11");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->state_15_subState = Sensors_sendaction_11;
                    me->state_15_active = Sensors_sendaction_11;
                    {
                        /*#[ state ROOT.SensorsBehaviour.state_15.sendaction_11.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc2DataLoggingAndIntrusionDetection, evSensorsReaded());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "9");
                    res = eventConsumed;
                }
            
        }
        break;
        case Sensors_sendaction_11:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Sensors, "10");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_11");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PowerOn");
                    me->state_15_subState = Sensors_PowerOn;
                    me->state_15_active = Sensors_PowerOn;
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "10");
                    res = eventConsumed;
                }
            
        }
        break;
        case Sensors_sendaction_12:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Sensors, "6");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_12");
                    {
                        /*#[ transition 6 */
                        printf("Sensors powered on.\n");
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PowerOn");
                    me->state_15_subState = Sensors_PowerOn;
                    me->state_15_active = Sensors_PowerOn;
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "6");
                    res = eventConsumed;
                }
            
        }
        break;
        case Sensors_sendaction_13:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Sensors, "7");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.SensorsBehaviour.state_15.sendaction_13");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.SensorsBehaviour.state_15.PowerOn");
                    me->state_15_subState = Sensors_PowerOn;
                    me->state_15_active = Sensors_PowerOn;
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "7");
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
static void sendaction_9_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_15.sendaction_9");
}

static void sendaction_8_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_15.sendaction_8");
}

static void sendaction_13_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_15.sendaction_13");
}

static void sendaction_12_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_15.sendaction_12");
}

static void sendaction_11_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_15.sendaction_11");
}

static void ReadingSensors_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_15.ReadingSensors");
}

static void PowerOn_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_15.PowerOn");
}

static void PowerOff_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_15.PowerOff");
}

static void PoweringOn_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_15.PoweringOn");
}

static void CheckSensors_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.SensorsBehaviour.state_15.CheckSensors");
}
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Sensors* const me) {
    free(me);
}

BasicWebAdapter * Sensors_getItsWebAdapter(const Sensors* const me) {
    return me->itsWebAdapter;
}

void Sensors_visitWebAdaptedRelations(const Sensors* const me) {
}

static void Sensors_initWebAdapters(Sensors* const me) {
    me->itsWebAdapter = NewObjectTypeWebAdapter("struct Sensors", me, (void (*)(void *)) Sensors_visitWebAdaptedRelations);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_PowerDelay", me, (int (*)(void *)) getT_PowerDelay, (void (*)(void *, int)) setT_PowerDelay), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewIntAttrWebAdapter("t_RetriggerDelay", me, (int (*)(void *)) getT_RetriggerDelay, (void (*)(void *, int)) NULL), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("Failure", me, (RiCBoolean (*)(void *)) getFailure, (void (*)(void *, RiCBoolean)) setFailure), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewEventReceptionWebAdapter("MotionDetected", me, (void (*)(void *)) MotionDetectedWebWrapper), me->itsWebAdapter);
}

static void MotionDetectedWebWrapper(Sensors* const me) {
    RiCGEN(me, MotionDetected( ));
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\Sensors.c
*********************************************************************/
