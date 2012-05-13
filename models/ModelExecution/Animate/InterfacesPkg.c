/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: InterfacesPkg
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\InterfacesPkg.c
*********************************************************************/

/*## auto_generated */
#include "InterfacesPkg.h"
/*#[ ignore */
#define evWakeUpButtonPressed_SERIALIZE OM_NO_OP

#define evWakeUpButtonPressed_UNSERIALIZE OM_NO_OP

#define evWakeUpButtonPressed_DECLARE_PARAMS OM_NO_OP

#define evWakeUpButtonPressed_CONSTRUCTOR RiC_Create_evWakeUpButtonPressed()

#define evKeyApplied_SERIALIZE OM_NO_OP

#define evKeyApplied_UNSERIALIZE OM_NO_OP

#define evKeyApplied_DECLARE_PARAMS OM_NO_OP

#define evKeyApplied_CONSTRUCTOR RiC_Create_evKeyApplied()

#define reqReadKey_SERIALIZE OM_NO_OP

#define reqReadKey_UNSERIALIZE OM_NO_OP

#define reqReadKey_DECLARE_PARAMS OM_NO_OP

#define reqReadKey_CONSTRUCTOR RiC_Create_reqReadKey()

#define reqTurnOnSensorsPower_SERIALIZE OM_NO_OP

#define reqTurnOnSensorsPower_UNSERIALIZE OM_NO_OP

#define reqTurnOnSensorsPower_DECLARE_PARAMS OM_NO_OP

#define reqTurnOnSensorsPower_CONSTRUCTOR RiC_Create_reqTurnOnSensorsPower()

#define reqCheckSensors_SERIALIZE OM_NO_OP

#define reqCheckSensors_UNSERIALIZE OM_NO_OP

#define reqCheckSensors_DECLARE_PARAMS OM_NO_OP

#define reqCheckSensors_CONSTRUCTOR RiC_Create_reqCheckSensors()

#define reqTurnOffSensorsPower_SERIALIZE OM_NO_OP

#define reqTurnOffSensorsPower_UNSERIALIZE OM_NO_OP

#define reqTurnOffSensorsPower_DECLARE_PARAMS OM_NO_OP

#define reqTurnOffSensorsPower_CONSTRUCTOR RiC_Create_reqTurnOffSensorsPower()

#define evSensorsPoweredUp_SERIALIZE OM_NO_OP

#define evSensorsPoweredUp_UNSERIALIZE OM_NO_OP

#define evSensorsPoweredUp_DECLARE_PARAMS OM_NO_OP

#define evSensorsPoweredUp_CONSTRUCTOR RiC_Create_evSensorsPoweredUp()

#define evSensorsStatus_SERIALIZE OMADD_SER(Failure, ARC_RiCBoolean2String(me->Failure))

#define evSensorsStatus_UNSERIALIZE OMADD_UNSER(RiCBoolean, Failure, ARC_destructiveString2X_RiCBoolean)

#define evSensorsStatus_DECLARE_PARAMS RiCBoolean Failure;

#define evSensorsStatus_CONSTRUCTOR RiC_Create_evSensorsStatus(Failure)

#define evKeyReaded_SERIALIZE OMADD_SER(Key, ARC_charP2String(me->Key))

#define evKeyReaded_UNSERIALIZE OMADD_UNSER(char*, Key, ARC_destructiveString2X_charP)

#define evKeyReaded_DECLARE_PARAMS char* Key;

#define evKeyReaded_CONSTRUCTOR RiC_Create_evKeyReaded(Key)

#define reqReadSensors_SERIALIZE OM_NO_OP

#define reqReadSensors_UNSERIALIZE OM_NO_OP

#define reqReadSensors_DECLARE_PARAMS OM_NO_OP

#define reqReadSensors_CONSTRUCTOR RiC_Create_reqReadSensors()

#define evSensorsReaded_SERIALIZE OM_NO_OP

