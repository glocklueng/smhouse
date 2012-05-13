/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecutionUc1\Animate\Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg.h
*********************************************************************/

#ifndef Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_H
#define Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc2DataLoggingAndIntrusionDetectionPkg.h"
/*## classInstance itsDriver */
struct Driver;

/*## classInstance itsScanner */
struct Scanner;

/*## classInstance itsSensors */
struct Sensors;

/*## classInstance itsUc_Uc2DataLoggingAndIntrusionDetection */
struct Uc_Uc2DataLoggingAndIntrusionDetection;

/*## package FunctionalAnalysisPkg::Uc2DataLoggingAndIntrusionDetectionPkg::Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg */


/*## classInstance itsDriver */
extern struct Driver itsDriver;

/*## classInstance itsScanner */
extern struct Scanner itsScanner;

/*## classInstance itsSensors */
extern struct Sensors itsSensors;

/*## classInstance itsUc_Uc2DataLoggingAndIntrusionDetection */
extern struct Uc_Uc2DataLoggingAndIntrusionDetection itsUc_Uc2DataLoggingAndIntrusionDetection;

/*## auto_generated */
void Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_OMInitializer_Init(void);

/*## auto_generated */
void Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_OMInitializer_Cleanup(void);

/*## auto_generated */
void Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_initRelations(void);

/*## auto_generated */
RiCBoolean Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_startBehavior(void);

#endif
/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg.h
*********************************************************************/
