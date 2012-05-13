/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: InterfacesPkg
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\InterfacesPkg.h
*********************************************************************/

#ifndef InterfacesPkg_H
#define InterfacesPkg_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
#define evWakeUpButtonPressed_InterfacesPkg_id 24601

#define evKeyApplied_InterfacesPkg_id 24602

#define reqReadKey_InterfacesPkg_id 24603

#define reqTurnOnSensorsPower_InterfacesPkg_id 24604

#define reqCheckSensors_InterfacesPkg_id 24605

#define reqTurnOffSensorsPower_InterfacesPkg_id 24606

#define evSensorsPoweredUp_InterfacesPkg_id 24607

#define evSensorsStatus_InterfacesPkg_id 24608

#define evKeyReaded_InterfacesPkg_id 24609

#define reqReadSensors_InterfacesPkg_id 24610

#define evSensorsReaded_InterfacesPkg_id 24611

#define evMotionDetected_InterfacesPkg_id 24612

#define reqTurnOnScanner_InterfacesPkg_id 24613

#define reqTurnOffScanner_InterfacesPkg_id 24614

#define evSynced_InterfacesPkg_id 24615
/*#]*/

/*## package InterfacesPkg */


#ifdef _OMINSTRUMENT
void InterfacesPkg_OMEvent_Init(void);
#endif /* _OMINSTRUMENT */

typedef struct evWakeUpButtonPressed evWakeUpButtonPressed;
/*## event evWakeUpButtonPressed() */
struct evWakeUpButtonPressed {
    RiCEvent ric_event;
};

/*## auto_generated */
void evWakeUpButtonPressed_Init(evWakeUpButtonPressed* const me);

/*## auto_generated */
void evWakeUpButtonPressed_Cleanup(evWakeUpButtonPressed* const me);

/*#[ ignore */
evWakeUpButtonPressed * RiC_Create_evWakeUpButtonPressed(void);

void RiC_Destroy_evWakeUpButtonPressed(evWakeUpButtonPressed* const me);
/*#]*/

typedef struct evKeyApplied evKeyApplied;
/*## event evKeyApplied() */
struct evKeyApplied {
    RiCEvent ric_event;
};

/*## auto_generated */
void evKeyApplied_Init(evKeyApplied* const me);

/*## auto_generated */
void evKeyApplied_Cleanup(evKeyApplied* const me);

/*#[ ignore */
evKeyApplied * RiC_Create_evKeyApplied(void);

void RiC_Destroy_evKeyApplied(evKeyApplied* const me);
/*#]*/

typedef struct reqReadKey reqReadKey;
/*## event reqReadKey() */
struct reqReadKey {
    RiCEvent ric_event;
};

/*## auto_generated */
void reqReadKey_Init(reqReadKey* const me);

/*## auto_generated */
void reqReadKey_Cleanup(reqReadKey* const me);

/*#[ ignore */
reqReadKey * RiC_Create_reqReadKey(void);

void RiC_Destroy_reqReadKey(reqReadKey* const me);
/*#]*/

typedef struct reqTurnOnSensorsPower reqTurnOnSensorsPower;
/*## event reqTurnOnSensorsPower() */
struct reqTurnOnSensorsPower {
    RiCEvent ric_event;
};

/*## auto_generated */
void reqTurnOnSensorsPower_Init(reqTurnOnSensorsPower* const me);

/*## auto_generated */
void reqTurnOnSensorsPower_Cleanup(reqTurnOnSensorsPower* const me);

/*#[ ignore */
reqTurnOnSensorsPower * RiC_Create_reqTurnOnSensorsPower(void);

void RiC_Destroy_reqTurnOnSensorsPower(reqTurnOnSensorsPower* const me);
/*#]*/

typedef struct reqCheckSensors reqCheckSensors;
/*## event reqCheckSensors() */
struct reqCheckSensors {
    RiCEvent ric_event;
};

/*## auto_generated */
void reqCheckSensors_Init(reqCheckSensors* const me);

/*## auto_generated */
void reqCheckSensors_Cleanup(reqCheckSensors* const me);

/*#[ ignore */
reqCheckSensors * RiC_Create_reqCheckSensors(void);

void RiC_Destroy_reqCheckSensors(reqCheckSensors* const me);
/*#]*/

typedef struct reqTurnOffSensorsPower reqTurnOffSensorsPower;
/*## event reqTurnOffSensorsPower() */
struct reqTurnOffSensorsPower {
    RiCEvent ric_event;
};

/*## auto_generated */
void reqTurnOffSensorsPower_Init(reqTurnOffSensorsPower* const me);

/*## auto_generated */
void reqTurnOffSensorsPower_Cleanup(reqTurnOffSensorsPower* const me);

/*#[ ignore */
reqTurnOffSensorsPower * RiC_Create_reqTurnOffSensorsPower(void);

void RiC_Destroy_reqTurnOffSensorsPower(reqTurnOffSensorsPower* const me);
/*#]*/

