/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc2 
	Configuration 	: Animate
	Model Element	: Uc2DataLoggingAndIntrusionDetectionPkg
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc2\Animate\Uc2DataLoggingAndIntrusionDetectionPkg.h
*********************************************************************/

#ifndef Uc2DataLoggingAndIntrusionDetectionPkg_H
#define Uc2DataLoggingAndIntrusionDetectionPkg_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
#define evStartIntTimer_Uc2DataLoggingAndIntrusionDetectionPkg_FunctionalAnalysisPkg_id 19201

#define evIntTimerExpired_Uc2DataLoggingAndIntrusionDetectionPkg_FunctionalAnalysisPkg_id 19202

#define evSynced_Uc2DataLoggingAndIntrusionDetectionPkg_FunctionalAnalysisPkg_id 19203
/*#]*/

/*## package FunctionalAnalysisPkg::Uc2DataLoggingAndIntrusionDetectionPkg */


#ifdef _OMINSTRUMENT
void Uc2DataLoggingAndIntrusionDetectionPkg_OMEvent_Init( void );
#endif /* _OMINSTRUMENT */

typedef struct evStartIntTimer evStartIntTimer;
/*## event evStartIntTimer() */
struct evStartIntTimer {
    RiCEvent ric_event;
};

/*## auto_generated */
void evStartIntTimer_Init(evStartIntTimer* const me);

/*## auto_generated */
void evStartIntTimer_Cleanup(evStartIntTimer* const me);

/*#[ ignore */
evStartIntTimer * RiC_Create_evStartIntTimer( void );

void RiC_Destroy_evStartIntTimer(evStartIntTimer* const me);
/*#]*/

typedef struct evIntTimerExpired evIntTimerExpired;
/*## event evIntTimerExpired() */
struct evIntTimerExpired {
    RiCEvent ric_event;
};

/*## auto_generated */
void evIntTimerExpired_Init(evIntTimerExpired* const me);

/*## auto_generated */
void evIntTimerExpired_Cleanup(evIntTimerExpired* const me);

/*#[ ignore */
evIntTimerExpired * RiC_Create_evIntTimerExpired( void );

void RiC_Destroy_evIntTimerExpired(evIntTimerExpired* const me);
/*#]*/

typedef struct evSynced evSynced;
/*## event evSynced() */
struct evSynced {
    RiCEvent ric_event;
};

/*## auto_generated */
void evSynced_Init(evSynced* const me);

/*## auto_generated */
void evSynced_Cleanup(evSynced* const me);

/*#[ ignore */
evSynced * RiC_Create_evSynced( void );

void RiC_Destroy_evSynced(evSynced* const me);
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecutionUc2\Animate\Uc2DataLoggingAndIntrusionDetectionPkg.h
*********************************************************************/
