/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: InterfacesPkg
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc1\Animate\InterfacesPkg.c
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

#define evSensorsStatus_SERIALIZE OMADD_SER(Failure, ARC_RiCBoolean2String(me->Failure))

#define evSensorsStatus_UNSERIALIZE OMADD_UNSER(RiCBoolean, Failure, ARC_destructiveString2X_RiCBoolean)

#define evSensorsStatus_DECLARE_PARAMS RiCBoolean Failure;

#define evSensorsStatus_CONSTRUCTOR RiC_Create_evSensorsStatus(Failure)

#define evSensorsPoweredUp_SERIALIZE OM_NO_OP

#define evSensorsPoweredUp_UNSERIALIZE OM_NO_OP

#define evSensorsPoweredUp_DECLARE_PARAMS OM_NO_OP

#define evSensorsPoweredUp_CONSTRUCTOR RiC_Create_evSensorsPoweredUp()

#define evSensorsReaded_SERIALIZE OM_NO_OP

#define evSensorsReaded_UNSERIALIZE OM_NO_OP

#define evSensorsReaded_DECLARE_PARAMS OM_NO_OP

#define evSensorsReaded_CONSTRUCTOR RiC_Create_evSensorsReaded()

#define evKeyReaded_SERIALIZE OMADD_SER(Key, ARC_charP2String(me->Key))

#define evKeyReaded_UNSERIALIZE OMADD_UNSER(char*, Key, ARC_destructiveString2X_charP)

#define evKeyReaded_DECLARE_PARAMS char* Key;

#define evKeyReaded_CONSTRUCTOR RiC_Create_evKeyReaded(Key)

#define evMotionDetected_SERIALIZE OM_NO_OP

#define evMotionDetected_UNSERIALIZE OM_NO_OP

#define evMotionDetected_DECLARE_PARAMS OM_NO_OP

#define evMotionDetected_CONSTRUCTOR RiC_Create_evMotionDetected()

#define evStartScanner_SERIALIZE OM_NO_OP

#define evStartScanner_UNSERIALIZE OM_NO_OP

#define evStartScanner_DECLARE_PARAMS OM_NO_OP

#define evStartScanner_CONSTRUCTOR RiC_Create_evStartScanner()

#define evScannerPoweredUp_SERIALIZE OM_NO_OP

#define evScannerPoweredUp_UNSERIALIZE OM_NO_OP

#define evScannerPoweredUp_DECLARE_PARAMS OM_NO_OP

#define evScannerPoweredUp_CONSTRUCTOR RiC_Create_evScannerPoweredUp()

#define reqReadKey_SERIALIZE OM_NO_OP

#define reqReadKey_UNSERIALIZE OM_NO_OP

#define reqReadKey_DECLARE_PARAMS OM_NO_OP

#define reqReadKey_CONSTRUCTOR RiC_Create_reqReadKey()

#define reqTurnOnSensorsPower_SERIALIZE OM_NO_OP

#define reqTurnOnSensorsPower_UNSERIALIZE OM_NO_OP

#define reqTurnOnSensorsPower_DECLARE_PARAMS OM_NO_OP

#define reqTurnOnSensorsPower_CONSTRUCTOR RiC_Create_reqTurnOnSensorsPower()

#define reqTurnOffSensorsPower_SERIALIZE OM_NO_OP

#define reqTurnOffSensorsPower_UNSERIALIZE OM_NO_OP

#define reqTurnOffSensorsPower_DECLARE_PARAMS OM_NO_OP

#define reqTurnOffSensorsPower_CONSTRUCTOR RiC_Create_reqTurnOffSensorsPower()

#define reqCheckSensors_SERIALIZE OM_NO_OP

#define reqCheckSensors_UNSERIALIZE OM_NO_OP

#define reqCheckSensors_DECLARE_PARAMS OM_NO_OP

#define reqCheckSensors_CONSTRUCTOR RiC_Create_reqCheckSensors()

#define reqReadSensors_SERIALIZE OM_NO_OP

