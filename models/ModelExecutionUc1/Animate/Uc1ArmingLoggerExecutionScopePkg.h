/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: Uc1ArmingLoggerExecutionScopePkg
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc1\Animate\Uc1ArmingLoggerExecutionScopePkg.h
*********************************************************************/

#ifndef Uc1ArmingLoggerExecutionScopePkg_H
#define Uc1ArmingLoggerExecutionScopePkg_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Uc1ArmingLoggerPkg.h"
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
void Uc1ArmingLoggerExecutionScopePkg_OMInitializer_Init( void );

/*## auto_generated */
void Uc1ArmingLoggerExecutionScopePkg_OMInitializer_Cleanup( void );

/*## auto_generated */
void Uc1ArmingLoggerExecutionScopePkg_initRelations( void );

/*## auto_generated */
RiCBoolean Uc1ArmingLoggerExecutionScopePkg_startBehavior( void );

#endif
/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\Uc1ArmingLoggerExecutionScopePkg.h
*********************************************************************/