typedef struct evSensorsPoweredUp evSensorsPoweredUp;
/*## event evSensorsPoweredUp() */
struct evSensorsPoweredUp {
    RiCEvent ric_event;
};

/*## auto_generated */
void evSensorsPoweredUp_Init(evSensorsPoweredUp* const me);

/*## auto_generated */
void evSensorsPoweredUp_Cleanup(evSensorsPoweredUp* const me);

/*#[ ignore */
evSensorsPoweredUp * RiC_Create_evSensorsPoweredUp(void);

void RiC_Destroy_evSensorsPoweredUp(evSensorsPoweredUp* const me);
/*#]*/

typedef struct evSensorsStatus evSensorsStatus;
/*## event evSensorsStatus(RiCBoolean) */
struct evSensorsStatus {
    RiCEvent ric_event;
    RiCBoolean Failure;		/*## auto_generated */
};

/*## auto_generated */
void evSensorsStatus_Init(evSensorsStatus* const me, RiCBoolean p_Failure);

/*## auto_generated */
void evSensorsStatus_Cleanup(evSensorsStatus* const me);

/*#[ ignore */
evSensorsStatus * RiC_Create_evSensorsStatus(RiCBoolean p_Failure);

void RiC_Destroy_evSensorsStatus(evSensorsStatus* const me);
/*#]*/

typedef struct evKeyReaded evKeyReaded;
/*## event evKeyReaded(char*) */
struct evKeyReaded {
    RiCEvent ric_event;
    char* Key;		/*## auto_generated */
};

/*## auto_generated */
void evKeyReaded_Init(evKeyReaded* const me, char* p_Key);

/*## auto_generated */
void evKeyReaded_Cleanup(evKeyReaded* const me);

/*#[ ignore */
evKeyReaded * RiC_Create_evKeyReaded(char* p_Key);

void RiC_Destroy_evKeyReaded(evKeyReaded* const me);
/*#]*/

typedef struct reqReadSensors reqReadSensors;
/*## event reqReadSensors() */
struct reqReadSensors {
    RiCEvent ric_event;
};

/*## auto_generated */
void reqReadSensors_Init(reqReadSensors* const me);

/*## auto_generated */
void reqReadSensors_Cleanup(reqReadSensors* const me);

/*#[ ignore */
reqReadSensors * RiC_Create_reqReadSensors(void);

void RiC_Destroy_reqReadSensors(reqReadSensors* const me);
/*#]*/

typedef struct evSensorsReaded evSensorsReaded;
/*## event evSensorsReaded() */
struct evSensorsReaded {
    RiCEvent ric_event;
};

/*## auto_generated */
void evSensorsReaded_Init(evSensorsReaded* const me);

/*## auto_generated */
void evSensorsReaded_Cleanup(evSensorsReaded* const me);

/*#[ ignore */
evSensorsReaded * RiC_Create_evSensorsReaded(void);

void RiC_Destroy_evSensorsReaded(evSensorsReaded* const me);
/*#]*/

typedef struct evMotionDetected evMotionDetected;
/*## event evMotionDetected() */
struct evMotionDetected {
    RiCEvent ric_event;
};

/*## auto_generated */
void evMotionDetected_Init(evMotionDetected* const me);

/*## auto_generated */
void evMotionDetected_Cleanup(evMotionDetected* const me);

/*#[ ignore */
evMotionDetected * RiC_Create_evMotionDetected(void);

void RiC_Destroy_evMotionDetected(evMotionDetected* const me);
/*#]*/

typedef struct reqTurnOnScanner reqTurnOnScanner;
/*## event reqTurnOnScanner() */
struct reqTurnOnScanner {
    RiCEvent ric_event;
};

/*## auto_generated */
void reqTurnOnScanner_Init(reqTurnOnScanner* const me);

/*## auto_generated */
void reqTurnOnScanner_Cleanup(reqTurnOnScanner* const me);

/*#[ ignore */
reqTurnOnScanner * RiC_Create_reqTurnOnScanner(void);

void RiC_Destroy_reqTurnOnScanner(reqTurnOnScanner* const me);
/*#]*/

typedef struct reqTurnOffScanner reqTurnOffScanner;
/*## event reqTurnOffScanner() */
struct reqTurnOffScanner {
    RiCEvent ric_event;
};

/*## auto_generated */
void reqTurnOffScanner_Init(reqTurnOffScanner* const me);

/*## auto_generated */
void reqTurnOffScanner_Cleanup(reqTurnOffScanner* const me);

/*#[ ignore */
reqTurnOffScanner * RiC_Create_reqTurnOffScanner(void);

void RiC_Destroy_reqTurnOffScanner(reqTurnOffScanner* const me);
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
evSynced * RiC_Create_evSynced(void);

void RiC_Destroy_evSynced(evSynced* const me);
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecution\Animate\InterfacesPkg.h
*********************************************************************/