#define evSensorsReaded_UNSERIALIZE OM_NO_OP

#define evSensorsReaded_DECLARE_PARAMS OM_NO_OP

#define evSensorsReaded_CONSTRUCTOR RiC_Create_evSensorsReaded()

#define evMotionDetected_SERIALIZE OM_NO_OP

#define evMotionDetected_UNSERIALIZE OM_NO_OP

#define evMotionDetected_DECLARE_PARAMS OM_NO_OP

#define evMotionDetected_CONSTRUCTOR RiC_Create_evMotionDetected()

#define reqTurnOnScanner_SERIALIZE OM_NO_OP

#define reqTurnOnScanner_UNSERIALIZE OM_NO_OP

#define reqTurnOnScanner_DECLARE_PARAMS OM_NO_OP

#define reqTurnOnScanner_CONSTRUCTOR RiC_Create_reqTurnOnScanner()

#define reqTurnOffScanner_SERIALIZE OM_NO_OP

#define reqTurnOffScanner_UNSERIALIZE OM_NO_OP

#define reqTurnOffScanner_DECLARE_PARAMS OM_NO_OP

#define reqTurnOffScanner_CONSTRUCTOR RiC_Create_reqTurnOffScanner()

#define evSynced_SERIALIZE OM_NO_OP

#define evSynced_UNSERIALIZE OM_NO_OP

#define evSynced_DECLARE_PARAMS OM_NO_OP

#define evSynced_CONSTRUCTOR RiC_Create_evSynced()
/*#]*/

/*## package InterfacesPkg */


#ifdef _OMINSTRUMENT
/*#[ ignore */
static const ARCSerGVtbl InterfacesPkg_instrumentVtbl = {
    NULL,
    NULL
};
/*#]*/

OM_INSTRUMENT_PACKAGE(InterfacesPkg, InterfacesPkg, &InterfacesPkg_instrumentVtbl)

void InterfacesPkg_OMEvent_Init(void) {
    ARC_INIT_EVENT(evWakeUpButtonPressed);
    ARC_INIT_EVENT(evKeyApplied);
    ARC_INIT_EVENT(reqReadKey);
    ARC_INIT_EVENT(reqTurnOnSensorsPower);
    ARC_INIT_EVENT(reqCheckSensors);
    ARC_INIT_EVENT(reqTurnOffSensorsPower);
    ARC_INIT_EVENT(evSensorsPoweredUp);
    ARC_INIT_EVENT(evSensorsStatus);
    ARC_INIT_EVENT(evKeyReaded);
    ARC_INIT_EVENT(reqReadSensors);
    ARC_INIT_EVENT(evSensorsReaded);
    ARC_INIT_EVENT(evMotionDetected);
    ARC_INIT_EVENT(reqTurnOnScanner);
    ARC_INIT_EVENT(reqTurnOffScanner);
    ARC_INIT_EVENT(evSynced);
}
#endif /* _OMINSTRUMENT */

OM_INSTRUMENT_EVENT(evWakeUpButtonPressed, InterfacesPkg, InterfacesPkg, evWakeUpButtonPressed(), me)

void evWakeUpButtonPressed_Init(evWakeUpButtonPressed* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evWakeUpButtonPressed)
    RiCEvent_init(&(me->ric_event), evWakeUpButtonPressed_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evWakeUpButtonPressed);
}

