/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: Scanner
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc1\Animate\Scanner.c
*********************************************************************/

/*## auto_generated */
#include "Scanner.h"
/*## event reqReadKey() */
#include "InterfacesPkg.h"
/*#[ ignore */
#define ActorPkg_Scanner_Scanner_SERIALIZE OM_NO_OP
/*#]*/

/*## package ActorPkg */

/*## actor Scanner */
/*## auto_generated */
static char* getReadedKey(const Scanner* const me);

/*## auto_generated */
static unsigned int getKeySize(const Scanner* const me);

/*## auto_generated */
static void initRelations(Scanner* const me);

/*## auto_generated */
static void initStatechart(Scanner* const me);

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
static void sendaction_8_serializeStates(const Scanner* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_7_serializeStates(const Scanner* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_4_serializeStates(const Scanner* const me, ARCSState * arcsState);

/*## statechart_method */
static void sendaction_3_serializeStates(const Scanner* const me, ARCSState * arcsState);

/*## statechart_method */
static void PoweringUp_serializeStates(const Scanner* const me, ARCSState * arcsState);

/*## statechart_method */
static void PoweringDown_serializeStates(const Scanner* const me, ARCSState * arcsState);

/*## statechart_method */
static void On_serializeStates(const Scanner* const me, ARCSState * arcsState);

/*## statechart_method */
static void Off_serializeStates(const Scanner* const me, ARCSState * arcsState);

/*## statechart_method */
static void KeyRead_serializeStates(const Scanner* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Scanner* const me);

static const ARCSerCVtbl ActorPkg_Scanner_instrumentVtbl = {
    serializeAttributes,
    serializeRelations
};

static void initWebAdapters(Scanner* const me);

static char* getReadedKeyWebWrapper(Scanner* const me);

static void setReadedKeyWebWrapper(Scanner* const me, char* value);
/*#]*/

#ifdef _OMINSTRUMENT
OM_INSTRUMENT_OBJECT_TYPE(Scanner, ActorPkg, ActorPkg, FALSE, &ActorPkg_Scanner_instrumentVtbl)
#endif /* _OMINSTRUMENT */

void Init(Scanner* const me, RiCTask * p_task) {
    /* Virtual tables Initialization */
    static const RiCReactive_Vtbl Scanner_reactiveVtbl = {
        rootState_dispatchEvent,
        rootState_entDef,
        ROOT_STATE_SERIALIZE_STATES(rootState_serializeStates),
        (RiCObjectDestroyMethod) Destroy,
        NULL,
        NULL,
        NULL,
        (RiCObjectCleanupMethod) Cleanup,
        (RiCObjectFreeMethod) FreeInstance
    };
    me->readedKey = "myReadedKey";
    me->keySize = 8;
    RiCReactive_init(&(me->ric_reactive), (void*)me, p_task, &Scanner_reactiveVtbl);
    NOTIFY_REACTIVE_CONSTRUCTOR(me, &me, NULL, Scanner, Init, Init(), 0, ActorPkg_Scanner_Scanner_SERIALIZE);
    RiCReactive_setActive(&(me->ric_reactive), RiCFALSE);
    initRelations(me);
    initStatechart(me);
    initWebAdapters(me);
    NOTIFY_END_CONSTRUCTOR(me);
}

void Cleanup(Scanner* const me) {
    NOTIFY_DESTRUCTOR(me, &me, Scanner, ~Scanner);
    BasicWebAdapter_Destroy(me->itsWebAdapter);
    RiCReactive_cleanup(&(me->ric_reactive));
}

void setReadedKey(Scanner* const me, char* p_readedKey) {
    me->readedKey = p_readedKey;
    NOTIFY_SET_OPERATION(me, Scanner);
}

void setKeySize(Scanner* const me, unsigned int p_keySize) {
    me->keySize = p_keySize;
    NOTIFY_SET_OPERATION(me, Scanner);
}

Scanner * Create(RiCTask * p_task) {
    Scanner* me = (Scanner *) malloc(sizeof(Scanner));
    if(me!=NULL)
        {
            Init(me, p_task);
        }
    DYNAMICALLY_ALLOCATED(me);
    return me;
}

void Destroy(Scanner* const me) {
    if(me!=NULL)
        {
            Cleanup(me);
        }
    free(me);
}

RiCBoolean startBehavior(Scanner* const me) {
    RiCBoolean done = RiCFALSE;
    done = RiCReactive_startBehavior(&(me->ric_reactive));
    return done;
}

static char* getReadedKey(const Scanner* const me) {
    return me->readedKey;
}

static unsigned int getKeySize(const Scanner* const me) {
    return me->keySize;
}

static void initRelations(Scanner* const me) {
    RiCDefaultReactivePort_Init(&me->pUc_Uc2DataLoggingAndIntrusionDetection);
    
    RiCDefaultReactivePort_Init(&me->pUc_Uc1ArmingLogger);
    
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pUc_Uc2DataLoggingAndIntrusionDetection.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pUc_Uc1ArmingLogger.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
}

static void initStatechart(Scanner* const me) {
    me->rootState_subState = Scanner_RiCNonState;
    me->rootState_active = Scanner_RiCNonState;
}

int rootState_IN(const Scanner* const me) {
    return 1;
}

int sendaction_8_IN(const Scanner* const me) {
    return me->rootState_subState == Scanner_sendaction_8;
}

int sendaction_7_IN(const Scanner* const me) {
    return me->rootState_subState == Scanner_sendaction_7;
}

int sendaction_4_IN(const Scanner* const me) {
    return me->rootState_subState == Scanner_sendaction_4;
}

int sendaction_3_IN(const Scanner* const me) {
    return me->rootState_subState == Scanner_sendaction_3;
}

int PoweringUp_IN(const Scanner* const me) {
    return me->rootState_subState == Scanner_PoweringUp;
}

int PoweringDown_IN(const Scanner* const me) {
    return me->rootState_subState == Scanner_PoweringDown;
}

int On_IN(const Scanner* const me) {
    return me->rootState_subState == Scanner_On;
}

int Off_IN(const Scanner* const me) {
    return me->rootState_subState == Scanner_Off;
}

int KeyRead_IN(const Scanner* const me) {
    return me->rootState_subState == Scanner_KeyRead;
}

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes) {
    
    const Scanner * const me = (const Scanner *)void_me;
    ARCSA_addAttribute_c(arcsAttributes, "readedKey", ARC_charP2String(me->readedKey));
    ARCSA_addAttribute_c(arcsAttributes, "keySize", ARC_unsigned_int2String(me->keySize));
}

static void serializeRelations(const void * const void_me, ARCSRelations * arcsRelations) {
    
    const Scanner * const me = (const Scanner *)void_me;
    
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const Scanner * const me = (const Scanner *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    switch (me->rootState_subState) {
        case Scanner_Off:
        {
            Off_serializeStates(me, arcsState);
        }
        break;
        case Scanner_KeyRead:
        {
            KeyRead_serializeStates(me, arcsState);
        }
        break;
        case Scanner_sendaction_3:
        {
            sendaction_3_serializeStates(me, arcsState);
        }
        break;
        case Scanner_sendaction_4:
        {
            sendaction_4_serializeStates(me, arcsState);
        }
        break;
        case Scanner_PoweringUp:
        {
            PoweringUp_serializeStates(me, arcsState);
        }
        break;
        case Scanner_On:
        {
            On_serializeStates(me, arcsState);
        }
        break;
        case Scanner_sendaction_7:
        {
            sendaction_7_serializeStates(me, arcsState);
        }
        break;
        case Scanner_sendaction_8:
        {
            sendaction_8_serializeStates(me, arcsState);
        }
        break;
        case Scanner_PoweringDown:
        {
            PoweringDown_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me) {
    
    Scanner * const me = (Scanner *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, Scanner, "ROOT");
        NOTIFY_TRANSITION_STARTED(me, Scanner, "0");
        NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.Off");
        me->rootState_subState = Scanner_Off;
        me->rootState_active = Scanner_Off;
        NOTIFY_TRANSITION_TERMINATED(me, Scanner, "0");
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    Scanner * const me = (Scanner *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->rootState_active) {
        case Scanner_Off:
        {
            if(id == reqTurnOnScanner_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Scanner, "4");
                    NOTIFY_STATE_EXITED(me, Scanner, "ROOT.Off");
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.PoweringUp");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Scanner_PoweringUp;
                    me->rootState_active = Scanner_PoweringUp;
                    NOTIFY_TRANSITION_TERMINATED(me, Scanner, "4");
                    res = eventConsumed;
                }
        }
        break;
        case Scanner_KeyRead:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Scanner, "2");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Scanner, "ROOT.KeyRead");
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.sendaction_4");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Scanner_sendaction_4;
                    me->rootState_active = Scanner_sendaction_4;
                    {
                        /*#[ state ROOT.sendaction_4.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc1ArmingLogger, evKeyReaded(me->readedKey));
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Scanner, "2");
                    res = eventConsumed;
                }
        }
        break;
        case Scanner_sendaction_3:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Scanner, "8");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Scanner, "ROOT.sendaction_3");
                    {
                        /*#[ transition 8 */
                        printf("Key readed.\n");
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.On");
                    me->rootState_subState = Scanner_On;
                    me->rootState_active = Scanner_On;
                    NOTIFY_TRANSITION_TERMINATED(me, Scanner, "8");
                    res = eventConsumed;
                }
        }
        break;
        case Scanner_sendaction_4:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Scanner, "3");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Scanner, "ROOT.sendaction_4");
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.sendaction_3");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Scanner_sendaction_3;
                    me->rootState_active = Scanner_sendaction_3;
                    {
                        /*#[ state ROOT.sendaction_3.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc2DataLoggingAndIntrusionDetection, evKeyReaded(me->readedKey));
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Scanner, "3");
                    res = eventConsumed;
                }
        }
        break;
        case Scanner_PoweringUp:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Scanner, "5");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Scanner, "ROOT.PoweringUp");
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.sendaction_7");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Scanner_sendaction_7;
                    me->rootState_active = Scanner_sendaction_7;
                    {
                        /*#[ state ROOT.sendaction_7.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc1ArmingLogger, evScannerPoweredUp());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Scanner, "5");
                    res = eventConsumed;
                }
        }
        break;
        case Scanner_On:
        {
            switch (id) {
                case reqTurnOffScanner_InterfacesPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Scanner, "9");
                    NOTIFY_STATE_EXITED(me, Scanner, "ROOT.On");
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.PoweringDown");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Scanner_PoweringDown;
                    me->rootState_active = Scanner_PoweringDown;
                    NOTIFY_TRANSITION_TERMINATED(me, Scanner, "9");
                    res = eventConsumed;
                }
                break;
                case reqReadKey_InterfacesPkg_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Scanner, "1");
                    NOTIFY_STATE_EXITED(me, Scanner, "ROOT.On");
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.KeyRead");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Scanner_KeyRead;
                    me->rootState_active = Scanner_KeyRead;
                    NOTIFY_TRANSITION_TERMINATED(me, Scanner, "1");
                    res = eventConsumed;
                }
                break;
                default:
                    break;
            }
        }
        break;
        case Scanner_sendaction_7:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Scanner, "6");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Scanner, "ROOT.sendaction_7");
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.sendaction_8");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Scanner_sendaction_8;
                    me->rootState_active = Scanner_sendaction_8;
                    {
                        /*#[ state ROOT.sendaction_8.(Entry) */
                        RiCGEN_PORT(me->pUc_Uc2DataLoggingAndIntrusionDetection, evScannerPoweredUp());
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Scanner, "6");
                    res = eventConsumed;
                }
        }
        break;
        case Scanner_sendaction_8:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Scanner, "7");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Scanner, "ROOT.sendaction_8");
                    {
                        /*#[ transition 7 */
                        printf("Scanner ON.\n");
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.On");
                    me->rootState_subState = Scanner_On;
                    me->rootState_active = Scanner_On;
                    NOTIFY_TRANSITION_TERMINATED(me, Scanner, "7");
                    res = eventConsumed;
                }
        }
        break;
        case Scanner_PoweringDown:
        {
            if(id == Null_id)
                {
                    NOTIFY_NULL_TRANSITION_STARTED(me, Scanner, "10");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Scanner, "ROOT.PoweringDown");
                    {
                        /*#[ transition 10 */
                        printf("Scanner OFF.\n");
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.Off");
                    me->rootState_subState = Scanner_Off;
                    me->rootState_active = Scanner_Off;
                    NOTIFY_TRANSITION_TERMINATED(me, Scanner, "10");
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
static void sendaction_8_serializeStates(const Scanner* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_8");
}

static void sendaction_7_serializeStates(const Scanner* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_7");
}

static void sendaction_4_serializeStates(const Scanner* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_4");
}

static void sendaction_3_serializeStates(const Scanner* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_3");
}

static void PoweringUp_serializeStates(const Scanner* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.PoweringUp");
}

static void PoweringDown_serializeStates(const Scanner* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.PoweringDown");
}

static void On_serializeStates(const Scanner* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.On");
}

static void Off_serializeStates(const Scanner* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Off");
}

static void KeyRead_serializeStates(const Scanner* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.KeyRead");
}
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Scanner* const me) {
    free(me);
}

BasicWebAdapter * getItsWebAdapter(const Scanner* const me) {
    return me->itsWebAdapter;
}

void visitWebAdaptedRelations(const Scanner* const me) {
}

static void initWebAdapters(Scanner* const me) {
    me->itsWebAdapter = NewObjectTypeWebAdapter("struct Scanner", me, (void (*)(void *)) visitWebAdaptedRelations);
    ObjectTypeWebAdapter_AddSubObject(NewCStrAttrWebAdapter("readedKey", me, (char* (*)(void *)) getReadedKeyWebWrapper, (void (*)(void *, char*)) setReadedKeyWebWrapper), me->itsWebAdapter);
    ObjectTypeWebAdapter_AddSubObject(NewUIntAttrWebAdapter("keySize", me, (unsigned int (*)(void *)) getKeySize, (void (*)(void *, unsigned int)) setKeySize), me->itsWebAdapter);
}

static char* getReadedKeyWebWrapper(Scanner* const me) {
    return (char*) getReadedKey(me);
}

static void setReadedKeyWebWrapper(Scanner* const me, char* value) {
    setReadedKey(me, (char*) value);
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\Scanner.c
*********************************************************************/
