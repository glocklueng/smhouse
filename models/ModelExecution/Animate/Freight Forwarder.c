/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Freight Forwarder
//!	Generated Date	: Sat, 5, May 2012  
	File Path	: ModelExecution\Animate\Freight Forwarder.c
*********************************************************************/

/*## auto_generated */
#include "Freight Forwarder.h"
/*#[ ignore */
#define ActorPkg_Freight Forwarder_Freight Forwarder_SERIALIZE OM_NO_OP
/*#]*/

/*## package ActorPkg */

/*## actor Freight Forwarder */
/*## auto_generated */
static void initRelations(Freight Forwarder* const me);

/*## auto_generated */
static void initStatechart(Freight Forwarder* const me);

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
static void WaitForUserCommands_serializeStates(const Freight Forwarder* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_2_serializeStates(const Freight Forwarder* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_1_serializeStates(const Freight Forwarder* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Freight Forwarder* const me);

static const ARCSerCVtbl ActorPkg_Freight Forwarder_instrumentVtbl = {
    NULL,
    serializeRelations
};

static void Freight Forwarder_initWebAdapters(Freight Forwarder* const me);

static void TurnOnDeviceWebWrapper(Freight Forwarder* const me);

static void ApplyElectronicKeyWebWrapper(Freight Forwarder* const me);
/*#]*/

#ifdef _OMINSTRUMENT
OM_INSTRUMENT_OBJECT_TYPE(Freight Forwarder, ActorPkg, ActorPkg, FALSE, &ActorPkg_Freight Forwarder_instrumentVtbl)
#endif /* _OMINSTRUMENT */

void Freight Forwarder_Init(Freight Forwarder* const me, RiCTask * p_task) {
    /* Virtual tables Initialization */
    static const RiCReactive_Vtbl Freight Forwarder_reactiveVtbl = {
        rootState_dispatchEvent,
        rootState_entDef,
        ROOT_STATE_SERIALIZE_STATES(rootState_serializeStates),
        (RiCObjectDestroyMethod) Freight Forwarder_Destroy,
        NULL,
        NULL,
        NULL,
        (RiCObjectCleanupMethod) Freight Forwarder_Cleanup,
        (RiCObjectFreeMethod) FreeInstance
    };
    RiCReactive_init(&(me->ric_reactive), (void*)me, p_task, &Freight Forwarder_reactiveVtbl);
    NOTIFY_REACTIVE_CONSTRUCTOR(me, &me, NULL, Freight Forwarder, Freight Forwarder_Init, Freight Forwarder_Init(), 0, ActorPkg_Freight Forwarder_Freight Forwarder_SERIALIZE);
    RiCReactive_setActive(&(me->ric_reactive), RiCFALSE);
    initRelations(me);
    initStatechart(me);
    Freight Forwarder_initWebAdapters(me);
    NOTIFY_END_CONSTRUCTOR(me);
}

void Freight Forwarder_Cleanup(Freight Forwarder* const me) {
    NOTIFY_DESTRUCTOR(me, &me, Freight Forwarder, ~Freight Forwarder);
    BasicWebAdapter_Destroy(me->itsWebAdapter);
    RiCReactive_cleanup(&(me->ric_reactive));
}

Freight Forwarder * Freight Forwarder_Create(RiCTask * p_task) {
    Freight Forwarder* me = (Freight Forwarder *) malloc(sizeof(Freight Forwarder));
    if(me!=NULL)
        {
            Freight Forwarder_Init(me, p_task);
        }
    DYNAMICALLY_ALLOCATED(me);
    return me;
}

void Freight Forwarder_Destroy(Freight Forwarder* const me) {
    if(me!=NULL)
        {
            Freight Forwarder_Cleanup(me);
        }
    free(me);
}

RiCBoolean Freight Forwarder_startBehavior(Freight Forwarder* const me) {
    RiCBoolean done = RiCFALSE;
    done = RiCReactive_startBehavior(&(me->ric_reactive));
    return done;
}

static void initRelations(Freight Forwarder* const me) {
    RiCDefaultReactivePort_Init(&me->pUc_Uc1ArmingLogger);
    
}

static void initStatechart(Freight Forwarder* const me) {
    me->rootState_subState = Freight Forwarder_RiCNonState;
    me->rootState_active = Freight Forwarder_RiCNonState;
}

int Freight Forwarder_rootState_IN(const Freight Forwarder* const me) {
    return 1;
}

int Freight Forwarder_WaitForUserCommands_IN(const Freight Forwarder* const me) {
    return me->rootState_subState == Freight Forwarder_WaitForUserCommands;
}

int Freight Forwarder_sendaction_2_IN(const Freight Forwarder* const me) {
    return me->rootState_subState == Freight Forwarder_sendaction_2;
}

int Freight Forwarder_sendaction_1_IN(const Freight Forwarder* const me) {
    return me->rootState_subState == Freight Forwarder_sendaction_1;
}

#ifdef _OMINSTRUMENT
static void serializeRelations(const void * const void_me, ARCSRelations * arcsRelations) {
    
    const Freight Forwarder * const me = (const Freight Forwarder *)void_me;
    
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const Freight Forwarder * const me = (const Freight Forwarder *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    switch (me->rootState_subState) {
        case Freight Forwarder_WaitForUserCommands:
        {
            WaitForUserCommands_serializeStates(me, arcsState);
        }
        break;
        case Freight Forwarder_sendaction_1:
        {
            sendaction_1_serializeStates(me, arcsState);
        }
        break;
        case Freight Forwarder_sendaction_2:
        {
            sendaction_2_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me) {
    
    Freight Forwarder * const me = (Freight Forwarder *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, Freight Forwarder, "ROOT");
        NOTIFY_TRANSITION_STARTED(me, Freight Forwarder, "0");
        NOTIFY_STATE_ENTERED(me, Freight Forwarder, "ROOT.WaitForUserCommands");
        me->rootState_subState = Freight Forwarder_WaitForUserCommands;
        me->rootState_active = Freight Forwarder_WaitForUserCommands;
        NOTIFY_TRANSITION_TERMINATED(me, Freight Forwarder, "0");
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    Freight Forwarder * const me = (Freight Forwarder *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->rootState_active) {
        case Freight Forwarder_WaitForUserCommands:
        {
            switch (id) {
                case ApplyElectronicKey_ActorPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Freight Forwarder, "3");
                    NOTIFY_STATE_EXITED(me, Freight Forwarder, "ROOT.WaitForUserCommands");
                    NOTIFY_STATE_ENTERED(me, Freight Forwarder, "ROOT.sendaction_2");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Freight Forwarder_sendaction_2;
                    me->rootState_active = Freight Forwarder_sendaction_2;
                    {
                        /*#[ state ROOT.sendaction_2.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc1ArmingLogger, reqReadKey());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Freight Forwarder, "3");
                    res = eventConsumed;
                }
                break;
                case TurnOnDevice_ActorPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Freight Forwarder, "1");
                    NOTIFY_STATE_EXITED(me, Freight Forwarder, "ROOT.WaitForUserCommands");
                    NOTIFY_STATE_ENTERED(me, Freight Forwarder, "ROOT.sendaction_1");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Freight Forwarder_sendaction_1;
                    me->rootState_active = Freight Forwarder_sendaction_1;
                    {
                        /*#[ state ROOT.sendaction_1.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc1ArmingLogger, reqPressWakeUpButton());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Freight Forwarder, "1");
                    res = eventConsumed;
                }
                break;
                default:
                    break;
            }
        }
        break;
        case Freight Forwarder_sendaction_1:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Freight Forwarder, "2");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Freight Forwarder, "ROOT.sendaction_1");
                    NOTIFY_STATE_ENTERED(me, Freight Forwarder, "ROOT.WaitForUserCommands");
                    me->rootState_subState = Freight Forwarder_WaitForUserCommands;
                    me->rootState_active = Freight Forwarder_WaitForUserCommands;
                    NOTIFY_TRANSITION_TERMINATED(me, Freight Forwarder, "2");
                    res = eventConsumed;
                }
        }
        break;
        case Freight Forwarder_sendaction_2:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Freight Forwarder, "4");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Freight Forwarder, "ROOT.sendaction_2");
                    NOTIFY_STATE_ENTERED(me, Freight Forwarder, "ROOT.WaitForUserCommands");
                    me->rootState_subState = Freight Forwarder_WaitForUserCommands;
                    me->rootState_active = Freight Forwarder_WaitForUserCommands;
                    NOTIFY_TRANSITION_TERMINATED(me, Freight Forwarder, "4");
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
static void WaitForUserCommands_serializeStates(const Freight Forwarder* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.WaitForUserCommands");
}

static void sendaction_2_serializeStates(const Freight Forwarder* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_2");
}

static void sendaction_1_serializeStates(const Freight Forwarder* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_1");
}
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Freight Forwarder* const me) {
    free(me);
}

BasicWebAdapter * Freight Forwarder_getItsWebAdapter(const Freight Forwarder* const me) {
    return me->itsWebAdapter;
}

void Freight Forwarder_visitWebAdaptedRelations(const Freight Forwarder* const me) {
}

static void Freight Forwarder_initWebAdapters(Freight Forwarder* const me) {
    me->itsWebAdapter = NewObjectTypeWebAdapter("struct Freight Forwarder", me, (void (*)(void *)) Freight Forwarder_visitWebAdaptedRelations);
    ObjectTypeWebAdapter_AddSubObject(NewEventReceptionWebAdapter("TurnOnDevice", me, (void (*)(void *)) TurnOnDeviceWebWrapper), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewEventReceptionWebAdapter("ApplyElectronicKey", me, (void (*)(void *)) ApplyElectronicKeyWebWrapper), me->itsWebAdapter);
}

static void TurnOnDeviceWebWrapper(Freight Forwarder* const me) {
    RiCGEN(me, TurnOnDevice( ));
}

static void ApplyElectronicKeyWebWrapper(Freight Forwarder* const me) {
    RiCGEN(me, ApplyElectronicKey( ));
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecution\Animate\Freight Forwarder.c
*********************************************************************/
