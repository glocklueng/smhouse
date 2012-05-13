/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: Uc1ArmingLoggerPkg
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc1\Animate\Uc1ArmingLoggerPkg.c
*********************************************************************/

/*## auto_generated */
#include "Uc1ArmingLoggerPkg.h"
/*## auto_generated */
#include "Uc_Uc1ArmingLogger.h"
/*#[ ignore */
#define evFault_SERIALIZE OM_NO_OP

#define evFault_UNSERIALIZE OM_NO_OP

#define evFault_DECLARE_PARAMS OM_NO_OP

#define evFault_CONSTRUCTOR RiC_Create_evFault()

#define evAcquisitionStart_SERIALIZE OM_NO_OP

#define evAcquisitionStart_UNSERIALIZE OM_NO_OP

#define evAcquisitionStart_DECLARE_PARAMS OM_NO_OP

#define evAcquisitionStart_CONSTRUCTOR RiC_Create_evAcquisitionStart()
/*#]*/

/*## package FunctionalAnalysisPkg::Uc1ArmingLoggerPkg */


#ifdef _OMINSTRUMENT
/*#[ ignore */
static const ARCSerGVtbl FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_instrumentVtbl = {
    NULL,
    NULL
};
/*#]*/

OM_INSTRUMENT_PACKAGE(FunctionalAnalysisPkg_Uc1ArmingLoggerPkg, FunctionalAnalysisPkg::Uc1ArmingLoggerPkg, &FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_instrumentVtbl)

void Uc1ArmingLoggerPkg_OMEvent_Init( void ) {
    ARC_INIT_EVENT(evFault);
    ARC_INIT_EVENT(evAcquisitionStart);
}
#endif /* _OMINSTRUMENT */

OM_INSTRUMENT_EVENT(evFault, Uc1ArmingLoggerPkg, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg, evFault(), me)

void evFault_Init(evFault* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evFault)
    RiCEvent_init(&(me->ric_event), evFault_Uc1ArmingLoggerPkg_FunctionalAnalysisPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evFault);
}

void evFault_Cleanup(evFault* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evFault * RiC_Create_evFault( void ) {
    evFault* me = (evFault*) malloc(sizeof(evFault));
    if(me!=NULL)
        {
            evFault_Init(me);
        }
    return me;
}

void RiC_Destroy_evFault(evFault* const me) {
    if(me!=NULL)
        {
            evFault_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evAcquisitionStart, Uc1ArmingLoggerPkg, FunctionalAnalysisPkg_Uc1ArmingLoggerPkg, evAcquisitionStart(), me)

void evAcquisitionStart_Init(evAcquisitionStart* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evAcquisitionStart)
    RiCEvent_init(&(me->ric_event), evAcquisitionStart_Uc1ArmingLoggerPkg_FunctionalAnalysisPkg_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evAcquisitionStart);
}

void evAcquisitionStart_Cleanup(evAcquisitionStart* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evAcquisitionStart * RiC_Create_evAcquisitionStart( void ) {
    evAcquisitionStart* me = (evAcquisitionStart*) malloc(sizeof(evAcquisitionStart));
    if(me!=NULL)
        {
            evAcquisitionStart_Init(me);
        }
    return me;
}

void RiC_Destroy_evAcquisitionStart(evAcquisitionStart* const me) {
    if(me!=NULL)
        {
            evAcquisitionStart_Cleanup(me);
        }
    free(me);
}
/*#]*/

/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\Uc1ArmingLoggerPkg.c
*********************************************************************/
