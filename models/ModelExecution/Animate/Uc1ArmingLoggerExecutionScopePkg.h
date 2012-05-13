/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Uc1ArmingLoggerExecutionScopePkg
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\Uc1ArmingLoggerExecutionScopePkg.h
*********************************************************************/

#ifndef Uc1ArmingLoggerExecutionScopePkg_H
#define Uc1ArmingLoggerExecutionScopePkg_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc1ArmingLoggerPkg.h"
/*## classInstance itsAdmin */
struct Admin;

/*## classInstance itsDriver */
struct Driver;

/*## classInstance itsScanner */
struct Scanner;

/*## classInstance itsSensors */
struct Sensors;

/*## classInstance itsUc_Uc1ArmingLogger */
struct Uc_Uc1ArmingLogger;

/*## package FunctionalAnalysisPkg::Uc1ArmingLoggerPkg::Uc1ArmingLoggerExecutionScopePkg */


/*## classInstance itsAdmin */
extern struct Admin itsAdmin;

/*## classInstance itsDriver */
extern struct Driver itsDriver;

/*## classInstance itsScanner */
extern struct Scanner itsScanner;

/*## classInstance itsSensors */
extern struct Sensors itsSensors;

/*## classInstance itsUc_Uc1ArmingLogger */
extern struct Uc_Uc1ArmingLogger itsUc_Uc1ArmingLogger;

/*## auto_generated */
void Uc1ArmingLoggerExecutionScopePkg_OMInitializer_Init(void);

/*## auto_generated */
void Uc1ArmingLoggerExecutionScopePkg_OMInitializer_Cleanup(void);

/*## auto_generated */
void Uc1ArmingLoggerExecutionScopePkg_initRelations(void);

/*## auto_generated */
RiCBoolean Uc1ArmingLoggerExecutionScopePkg_startBehavior(void);

#endif
/*********************************************************************
	File Path	: ModelExecution\Animate\Uc1ArmingLoggerExecutionScopePkg.h
*********************************************************************/
