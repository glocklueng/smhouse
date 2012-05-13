/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc2 
	Configuration 	: Animate
	Model Element	: Uc2DataLoggingAndIntrusionDetectionPkg
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc2\Animate\Uc2DataLoggingAndIntrusionDetectionPkg.c
*********************************************************************/

/*## auto_generated */
#include "Uc2DataLoggingAndIntrusionDetectionPkg.h"
/*## auto_generated */
#include "Uc_Uc2DataLoggingAndIntrusionDetection.h"
/*#[ ignore */
#define evStartIntTimer_SERIALIZE OM_NO_OP

#define evStartIntTimer_UNSERIALIZE OM_NO_OP

#define evStartIntTimer_DECLARE_PARAMS OM_NO_OP

#define evStartIntTimer_CONSTRUCTOR RiC_Create_evStartIntTimer()

#define evIntTimerExpired_SERIALIZE OM_NO_OP

#define evIntTimerExpired_UNSERIALIZE OM_NO_OP

#define evIntTimerExpired_DECLARE_PARAMS OM_NO_OP

#define evIntTimerExpired_CONSTRUCTOR RiC_Create_evIntTimerExpired()

#define evSynced_SERIALIZE OM_NO_OP

#define evSynced_UNSERIALIZE OM_NO_OP

#define evSynced_DECLARE_PARAMS OM_NO_OP

#define evSynced_CONSTRUCTOR RiC_Create_evSynced()
/*#]*/

/*## package FunctionalAnalysisPkg::Uc2DataLoggingAndIntrusionDetectionPkg */


#ifdef _OMINSTRUMENT
/*#[ ignore */
static const ARCSerGVtbl FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_instrumentVtbl = {
    NULL,
    NULL
};
/*#]*/

OM_INSTRUMENT_PACKAGE(FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg, FunctionalAnalysisPkg::Uc2DataLoggingAndIntrusionDetectionPkg, &FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_instrumentVtbl)

void Uc2DataLoggingAndIntrusionDetectionPkg_OMEvent_Init( void ) {
    ARC_INIT_EVENT(evStartIntTimer);
    ARC_INIT_EVENT(evIntTimerExpired);
    ARC_INIT_EVENT(evSynced);
}
#endif /* _OMINSTRUMENT */

OM_INSTRUMENT_EVENT(evStartIntTimer, Uc2DataLoggingAndIntrusionDetectionPkg, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg, evStartIntTimer(), me)

void evStartIntTimer_Init(evStartIntTimer* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evStartIntTimer)
    RiCEvent_init(&(me->ric_event), evStartIntTimer_Uc2DataLoggingAndIntrusionDetectionPkg_FunctionalAnalysisPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evStartIntTimer);
}

void evStartIntTimer_Cleanup(evStartIntTimer* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evStartIntTimer * RiC_Create_evStartIntTimer( void ) {
    evStartIntTimer* me = (evStartIntTimer*) malloc(sizeof(evStartIntTimer));
    if(me!=NULL)
        {
            evStartIntTimer_Init(me);
        }
    return me;
}

void RiC_Destroy_evStartIntTimer(evStartIntTimer* const me) {
    if(me!=NULL)
        {
            evStartIntTimer_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evIntTimerExpired, Uc2DataLoggingAndIntrusionDetectionPkg, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg, evIntTimerExpired(), me)

void evIntTimerExpired_Init(evIntTimerExpired* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evIntTimerExpired)
    RiCEvent_init(&(me->ric_event), evIntTimerExpired_Uc2DataLoggingAndIntrusionDetectionPkg_FunctionalAnalysisPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evIntTimerExpired);
}

void evIntTimerExpired_Cleanup(evIntTimerExpired* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evIntTimerExpired * RiC_Create_evIntTimerExpired( void ) {
    evIntTimerExpired* me = (evIntTimerExpired*) malloc(sizeof(evIntTimerExpired));
    if(me!=NULL)
        {
            evIntTimerExpired_Init(me);
        }
    return me;
}

void RiC_Destroy_evIntTimerExpired(evIntTimerExpired* const me) {
    if(me!=NULL)
        {
            evIntTimerExpired_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evSynced, Uc2DataLoggingAndIntrusionDetectionPkg, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg, evSynced(), me)

void evSynced_Init(evSynced* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evSynced)
    RiCEvent_init(&(me->ric_event), evSynced_Uc2DataLoggingAndIntrusionDetectionPkg_FunctionalAnalysisPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evSynced);
}

void evSynced_Cleanup(evSynced* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evSynced * RiC_Create_evSynced( void ) {
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
	File Path	: ModelExecutionUc2\Animate\Uc2DataLoggingAndIntrusionDetectionPkg.c
*********************************************************************/
