/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Admin
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\Admin.c
*********************************************************************/

/*## auto_generated */
#include "Admin.h"
/*#[ ignore */
#define ActorPkg_Admin_Admin_SERIALIZE OM_NO_OP
/*#]*/

/*## package ActorPkg */

/*## actor Admin */
/*## auto_generated */
static void initRelations(Admin* const me);

/*## auto_generated */
static void initStatechart(Admin* const me);

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
static void WaitForAdminCommands_serializeStates(const Admin* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_2_serializeStates(const Admin* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_1_serializeStates(const Admin* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Admin* const me);

static const ARCSerCVtbl ActorPkg_Admin_instrumentVtbl = {
    NULL,
    serializeRelations
};

static void Admin_initWebAdapters(Admin* const me);

static void TurnOnDeviceWebWrapper(Admin* const me);

static void ApplyElectronicKeyWebWrapper(Admin* const me);
/*#]*/

#ifdef _OMINSTRUMENT
OM_INSTRUMENT_OBJECT_TYPE(Admin, ActorPkg, ActorPkg, FALSE, &ActorPkg_Admin_instrumentVtbl)
#endif /* _OMINSTRUMENT */

void Admin_Init(Admin* const me, RiCTask * p_task) {
    /* Virtual tables Initialization */
    static const RiCReactive_Vtbl Admin_reactiveVtbl = {
        rootState_dispatchEvent,
        rootState_entDef,
        ROOT_STATE_SERIALIZE_STATES(rootState_serializeStates),
        (RiCObjectDestroyMethod) Admin_Destroy,
        NULL,
        NULL,
        NULL,
        (RiCObjectCleanupMethod) Admin_Cleanup,
        (RiCObjectFreeMethod) FreeInstance
    };
    RiCReactive_init(&(me->ric_reactive), (void*)me, p_task, &Admin_reactiveVtbl);
    NOTIFY_REACTIVE_CONSTRUCTOR(me, &me, NULL, Admin, Admin_Init, Admin_Init(), 0, ActorPkg_Admin_Admin_SERIALIZE);
    RiCReactive_setActive(&(me->ric_reactive), RiCFALSE);
    initRelations(me);
    initStatechart(me);
    Admin_initWebAdapters(me);
    NOTIFY_END_CONSTRUCTOR(me);
}

void Admin_Cleanup(Admin* const me) {
    NOTIFY_DESTRUCTOR(me, &me, Admin, ~Admin);
    BasicWebAdapter_Destroy(me->itsWebAdapter);
    RiCReactive_cleanup(&(me->ric_reactive));
}

Admin * Admin_Create(RiCTask * p_task) {
    Admin* me = (Admin *) malloc(sizeof(Admin));
    if(me!=NULL)
        {
            Admin_Init(me, p_task);
        }
    DYNAMICALLY_ALLOCATED(me);
    return me;
}

void Admin_Destroy(Admin* const me) {
    if(me!=NULL)
        {
            Admin_Cleanup(me);
        }
    free(me);
}

RiCBoolean Admin_startBehavior(Admin* const me) {
    RiCBoolean done = RiCFALSE;
    done = RiCReactive_startBehavior(&(me->ric_reactive));
    return done;
}

static void initRelations(Admin* const me) {
    RiCDefaultReactivePort_Init(&me->pUc_Uc1ArmingLogger);
    
}

static void initStatechart(Admin* const me) {
    me->rootState_subState = Admin_RiCNonState;
    me->rootState_active = Admin_RiCNonState;
}

int Admin_rootState_IN(const Admin* const me) {
    return 1;
}

int Admin_WaitForAdminCommands_IN(const Admin* const me) {
    return me->rootState_subState == Admin_WaitForAdminCommands;
}

int Admin_sendaction_2_IN(const Admin* const me) {
    return me->rootState_subState == Admin_sendaction_2;
}

int Admin_sendaction_1_IN(const Admin* const me) {
    return me->rootState_subState == Admin_sendaction_1;
}

#ifdef _OMINSTRUMENT
static void serializeRelations(const void * const void_me, ARCSRelations * arcsRelations) {
    
    const Admin * const me = (const Admin *)void_me;
    
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const Admin * const me = (const Admin *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    switch (me->rootState_subState) {
        case Admin_WaitForAdminCommands:
        {
            WaitForAdminCommands_serializeStates(me, arcsState);
        }
        break;
        case Admin_sendaction_1:
        {
            sendaction_1_serializeStates(me, arcsState);
        }
        break;
        case Admin_sendaction_2:
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
    
    Admin * const me = (Admin *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, Admin, "ROOT");
        NOTIFY_TRANSITION_STARTED(me, Admin, "0");
        NOTIFY_STATE_ENTERED(me, Admin, "ROOT.WaitForAdminCommands");
        me->rootState_subState = Admin_WaitForAdminCommands;
        me->rootState_active = Admin_WaitForAdminCommands;
        NOTIFY_TRANSITION_TERMINATED(me, Admin, "0");
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    Admin * const me = (Admin *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->rootState_active) {
        case Admin_WaitForAdminCommands:
        {
            switch (id) {
                case ApplyElectronicKey_ActorPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Admin, "3");
                    NOTIFY_STATE_EXITED(me, Admin, "ROOT.WaitForAdminCommands");
                    NOTIFY_STATE_ENTERED(me, Admin, "ROOT.sendaction_2");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Admin_sendaction_2;
                    me->rootState_active = Admin_sendaction_2;
                    {
                        /*#[ state ROOT.sendaction_2.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc1ArmingLogger, evKeyApplied());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Admin, "3");
                    res = eventConsumed;
                }
                break;
                case TurnOnDevice_ActorPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Admin, "1");
                    NOTIFY_STATE_EXITED(me, Admin, "ROOT.WaitForAdminCommands");
                    NOTIFY_STATE_ENTERED(me, Admin, "ROOT.sendaction_1");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Admin_sendaction_1;
                    me->rootState_active = Admin_sendaction_1;
                    {
                        /*#[ state ROOT.sendaction_1.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc1ArmingLogger, evWakeUpButtonPressed());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Admin, "1");
                    res = eventConsumed;
                }
                break;
                default:
                    break;
            }
        }
        break;
        case Admin_sendaction_1:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Admin, "2");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Admin, "ROOT.sendaction_1");
                    NOTIFY_STATE_ENTERED(me, Admin, "ROOT.WaitForAdminCommands");
                    me->rootState_subState = Admin_WaitForAdminCommands;
                    me->rootState_active = Admin_WaitForAdminCommands;
                    NOTIFY_TRANSITION_TERMINATED(me, Admin, "2");
                    res = eventConsumed;
                }
        }
        break;
        case Admin_sendaction_2:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Admin, "4");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Admin, "ROOT.sendaction_2");
                    NOTIFY_STATE_ENTERED(me, Admin, "ROOT.WaitForAdminCommands");
                    me->rootState_subState = Admin_WaitForAdminCommands;
                    me->rootState_active = Admin_WaitForAdminCommands;
                    NOTIFY_TRANSITION_TERMINATED(me, Admin, "4");
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
static void WaitForAdminCommands_serializeStates(const Admin* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.WaitForAdminCommands");
}

static void sendaction_2_serializeStates(const Admin* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_2");
}

static void sendaction_1_serializeStates(const Admin* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_1");
}
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Admin* const me) {
    free(me);
}

BasicWebAdapter * Admin_getItsWebAdapter(const Admin* const me) {
    return me->itsWebAdapter;
}

void Admin_visitWebAdaptedRelations(const Admin* const me) {
}

static void Admin_initWebAdapters(Admin* const me) {
    me->itsWebAdapter = NewObjectTypeWebAdapter("struct Admin", me, (void (*)(void *)) Admin_visitWebAdaptedRelations);
    ObjectTypeWebAdapter_AddSubObject(NewEventReceptionWebAdapter("TurnOnDevice", me, (void (*)(void *)) TurnOnDeviceWebWrapper), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewEventReceptionWebAdapter("ApplyElectronicKey", me, (void (*)(void *)) ApplyElectronicKeyWebWrapper), me->itsWebAdapter);
}

static void TurnOnDeviceWebWrapper(Admin* const me) {
    RiCGEN(me, TurnOnDevice( ));
}

static void ApplyElectronicKeyWebWrapper(Admin* const me) {
    RiCGEN(me, ApplyElectronicKey( ));
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecution\Animate\Admin.c
*********************************************************************/