void evWakeUpButtonPressed_Cleanup(evWakeUpButtonPressed* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evWakeUpButtonPressed * RiC_Create_evWakeUpButtonPressed(void) {
    evWakeUpButtonPressed* me = (evWakeUpButtonPressed*) malloc(sizeof(evWakeUpButtonPressed));
    if(me!=NULL)
        {
            evWakeUpButtonPressed_Init(me);
        }
    return me;
}

void RiC_Destroy_evWakeUpButtonPressed(evWakeUpButtonPressed* const me) {
    if(me!=NULL)
        {
            evWakeUpButtonPressed_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evKeyApplied, InterfacesPkg, InterfacesPkg, evKeyApplied(), me)

void evKeyApplied_Init(evKeyApplied* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evKeyApplied)
    RiCEvent_init(&(me->ric_event), evKeyApplied_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evKeyApplied);
}

void evKeyApplied_Cleanup(evKeyApplied* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evKeyApplied * RiC_Create_evKeyApplied(void) {
    evKeyApplied* me = (evKeyApplied*) malloc(sizeof(evKeyApplied));
    if(me!=NULL)
        {
            evKeyApplied_Init(me);
        }
    return me;
}

void RiC_Destroy_evKeyApplied(evKeyApplied* const me) {
    if(me!=NULL)
        {
            evKeyApplied_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(reqReadKey, InterfacesPkg, InterfacesPkg, reqReadKey(), me)

void reqReadKey_Init(reqReadKey* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, reqReadKey)
    RiCEvent_init(&(me->ric_event), reqReadKey_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, reqReadKey);
}

void reqReadKey_Cleanup(reqReadKey* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
reqReadKey * RiC_Create_reqReadKey(void) {
    reqReadKey* me = (reqReadKey*) malloc(sizeof(reqReadKey));
    if(me!=NULL)
        {
            reqReadKey_Init(me);
        }
    return me;
}

void RiC_Destroy_reqReadKey(reqReadKey* const me) {
    if(me!=NULL)
        {
            reqReadKey_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(reqTurnOnSensorsPower, InterfacesPkg, InterfacesPkg, reqTurnOnSensorsPower(), me)

void reqTurnOnSensorsPower_Init(reqTurnOnSensorsPower* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, reqTurnOnSensorsPower)
    RiCEvent_init(&(me->ric_event), reqTurnOnSensorsPower_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, reqTurnOnSensorsPower);
}

void reqTurnOnSensorsPower_Cleanup(reqTurnOnSensorsPower* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
reqTurnOnSensorsPower * RiC_Create_reqTurnOnSensorsPower(void) {
    reqTurnOnSensorsPower* me = (reqTurnOnSensorsPower*) malloc(sizeof(reqTurnOnSensorsPower));
    if(me!=NULL)
        {
            reqTurnOnSensorsPower_Init(me);
        }
    return me;
}

void RiC_Destroy_reqTurnOnSensorsPower(reqTurnOnSensorsPower* const me) {
    if(me!=NULL)
        {
            reqTurnOnSensorsPower_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(reqCheckSensors, InterfacesPkg, InterfacesPkg, reqCheckSensors(), me)

void reqCheckSensors_Init(reqCheckSensors* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, reqCheckSensors)
    RiCEvent_init(&(me->ric_event), reqCheckSensors_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, reqCheckSensors);
}

void reqCheckSensors_Cleanup(reqCheckSensors* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
reqCheckSensors * RiC_Create_reqCheckSensors(void) {
    reqCheckSensors* me = (reqCheckSensors*) malloc(sizeof(reqCheckSensors));
    if(me!=NULL)
        {
            reqCheckSensors_Init(me);
        }
    return me;
}

void RiC_Destroy_reqCheckSensors(reqCheckSensors* const me) {
    if(me!=NULL)
        {
            reqCheckSensors_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(reqTurnOffSensorsPower, InterfacesPkg, InterfacesPkg, reqTurnOffSensorsPower(), me)

void reqTurnOffSensorsPower_Init(reqTurnOffSensorsPower* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, reqTurnOffSensorsPower)
    RiCEvent_init(&(me->ric_event), reqTurnOffSensorsPower_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, reqTurnOffSensorsPower);
}

void reqTurnOffSensorsPower_Cleanup(reqTurnOffSensorsPower* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
reqTurnOffSensorsPower * RiC_Create_reqTurnOffSensorsPower(void) {
    reqTurnOffSensorsPower* me = (reqTurnOffSensorsPower*) malloc(sizeof(reqTurnOffSensorsPower));
    if(me!=NULL)
        {
            reqTurnOffSensorsPower_Init(me);
        }
    return me;
}

void RiC_Destroy_reqTurnOffSensorsPower(reqTurnOffSensorsPower* const me) {
    if(me!=NULL)
        {
            reqTurnOffSensorsPower_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evSensorsPoweredUp, InterfacesPkg, InterfacesPkg, evSensorsPoweredUp(), me)

void evSensorsPoweredUp_Init(evSensorsPoweredUp* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evSensorsPoweredUp)
    RiCEvent_init(&(me->ric_event), evSensorsPoweredUp_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evSensorsPoweredUp);
}

void evSensorsPoweredUp_Cleanup(evSensorsPoweredUp* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evSensorsPoweredUp * RiC_Create_evSensorsPoweredUp(void) {
    evSensorsPoweredUp* me = (evSensorsPoweredUp*) malloc(sizeof(evSensorsPoweredUp));
    if(me!=NULL)
        {
            evSensorsPoweredUp_Init(me);
        }
    return me;
}

void RiC_Destroy_evSensorsPoweredUp(evSensorsPoweredUp* const me) {
    if(me!=NULL)
        {
            evSensorsPoweredUp_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evSensorsStatus, InterfacesPkg, InterfacesPkg, evSensorsStatus(RiCBoolean), me)

void evSensorsStatus_Init(evSensorsStatus* const me, RiCBoolean p_Failure) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evSensorsStatus)
    RiCEvent_init(&(me->ric_event), evSensorsStatus_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evSensorsStatus);
    me->Failure = p_Failure;
}

void evSensorsStatus_Cleanup(evSensorsStatus* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evSensorsStatus * RiC_Create_evSensorsStatus(RiCBoolean p_Failure) {
    evSensorsStatus* me = (evSensorsStatus*) malloc(sizeof(evSensorsStatus));
    if(me!=NULL)
        {
            evSensorsStatus_Init(me, p_Failure);
        }
    return me;
}

void RiC_Destroy_evSensorsStatus(evSensorsStatus* const me) {
    if(me!=NULL)
        {
            evSensorsStatus_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evKeyReaded, InterfacesPkg, InterfacesPkg, evKeyReaded(char*), me)

void evKeyReaded_Init(evKeyReaded* const me, char* p_Key) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evKeyReaded)
    RiCEvent_init(&(me->ric_event), evKeyReaded_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evKeyReaded);
    me->Key = p_Key;
}

void evKeyReaded_Cleanup(evKeyReaded* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evKeyReaded * RiC_Create_evKeyReaded(char* p_Key) {
    evKeyReaded* me = (evKeyReaded*) malloc(sizeof(evKeyReaded));
    if(me!=NULL)
        {
            evKeyReaded_Init(me, p_Key);
        }
    return me;
}

void RiC_Destroy_evKeyReaded(evKeyReaded* const me) {
    if(me!=NULL)
        {
            evKeyReaded_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(reqReadSensors, InterfacesPkg, InterfacesPkg, reqReadSensors(), me)

void reqReadSensors_Init(reqReadSensors* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, reqReadSensors)
    RiCEvent_init(&(me->ric_event), reqReadSensors_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, reqReadSensors);
}

void reqReadSensors_Cleanup(reqReadSensors* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
reqReadSensors * RiC_Create_reqReadSensors(void) {
    reqReadSensors* me = (reqReadSensors*) malloc(sizeof(reqReadSensors));
    if(me!=NULL)
        {
            reqReadSensors_Init(me);
        }
    return me;
}

void RiC_Destroy_reqReadSensors(reqReadSensors* const me) {
    if(me!=NULL)
        {
            reqReadSensors_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evSensorsReaded, InterfacesPkg, InterfacesPkg, evSensorsReaded(), me)

void evSensorsReaded_Init(evSensorsReaded* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evSensorsReaded)
    RiCEvent_init(&(me->ric_event), evSensorsReaded_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evSensorsReaded);
}

void evSensorsReaded_Cleanup(evSensorsReaded* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evSensorsReaded * RiC_Create_evSensorsReaded(void) {
    evSensorsReaded* me = (evSensorsReaded*) malloc(sizeof(evSensorsReaded));
    if(me!=NULL)
        {
            evSensorsReaded_Init(me);
        }
    return me;
}

void RiC_Destroy_evSensorsReaded(evSensorsReaded* const me) {
    if(me!=NULL)
        {
            evSensorsReaded_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evMotionDetected, InterfacesPkg, InterfacesPkg, evMotionDetected(), me)

void evMotionDetected_Init(evMotionDetected* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evMotionDetected)
    RiCEvent_init(&(me->ric_event), evMotionDetected_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evMotionDetected);
}

void evMotionDetected_Cleanup(evMotionDetected* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evMotionDetected * RiC_Create_evMotionDetected(void) {
    evMotionDetected* me = (evMotionDetected*) malloc(sizeof(evMotionDetected));
    if(me!=NULL)
        {
            evMotionDetected_Init(me);
        }
    return me;
}

void RiC_Destroy_evMotionDetected(evMotionDetected* const me) {
    if(me!=NULL)
        {
            evMotionDetected_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(reqTurnOnScanner, InterfacesPkg, InterfacesPkg, reqTurnOnScanner(), me)

void reqTurnOnScanner_Init(reqTurnOnScanner* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, reqTurnOnScanner)
    RiCEvent_init(&(me->ric_event), reqTurnOnScanner_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, reqTurnOnScanner);
}

void reqTurnOnScanner_Cleanup(reqTurnOnScanner* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
reqTurnOnScanner * RiC_Create_reqTurnOnScanner(void) {
    reqTurnOnScanner* me = (reqTurnOnScanner*) malloc(sizeof(reqTurnOnScanner));
    if(me!=NULL)
        {
            reqTurnOnScanner_Init(me);
        }
    return me;
}

void RiC_Destroy_reqTurnOnScanner(reqTurnOnScanner* const me) {
    if(me!=NULL)
        {
            reqTurnOnScanner_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(reqTurnOffScanner, InterfacesPkg, InterfacesPkg, reqTurnOffScanner(), me)

void reqTurnOffScanner_Init(reqTurnOffScanner* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, reqTurnOffScanner)
    RiCEvent_init(&(me->ric_event), reqTurnOffScanner_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, reqTurnOffScanner);
}

void reqTurnOffScanner_Cleanup(reqTurnOffScanner* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
reqTurnOffScanner * RiC_Create_reqTurnOffScanner(void) {
    reqTurnOffScanner* me = (reqTurnOffScanner*) malloc(sizeof(reqTurnOffScanner));
    if(me!=NULL)
        {
            reqTurnOffScanner_Init(me);
        }
    return me;
}

void RiC_Destroy_reqTurnOffScanner(reqTurnOffScanner* const me) {
    if(me!=NULL)
        {
            reqTurnOffScanner_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evSynced, InterfacesPkg, InterfacesPkg, evSynced(), me)

void evSynced_Init(evSynced* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evSynced)
    RiCEvent_init(&(me->ric_event), evSynced_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evSynced);
}

void evSynced_Cleanup(evSynced* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evSynced * RiC_Create_evSynced(void) {
    evSynced* me = (evSynced*) malloc(sizeof(evSynced));
    if(me!=NULL)
        {
            evSynced_Init(me);
        }
    return me;
}

void RiC_Destroy_evSynced(evSynced* const me) {
    if(me!=NULL)
        {
            evSynced_Cleanup(me);
        }
    free(me);
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecution\Animate\InterfacesPkg.c
*********************************************************************/