#define reqReadSensors_UNSERIALIZE OM_NO_OP

#define reqReadSensors_DECLARE_PARAMS OM_NO_OP

#define reqReadSensors_CONSTRUCTOR RiC_Create_reqReadSensors()

#define reqTurnOnScanner_SERIALIZE OM_NO_OP

#define reqTurnOnScanner_UNSERIALIZE OM_NO_OP

#define reqTurnOnScanner_DECLARE_PARAMS OM_NO_OP

#define reqTurnOnScanner_CONSTRUCTOR RiC_Create_reqTurnOnScanner()

#define reqTurnOffScanner_SERIALIZE OM_NO_OP

#define reqTurnOffScanner_UNSERIALIZE OM_NO_OP

#define reqTurnOffScanner_DECLARE_PARAMS OM_NO_OP

#define reqTurnOffScanner_CONSTRUCTOR RiC_Create_reqTurnOffScanner()

#define reqAcquisitionModeActive_SERIALIZE OM_NO_OP

#define reqAcquisitionModeActive_UNSERIALIZE OM_NO_OP

#define reqAcquisitionModeActive_DECLARE_PARAMS OM_NO_OP

#define reqAcquisitionModeActive_CONSTRUCTOR RiC_Create_reqAcquisitionModeActive()

#define reqIdleModeActive_SERIALIZE OM_NO_OP

#define reqIdleModeActive_UNSERIALIZE OM_NO_OP

#define reqIdleModeActive_DECLARE_PARAMS OM_NO_OP

#define reqIdleModeActive_CONSTRUCTOR RiC_Create_reqIdleModeActive()
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

