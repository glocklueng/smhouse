/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc2 
	Configuration 	: Animate
	Model Element	: Driver
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc2\Animate\Driver.c
*********************************************************************/

/*## auto_generated */
#include "Driver.h"
/*#[ ignore */
#define ActorPkg_Driver_Driver_SERIALIZE OM_NO_OP
/*#]*/

/*## package ActorPkg */

/*## actor Driver */
/*## auto_generated */
static void initRelations(Driver* const me);

/*## auto_generated */
static void initStatechart(Driver* const me);

#ifdef _OMINSTRUMENT
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
static void WaitForUserCommands_serializeStates(const Driver* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_4_serializeStates(const Driver* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_3_serializeStates(const Driver* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_2_serializeStates(const Driver* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_1_serializeStates(const Driver* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Driver* const me);

static const ARCSerCVtbl ActorPkg_Driver_instrumentVtbl = {
    NULL,
    serializeRelations
};

static void Driver_initWebAdapters(Driver* const me);

static void TurnOnDeviceWebWrapper(Driver* const me);

static void ApplyElectronicKeyWebWrapper(Driver* const me);
/*#]*/

#ifdef _OMINSTRUMENT
OM_INSTRUMENT_OBJECT_TYPE(Driver, ActorPkg, ActorPkg, FALSE, &ActorPkg_Driver_instrumentVtbl)
#endif /* _OMINSTRUMENT */

void Driver_Init(Driver* const me, RiCTask * p_task) {
    /* Virtual tables Initialization */
    static const RiCReactive_Vtbl Driver_reactiveVtbl = {
        rootState_dispatchEvent,
        rootState_entDef,
        ROOT_STATE_SERIALIZE_STATES(rootState_serializeStates),
        (RiCObjectDestroyMethod) Driver_Destroy,
        NULL,
        NULL,
        NULL,
        (RiCObjectCleanupMethod) Driver_Cleanup,
        (RiCObjectFreeMethod) FreeInstance
    };
    RiCReactive_init(&(me->ric_reactive), (void*)me, p_task, &Driver_reactiveVtbl);
    NOTIFY_REACTIVE_CONSTRUCTOR(me, &me, NULL, Driver, Driver_Init, Driver_Init(), 0, ActorPkg_Driver_Driver_SERIALIZE);
    RiCReactive_setActive(&(me->ric_reactive), RiCFALSE);
    initRelations(me);
    initStatechart(me);
    Driver_initWebAdapters(me);
    NOTIFY_END_CONSTRUCTOR(me);
}

void Driver_Cleanup(Driver* const me) {
    NOTIFY_DESTRUCTOR(me, &me, Driver, ~Driver);
    BasicWebAdapter_Destroy(me->itsWebAdapter);
    RiCReactive_cleanup(&(me->ric_reactive));
}

Driver * Driver_Create(RiCTask * p_task) {
    Driver* me = (Driver *) malloc(sizeof(Driver));
    if(me!=NULL)
        {
            Driver_Init(me, p_task);
        }
    DYNAMICALLY_ALLOCATED(me);
    return me;
}

void Driver_Destroy(Driver* const me) {
    if(me!=NULL)
        {
            Driver_Cleanup(me);
        }
    free(me);
}

RiCBoolean Driver_startBehavior(Driver* const me) {
    RiCBoolean done = RiCFALSE;
    done = RiCReactive_startBehavior(&(me->ric_reactive));
    return done;
}

static void initRelations(Driver* const me) {
    RiCDefaultReactivePort_Init(&me->pUc_Uc2DataLoggingAndIntrusionDetection);
    
    RiCDefaultReactivePort_Init(&me->pUc_Uc1ArmingLogger);
    
}

static void initStatechart(Driver* const me) {
    me->rootState_subState = Driver_RiCNonState;
    me->rootState_active = Driver_RiCNonState;
}

int Driver_rootState_IN(const Driver* const me) {
    return 1;
}

int Driver_WaitForUserCommands_IN(const Driver* const me) {
    return me->rootState_subState == Driver_WaitForUserCommands;
}

int Driver_sendaction_4_IN(const Driver* const me) {
    return me->rootState_subState == Driver_sendaction_4;
}

int Driver_sendaction_3_IN(const Driver* const me) {
    return me->rootState_subState == Driver_sendaction_3;
}

int Driver_sendaction_2_IN(const Driver* const me) {
    return me->rootState_subState == Driver_sendaction_2;
}

int Driver_sendaction_1_IN(const Driver* const me) {
    return me->rootState_subState == Driver_sendaction_1;
}

#ifdef _OMINSTRUMENT
static void serializeRelations(const void * const void_me, ARCSRelations * arcsRelations) {
    
    const Driver * const me = (const Driver *)void_me;
    
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const Driver * const me = (const Driver *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    switch (me->rootState_subState) {
        case Driver_WaitForUserCommands:
        {
            WaitForUserCommands_serializeStates(me, arcsState);
        }
        break;
        case Driver_sendaction_1:
        {
            sendaction_1_serializeStates(me, arcsState);
        }
        break;
        case Driver_sendaction_2:
        {
            sendaction_2_serializeStates(me, arcsState);
        }
        break;
        case Driver_sendaction_3:
        {
            sendaction_3_serializeStates(me, arcsState);
        }
        break;
        case Driver_sendaction_4:
        {
            sendaction_4_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me) {
    
    Driver * const me = (Driver *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, Driver, "ROOT");
        NOTIFY_TRANSITION_STARTED(me, Driver, "0");
        NOTIFY_STATE_ENTERED(me, Driver, "ROOT.WaitForUserCommands");
        me->rootState_subState = Driver_WaitForUserCommands;
        me->rootState_active = Driver_WaitForUserCommands;
        NOTIFY_TRANSITION_TERMINATED(me, Driver, "0");
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    Driver * const me = (Driver *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->rootState_active) {
        case Driver_WaitForUserCommands:
        {
            switch (id) {
                case ApplyElectronicKey_ActorPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Driver, "2");
                    NOTIFY_STATE_EXITED(me, Driver, "ROOT.WaitForUserCommands");
                    NOTIFY_STATE_ENTERED(me, Driver, "ROOT.sendaction_2");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Driver_sendaction_2;
                    me->rootState_active = Driver_sendaction_2;
                    {
                        /*#[ state ROOT.sendaction_2.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc1ArmingLogger, evKeyApplied());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Driver, "2");
                    res = eventConsumed;
                }
                break;
                case TurnOnDevice_ActorPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Driver, "1");
                    NOTIFY_STATE_EXITED(me, Driver, "ROOT.WaitForUserCommands");
                    NOTIFY_STATE_ENTERED(me, Driver, "ROOT.sendaction_1");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Driver_sendaction_1;
                    me->rootState_active = Driver_sendaction_1;
                    {
                        /*#[ state ROOT.sendaction_1.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc1ArmingLogger, evWakeUpButtonPressed());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Driver, "1");
                    res = eventConsumed;
                }
                break;
                default:
                    break;
            }
        }
        break;
        case Driver_sendaction_1:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Driver, "5");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Driver, "ROOT.sendaction_1");
                    NOTIFY_STATE_ENTERED(me, Driver, "ROOT.sendaction_4");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Driver_sendaction_4;
                    me->rootState_active = Driver_sendaction_4;
                    {
                        /*#[ state ROOT.sendaction_4.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc2DataLoggingAndIntrusionDetection, evWakeUpButtonPressed());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Driver, "5");
                    res = eventConsumed;
                }
        }
        break;
        case Driver_sendaction_2:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Driver, "3");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Driver, "ROOT.sendaction_2");
                    NOTIFY_STATE_ENTERED(me, Driver, "ROOT.sendaction_3");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Driver_sendaction_3;
                    me->rootState_active = Driver_sendaction_3;
                    {
                        /*#[ state ROOT.sendaction_3.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc2DataLoggingAndIntrusionDetection, evKeyApplied());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Driver, "3");
                    res = eventConsumed;
                }
        }
        break;
        case Driver_sendaction_3:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Driver, "4");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Driver, "ROOT.sendaction_3");
                    NOTIFY_STATE_ENTERED(me, Driver, "ROOT.WaitForUserCommands");
                    me->rootState_subState = Driver_WaitForUserCommands;
                    me->rootState_active = Driver_WaitForUserCommands;
                    NOTIFY_TRANSITION_TERMINATED(me, Driver, "4");
                    res = eventConsumed;
                }
        }
        break;
        case Driver_sendaction_4:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Driver, "6");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Driver, "ROOT.sendaction_4");
                    NOTIFY_STATE_ENTERED(me, Driver, "ROOT.WaitForUserCommands");
                    me->rootState_subState = Driver_WaitForUserCommands;
                    me->rootState_active = Driver_WaitForUserCommands;
                    NOTIFY_TRANSITION_TERMINATED(me, Driver, "6");
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
static void WaitForUserCommands_serializeStates(const Driver* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.WaitForUserCommands");
}

static void sendaction_4_serializeStates(const Driver* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_4");
}

static void sendaction_3_serializeStates(const Driver* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_3");
}

static void sendaction_2_serializeStates(const Driver* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_2");
}

static void sendaction_1_serializeStates(const Driver* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_1");
}
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Driver* const me) {
    free(me);
}

BasicWebAdapter * Driver_getItsWebAdapter(const Driver* const me) {
    return me->itsWebAdapter;
}

void Driver_visitWebAdaptedRelations(const Driver* const me) {
}

static void Driver_initWebAdapters(Driver* const me) {
    me->itsWebAdapter = NewObjectTypeWebAdapter("struct Driver", me, (void (*)(void *)) Driver_visitWebAdaptedRelations);
    ObjectTypeWebAdapter_AddSubObject(NewEventReceptionWebAdapter("TurnOnDevice", me, (void (*)(void *)) TurnOnDeviceWebWrapper), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewEventReceptionWebAdapter("ApplyElectronicKey", me, (void (*)(void *)) ApplyElectronicKeyWebWrapper), me->itsWebAdapter);
}

static void TurnOnDeviceWebWrapper(Driver* const me) {
    RiCGEN(me, TurnOnDevice( ));
}

static void ApplyElectronicKeyWebWrapper(Driver* const me) {
    RiCGEN(me, ApplyElectronicKey( ));
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecutionUc2\Animate\Driver.c
*********************************************************************/
