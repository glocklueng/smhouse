/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: Uc1ArmingLoggerPkg
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc1\Animate\Uc1ArmingLoggerPkg.h
*********************************************************************/

#ifndef Uc1ArmingLoggerPkg_H
#define Uc1ArmingLoggerPkg_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
#define evFault_Uc1ArmingLoggerPkg_FunctionalAnalysisPkg_id 25801

#define evAcquisitionStart_Uc1ArmingLoggerPkg_FunctionalAnalysisPkg_id 25802
/*#]*/

/*## package FunctionalAnalysisPkg::Uc1ArmingLoggerPkg */


#ifdef _OMINSTRUMENT
void Uc1ArmingLoggerPkg_OMEvent_Init( void );
#endif /* _OMINSTRUMENT */

typedef struct evFault evFault;
/*## event evFault() */
struct evFault {
    RiCEvent ric_event;
};

/*## auto_generated */
void evFault_Init(evFault* const me);

/*## auto_generated */
void evFault_Cleanup(evFault* const me);

/*#[ ignore */
evFault * RiC_Create_evFault( void );

void RiC_Destroy_evFault(evFault* const me);
/*#]*/

typedef struct evAcquisitionStart evAcquisitionStart;
/*## event evAcquisitionStart() */
struct evAcquisitionStart {
    RiCEvent ric_event;
};

/*## auto_generated */
void evAcquisitionStart_Init(evAcquisitionStart* const me);

/*## auto_generated */
void evAcquisitionStart_Cleanup(evAcquisitionStart* const me);

/*#[ ignore */
evAcquisitionStart * RiC_Create_evAcquisitionStart( void );

void RiC_Destroy_evAcquisitionStart(evAcquisitionStart* const me);
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\Uc1ArmingLoggerPkg.h
*********************************************************************/
