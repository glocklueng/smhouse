/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: ActorPkg
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\ActorPkg.h
*********************************************************************/

#ifndef ActorPkg_H
#define ActorPkg_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
#define TurnOnDevice_ActorPkg_id 5001

#define ApplyElectronicKey_ActorPkg_id 5002
/*#]*/

/*## package ActorPkg */


#ifdef _OMINSTRUMENT
void ActorPkg_OMEvent_Init(void);
#endif /* _OMINSTRUMENT */

typedef struct TurnOnDevice TurnOnDevice;
/*## event TurnOnDevice() */
struct TurnOnDevice {
    RiCEvent ric_event;
};

/*## auto_generated */
void TurnOnDevice_Init(TurnOnDevice* const me);

/*## auto_generated */
void TurnOnDevice_Cleanup(TurnOnDevice* const me);

/*#[ ignore */
TurnOnDevice * RiC_Create_TurnOnDevice(void);

void RiC_Destroy_TurnOnDevice(TurnOnDevice* const me);
/*#]*/

typedef struct ApplyElectronicKey ApplyElectronicKey;
/*## event ApplyElectronicKey() */
struct ApplyElectronicKey {
    RiCEvent ric_event;
};

/*## auto_generated */
void ApplyElectronicKey_Init(ApplyElectronicKey* const me);

/*## auto_generated */
void ApplyElectronicKey_Cleanup(ApplyElectronicKey* const me);

/*#[ ignore */
ApplyElectronicKey * RiC_Create_ApplyElectronicKey(void);

void RiC_Destroy_ApplyElectronicKey(ApplyElectronicKey* const me);
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecution\Animate\ActorPkg.h
*********************************************************************/
