/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: ActorPkg
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc1\Animate\ActorPkg.c
*********************************************************************/

/*## auto_generated */
#include "ActorPkg.h"
/*#[ ignore */
#define TurnOnDevice_SERIALIZE OM_NO_OP

#define TurnOnDevice_UNSERIALIZE OM_NO_OP

#define TurnOnDevice_DECLARE_PARAMS OM_NO_OP

#define TurnOnDevice_CONSTRUCTOR RiC_Create_TurnOnDevice()

#define ApplyElectronicKey_SERIALIZE OM_NO_OP

#define ApplyElectronicKey_UNSERIALIZE OM_NO_OP

#define ApplyElectronicKey_DECLARE_PARAMS OM_NO_OP

#define ApplyElectronicKey_CONSTRUCTOR RiC_Create_ApplyElectronicKey()

#define MotionDetected_SERIALIZE OM_NO_OP

#define MotionDetected_UNSERIALIZE OM_NO_OP

#define MotionDetected_DECLARE_PARAMS OM_NO_OP

#define MotionDetected_CONSTRUCTOR RiC_Create_MotionDetected()
/*#]*/

/*## package ActorPkg */


#ifdef _OMINSTRUMENT
/*#[ ignore */
static const ARCSerGVtbl ActorPkg_instrumentVtbl = {
    NULL,
    NULL
};
/*#]*/

OM_INSTRUMENT_PACKAGE(ActorPkg, ActorPkg, &ActorPkg_instrumentVtbl)

void ActorPkg_OMEvent_Init( void ) {
    ARC_INIT_EVENT(TurnOnDevice);
    ARC_INIT_EVENT(ApplyElectronicKey);
    ARC_INIT_EVENT(MotionDetected);
}
#endif /* _OMINSTRUMENT */

OM_INSTRUMENT_EVENT(TurnOnDevice, ActorPkg, ActorPkg, TurnOnDevice(), me)

void TurnOnDevice_Init(TurnOnDevice* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, TurnOnDevice)
    RiCEvent_init(&(me->ric_event), TurnOnDevice_ActorPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, TurnOnDevice);
}

void TurnOnDevice_Cleanup(TurnOnDevice* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
TurnOnDevice * RiC_Create_TurnOnDevice( void ) {
    TurnOnDevice* me = (TurnOnDevice*) malloc(sizeof(TurnOnDevice));
    if(me!=NULL)
        {
            TurnOnDevice_Init(me);
        }
    return me;
}

void RiC_Destroy_TurnOnDevice(TurnOnDevice* const me) {
    if(me!=NULL)
        {
            TurnOnDevice_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(ApplyElectronicKey, ActorPkg, ActorPkg, ApplyElectronicKey(), me)

void ApplyElectronicKey_Init(ApplyElectronicKey* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, ApplyElectronicKey)
    RiCEvent_init(&(me->ric_event), ApplyElectronicKey_ActorPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, ApplyElectronicKey);
}

void ApplyElectronicKey_Cleanup(ApplyElectronicKey* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
ApplyElectronicKey * RiC_Create_ApplyElectronicKey( void ) {
    ApplyElectronicKey* me = (ApplyElectronicKey*) malloc(sizeof(ApplyElectronicKey));
    if(me!=NULL)
        {
            ApplyElectronicKey_Init(me);
        }
    return me;
}

void RiC_Destroy_ApplyElectronicKey(ApplyElectronicKey* const me) {
    if(me!=NULL)
        {
            ApplyElectronicKey_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(MotionDetected, ActorPkg, ActorPkg, MotionDetected(), me)

void MotionDetected_Init(MotionDetected* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, MotionDetected)
    RiCEvent_init(&(me->ric_event), MotionDetected_ActorPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, MotionDetected);
}

void MotionDetected_Cleanup(MotionDetected* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
MotionDetected * RiC_Create_MotionDetected( void ) {
    MotionDetected* me = (MotionDetected*) malloc(sizeof(MotionDetected));
    if(me!=NULL)
        {
            MotionDetected_Init(me);
        }
    return me;
}

void RiC_Destroy_MotionDetected(MotionDetected* const me) {
    if(me!=NULL)
        {
            MotionDetected_Cleanup(me);
        }
    free(me);
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\ActorPkg.c
*********************************************************************/