void InterfacesPkg_OMEvent_Init( void ) {
    ARC_INIT_EVENT(evWakeUpButtonPressed);
    ARC_INIT_EVENT(evKeyApplied);
    ARC_INIT_EVENT(evSensorsStatus);
    ARC_INIT_EVENT(evSensorsPoweredUp);
    ARC_INIT_EVENT(evSensorsReaded);
    ARC_INIT_EVENT(evKeyReaded);
    ARC_INIT_EVENT(evMotionDetected);
    ARC_INIT_EVENT(evStartScanner);
    ARC_INIT_EVENT(evScannerPoweredUp);
    ARC_INIT_EVENT(reqReadKey);
    ARC_INIT_EVENT(reqTurnOnSensorsPower);
    ARC_INIT_EVENT(reqTurnOffSensorsPower);
    ARC_INIT_EVENT(reqCheckSensors);
    ARC_INIT_EVENT(reqReadSensors);
    ARC_INIT_EVENT(reqTurnOnScanner);
    ARC_INIT_EVENT(reqTurnOffScanner);
    ARC_INIT_EVENT(reqAcquisitionModeActive);
    ARC_INIT_EVENT(reqIdleModeActive);
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
evWakeUpButtonPressed * RiC_Create_evWakeUpButtonPressed( void ) {
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
evKeyApplied * RiC_Create_evKeyApplied( void ) {
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
evSensorsPoweredUp * RiC_Create_evSensorsPoweredUp( void ) {
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
evSensorsReaded * RiC_Create_evSensorsReaded( void ) {
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

OM_INSTRUMENT_EVENT(evMotionDetected, InterfacesPkg, InterfacesPkg, evMotionDetected(), me)

void evMotionDetected_Init(evMotionDetected* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evMotionDetected)
    RiCEvent_init(&(me->ric_event), evMotionDetected_InterfacesPkg_id, NULL);
    RiCEvent_setDeleteAfterConsume(&(me->ric_event), FALSE);
    RIC_SET_EVENT_DESTROY_OP(me, evMotionDetected);
}

void evMotionDetected_Cleanup(evMotionDetected* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evMotionDetected * RiC_Create_evMotionDetected( void ) {
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

OM_INSTRUMENT_EVENT(evStartScanner, InterfacesPkg, InterfacesPkg, evStartScanner(), me)

void evStartScanner_Init(evStartScanner* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evStartScanner)
    RiCEvent_init(&(me->ric_event), evStartScanner_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evStartScanner);
}

void evStartScanner_Cleanup(evStartScanner* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evStartScanner * RiC_Create_evStartScanner( void ) {
    evStartScanner* me = (evStartScanner*) malloc(sizeof(evStartScanner));
    if(me!=NULL)
        {
            evStartScanner_Init(me);
        }
    return me;
}

void RiC_Destroy_evStartScanner(evStartScanner* const me) {
    if(me!=NULL)
        {
            evStartScanner_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evScannerPoweredUp, InterfacesPkg, InterfacesPkg, evScannerPoweredUp(), me)

void evScannerPoweredUp_Init(evScannerPoweredUp* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evScannerPoweredUp)
    RiCEvent_init(&(me->ric_event), evScannerPoweredUp_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evScannerPoweredUp);
}

void evScannerPoweredUp_Cleanup(evScannerPoweredUp* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evScannerPoweredUp * RiC_Create_evScannerPoweredUp( void ) {
    evScannerPoweredUp* me = (evScannerPoweredUp*) malloc(sizeof(evScannerPoweredUp));
    if(me!=NULL)
        {
            evScannerPoweredUp_Init(me);
        }
    return me;
}

void RiC_Destroy_evScannerPoweredUp(evScannerPoweredUp* const me) {
    if(me!=NULL)
        {
            evScannerPoweredUp_Cleanup(me);
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
reqReadKey * RiC_Create_reqReadKey( void ) {
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
reqTurnOnSensorsPower * RiC_Create_reqTurnOnSensorsPower( void ) {
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
reqTurnOffSensorsPower * RiC_Create_reqTurnOffSensorsPower( void ) {
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
reqCheckSensors * RiC_Create_reqCheckSensors( void ) {
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
reqReadSensors * RiC_Create_reqReadSensors( void ) {
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
reqTurnOnScanner * RiC_Create_reqTurnOnScanner( void ) {
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
reqTurnOffScanner * RiC_Create_reqTurnOffScanner( void ) {
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

OM_INSTRUMENT_EVENT(reqAcquisitionModeActive, InterfacesPkg, InterfacesPkg, reqAcquisitionModeActive(), me)

void reqAcquisitionModeActive_Init(reqAcquisitionModeActive* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, reqAcquisitionModeActive)
    RiCEvent_init(&(me->ric_event), reqAcquisitionModeActive_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, reqAcquisitionModeActive);
}

void reqAcquisitionModeActive_Cleanup(reqAcquisitionModeActive* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
reqAcquisitionModeActive * RiC_Create_reqAcquisitionModeActive( void ) {
    reqAcquisitionModeActive* me = (reqAcquisitionModeActive*) malloc(sizeof(reqAcquisitionModeActive));
    if(me!=NULL)
        {
            reqAcquisitionModeActive_Init(me);
        }
    return me;
}

void RiC_Destroy_reqAcquisitionModeActive(reqAcquisitionModeActive* const me) {
    if(me!=NULL)
        {
            reqAcquisitionModeActive_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(reqIdleModeActive, InterfacesPkg, InterfacesPkg, reqIdleModeActive(), me)

void reqIdleModeActive_Init(reqIdleModeActive* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, reqIdleModeActive)
    RiCEvent_init(&(me->ric_event), reqIdleModeActive_InterfacesPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, reqIdleModeActive);
}

void reqIdleModeActive_Cleanup(reqIdleModeActive* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
reqIdleModeActive * RiC_Create_reqIdleModeActive( void ) {
    reqIdleModeActive* me = (reqIdleModeActive*) malloc(sizeof(reqIdleModeActive));
    if(me!=NULL)
        {
            reqIdleModeActive_Init(me);
        }
    return me;
}

void RiC_Destroy_reqIdleModeActive(reqIdleModeActive* const me) {
    if(me!=NULL)
        {
            reqIdleModeActive_Cleanup(me);
        }
    free(me);
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\InterfacesPkg.c
*********************************************************************/
