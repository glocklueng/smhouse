/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Scanner
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\Scanner.c
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
static unsigned int getKeySize(const Scanner* const me);

/*## auto_generated */
static char* getReadedKey(const Scanner* const me);

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
static void sendaction_3_serializeStates(const Scanner* const me, ARCSState * arcsState);

/*## statechart_method */
static void ScannerControl_serializeStates(const Scanner* const me, ARCSState * arcsState);

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
    me->keySize = 8;
    me->readedKey = "myReadedKey";
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

void setKeySize(Scanner* const me, unsigned int p_keySize) {
    me->keySize = p_keySize;
    NOTIFY_SET_OPERATION(me, Scanner);
}

void setReadedKey(Scanner* const me, char* p_readedKey) {
    me->readedKey = p_readedKey;
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

static unsigned int getKeySize(const Scanner* const me) {
    return me->keySize;
}

static char* getReadedKey(const Scanner* const me) {
    return me->readedKey;
}

static void initRelations(Scanner* const me) {
    RiCDefaultReactivePort_Init(&me->pUc_Uc1ArmingLogger);
    
    RiCDefaultReactivePort_Init(&me->pUc_Uc2DataLoggingAndIntrusionDetection);
    
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pUc_Uc1ArmingLogger.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
    RiCDefaultReactiveInbound_setItsIRiCReactive(
    &(me->pUc_Uc2DataLoggingAndIntrusionDetection.inbound),
    (IRiCReactive*)(&(me->ric_reactive.iRiCReactive)));
}

static void initStatechart(Scanner* const me) {
    me->rootState_subState = Scanner_RiCNonState;
    me->rootState_active = Scanner_RiCNonState;
}

int rootState_IN(const Scanner* const me) {
    return 1;
}

int sendaction_3_IN(const Scanner* const me) {
    return me->rootState_subState == Scanner_sendaction_3;
}

int ScannerControl_IN(const Scanner* const me) {
    return me->rootState_subState == Scanner_ScannerControl;
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
        case Scanner_ScannerControl:
        {
            ScannerControl_serializeStates(me, arcsState);
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
        NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.ScannerControl");
        me->rootState_subState = Scanner_ScannerControl;
        me->rootState_active = Scanner_ScannerControl;
        NOTIFY_TRANSITION_TERMINATED(me, Scanner, "0");
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    Scanner * const me = (Scanner *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->rootState_active) {
        case Scanner_ScannerControl:
        {
            if(id == reqReadKey_InterfacesPkg_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Scanner, "1");
                    NOTIFY_STATE_EXITED(me, Scanner, "ROOT.ScannerControl");
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.KeyRead");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Scanner_KeyRead;
                    me->rootState_active = Scanner_KeyRead;
                    NOTIFY_TRANSITION_TERMINATED(me, Scanner, "1");
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
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.sendaction_3");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->rootState_subState = Scanner_sendaction_3;
                    me->rootState_active = Scanner_sendaction_3;
                    {
                        /*#[ state ROOT.sendaction_3.(Entry) */
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
                    NOTIFY_NULL_TRANSITION_STARTED(me, Scanner, "3");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Scanner, "ROOT.sendaction_3");
                    {
                        /*#[ transition 3 */
                        printf("Key readed.\n");
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Scanner, "ROOT.ScannerControl");
                    me->rootState_subState = Scanner_ScannerControl;
                    me->rootState_active = Scanner_ScannerControl;
                    NOTIFY_TRANSITION_TERMINATED(me, Scanner, "3");
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
static void sendaction_3_serializeStates(const Scanner* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.sendaction_3");
}

static void ScannerControl_serializeStates(const Scanner* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.ScannerControl");
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
	File Path	: ModelExecution\Animate\Scanner.c
*********************************************************************/
