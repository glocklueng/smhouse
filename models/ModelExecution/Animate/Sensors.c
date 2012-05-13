/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Sensors
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\Sensors.c
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
static RiCBoolean getFailure(const Sensors* const me);

/*## auto_generated */
static int getT_PowerDelay(const Sensors* const me);

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
static void sendaction_9_serializeStates(const Sensors* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_8_serializeStates(const Sensors* const me, ARCSState * arcsState);

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
    me->Failure = 0;
    me->t_PowerDelay = 5000;
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

void setFailure(Sensors* const me, RiCBoolean p_Failure) {
    me->Failure = p_Failure;
    NOTIFY_SET_OPERATION(me, Sensors);
}

void setT_PowerDelay(Sensors* const me, int p_t_PowerDelay) {
    me->t_PowerDelay = p_t_PowerDelay;
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

static RiCBoolean getFailure(const Sensors* const me) {
    return me->Failure;
}

static int getT_PowerDelay(const Sensors* const me) {
    return me->t_PowerDelay;
}

static void initRelations(Sensors* const me) {
    RiCDefaultReactivePort_Init(&me->pUc_Uc1ArmingLogger);
    
    RiCDefaultReactivePort_Init(&me->pUc_Uc2DataLoggingAndIntrusionDetection);
    
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pUc_Uc1ArmingLogger.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pUc_Uc2DataLoggingAndIntrusionDetection.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
}

static void initStatechart(Sensors* const me) {
    me->rootState_subState = Sensors_RiCNonState;
    me->rootState_active = Sensors_RiCNonState;
}

int Sensors_rootState_IN(const Sensors* const me) {
    return 1;
}

int Sensors_sendaction_9_IN(const Sensors* const me) {
    return me->rootState_subState == Sensors_sendaction_9;
}

int Sensors_sendaction_8_IN(const Sensors* const me) {
    return me->rootState_subState == Sensors_sendaction_8;
}

int Sensors_sendaction_11_IN(const Sensors* const me) {
    return me->rootState_subState == Sensors_sendaction_11;
}

int Sensors_ReadingSensors_IN(const Sensors* const me) {
    return me->rootState_subState == Sensors_ReadingSensors;
}

int Sensors_PowerOn_IN(const Sensors* const me) {
    return me->rootState_subState == Sensors_PowerOn;
}

int Sensors_PowerOff_IN(const Sensors* const me) {
    return me->rootState_subState == Sensors_PowerOff;
}

int Sensors_PoweringOn_IN(const Sensors* const me) {
    return me->rootState_subState == Sensors_PoweringOn;
}

int Sensors_CheckSensors_IN(const Sensors* const me) {
    return me->rootState_subState == Sensors_CheckSensors;
}

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes) {
    
    const Sensors * const me = (const Sensors *)void_me;
    ARCSA_addAttribute_c(arcsAttributes, "t_PowerDelay", ARC_int2String(me->t_PowerDelay));
    ARCSA_addAttribute_c(arcsAttributes, "Failure", ARC_RiCBoolean2String(me->Failure));
}

static void serializeRelations(const void * const void_me, ARCSRelations * arcsRelations) {
    
    const Sensors * const me = (const Sensors *)void_me;
    
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const Sensors * const me = (const Sensors *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    switch (me->rootState_subState) {
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
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me) {
    
    Sensors * const me = (Sensors *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, Sensors, "ROOT");
        NOTIFY_TRANSITION_STARTED(me, Sensors, "0");
        NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.PowerOff");
        me->rootState_subState = Sensors_PowerOff;
        me->rootState_active = Sensors_PowerOff;
        NOTIFY_TRANSITION_TERMINATED(me, Sensors, "0");
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    Sensors * const me = (Sensors *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->rootState_active) {
        case Sensors_PowerOff:
        {
            if(id == reqTurnOnSensorsPower_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Sensors, "1");
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.PowerOff");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.PoweringOn");
                    me->rootState_subState = Sensors_PoweringOn;
                    me->rootState_active = Sensors_PoweringOn;
                    {
                        /*#[ state ROOT.PoweringOn.(Entry) */
                        printf("Powering sensors ...\n");
                        /*#]*/
                    }
                    RiCTask_schedTm(me->ric_reactive.myTask, me->t_PowerDelay, Sensors_Timeout_PoweringOn_id, &(me->ric_reactive), "ROOT.PoweringOn");
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
                            NOTIFY_STATE_EXITED(me, Sensors, "ROOT.PoweringOn");
                            NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.sendaction_8");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->rootState_subState = Sensors_sendaction_8;
                            me->rootState_active = Sensors_sendaction_8;
                            {
                                /*#[ state ROOT.sendaction_8.(Entry) */
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
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.CheckSensors");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.sendaction_9");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Sensors_sendaction_9;
                    me->rootState_active = Sensors_sendaction_9;
                    {
                        /*#[ state ROOT.sendaction_9.(Entry) */
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
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.PowerOn");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.CheckSensors");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Sensors_CheckSensors;
                    me->rootState_active = Sensors_CheckSensors;
                    {
                        /*#[ state ROOT.CheckSensors.(Entry) */
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
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.PowerOn");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.PowerOff");
                    me->rootState_subState = Sensors_PowerOff;
                    me->rootState_active = Sensors_PowerOff;
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "3");
                    res = eventConsumed;
                }
                break;
                case reqReadSensors_InterfacesPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Sensors, "8");
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.PowerOn");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.ReadingSensors");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Sensors_ReadingSensors;
                    me->rootState_active = Sensors_ReadingSensors;
                    {
                        /*#[ state ROOT.ReadingSensors.(Entry) */
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
                    NOTIFY_NULL_TRANSITION_STARTED(me, Sensors, "6");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.sendaction_8");
                    {
                        /*#[ transition 6 */
                        printf("Sensors powered on.\n");
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.PowerOn");
                    me->rootState_subState = Sensors_PowerOn;
                    me->rootState_active = Sensors_PowerOn;
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "6");
                    res = eventConsumed;
                }
        }
        break;
        case Sensors_sendaction_9:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Sensors, "7");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.sendaction_9");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.PowerOn");
                    me->rootState_subState = Sensors_PowerOn;
                    me->rootState_active = Sensors_PowerOn;
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "7");
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
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.ReadingSensors");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.sendaction_11");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Sensors_sendaction_11;
                    me->rootState_active = Sensors_sendaction_11;
                    {
                        /*#[ state ROOT.sendaction_11.(Entry) */
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
                    NOTIFY_STATE_EXITED(me, Sensors, "ROOT.sendaction_11");
                    NOTIFY_STATE_ENTERED(me, Sensors, "ROOT.PowerOn");
                    me->rootState_subState = Sensors_PowerOn;
                    me->rootState_active = Sensors_PowerOn;
                    NOTIFY_TRANSITION_TERMINATED(me, Sensors, "10");
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
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_9");
}

static void sendaction_8_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_8");
}

static void sendaction_11_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_11");
}

static void ReadingSensors_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.ReadingSensors");
}

static void PowerOn_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.PowerOn");
}

static void PowerOff_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.PowerOff");
}

static void PoweringOn_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.PoweringOn");
}

static void CheckSensors_serializeStates(const Sensors* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.CheckSensors");
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
    ObjectTypeWebAdapter_AddSubObject(NewRiCBooleanAttrWebAdapter("Failure", me, (RiCBoolean (*)(void *)) getFailure, (void (*)(void *, RiCBoolean)) setFailure), me->itsWebAdapter);
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecution\Animate\Sensors.c
*********************************************************************/
