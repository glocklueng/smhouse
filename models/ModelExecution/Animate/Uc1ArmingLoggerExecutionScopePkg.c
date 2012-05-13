/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Uc1ArmingLoggerExecutionScopePkg
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\Uc1ArmingLoggerExecutionScopePkg.c
*********************************************************************/

/*## auto_generated */
#include "Uc1ArmingLoggerExecutionScopePkg.h"
/*## classInstance itsAdmin */
#include "Admin.h"
/*## classInstance itsDriver */
#include "Driver.h"
/*## classInstance itsScanner */
#include "Scanner.h"
/*## classInstance itsSensors */
#include "Sensors.h"
/*## classInstance itsUc_Uc1ArmingLogger */
#include "Uc_Uc1ArmingLogger.h"
/*## package FunctionalAnalysisPkg::Uc1ArmingLoggerPkg::Uc1ArmingLoggerExecutionScopePkg */


/*## classInstance itsAdmin */
struct Admin itsAdmin;

/*## classInstance itsDriver */
struct Driver itsDriver;

/*## classInstance itsScanner */
struct Scanner itsScanner;

/*## classInstance itsSensors */
struct Sensors itsSensors;

/*## classInstance itsUc_Uc1ArmingLogger */
struct Uc_Uc1ArmingLogger itsUc_Uc1ArmingLogger;

#ifdef _OMINSTRUMENT
static void serializeGlobalItems(ARCSRelations * arcsRelations);

static void RenameGlobalInstances(void);

/*#[ ignore */
static const ARCSerGVtbl FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc1ArmingLoggerExecutionScopePkg_instrumentVtbl = {
    NULL,
    &serializeGlobalItems
};
/*#]*/

OM_INSTRUMENT_PACKAGE(FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc1ArmingLoggerExecutionScopePkg, FunctionalAnalysisPkg::Uc1ArmingLoggerPkg::Uc1ArmingLoggerExecutionScopePkg, &FunctionalAnalysisPkg_Uc1ArmingLoggerPkg_Uc1ArmingLoggerExecutionScopePkg_instrumentVtbl)
#endif /* _OMINSTRUMENT */

void Uc1ArmingLoggerExecutionScopePkg_OMInitializer_Init(void) {
    Uc1ArmingLoggerExecutionScopePkg_initRelations();
    Uc1ArmingLoggerExecutionScopePkg_startBehavior();
}

void Uc1ArmingLoggerExecutionScopePkg_OMInitializer_Cleanup(void) {
}

void Uc1ArmingLoggerExecutionScopePkg_initRelations(void) {
    Admin_Init(&(itsAdmin), RiCMainTask());
    Driver_Init(&(itsDriver), RiCMainTask());
    Init(&(itsScanner), RiCMainTask());
    Sensors_Init(&(itsSensors), RiCMainTask());
    Uc_Uc1ArmingLogger_Init(&(itsUc_Uc1ArmingLogger), RiCMainTask());
    {
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsDriver.pUc_Uc1ArmingLogger.outbound),
          &(itsUc_Uc1ArmingLogger.pDriver.inbound)
        );
    }{
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsUc_Uc1ArmingLogger.pDriver.outbound),
          &(itsDriver.pUc_Uc1ArmingLogger.inbound)
        );
    }
    {
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsAdmin.pUc_Uc1ArmingLogger.outbound),
          &(itsUc_Uc1ArmingLogger.pAdmin.inbound)
        );
    }{
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsUc_Uc1ArmingLogger.pAdmin.outbound),
          &(itsAdmin.pUc_Uc1ArmingLogger.inbound)
        );
    }
    {
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsUc_Uc1ArmingLogger.pSensors.outbound),
          &(itsSensors.pUc_Uc1ArmingLogger.inbound)
        );
    }{
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsSensors.pUc_Uc1ArmingLogger.outbound),
          &(itsUc_Uc1ArmingLogger.pSensors.inbound)
        );
    }
    {
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsUc_Uc1ArmingLogger.pScanner.outbound),
          &(itsScanner.pUc_Uc1ArmingLogger.inbound)
        );
    }{
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsScanner.pUc_Uc1ArmingLogger.outbound),
          &(itsUc_Uc1ArmingLogger.pScanner.inbound)
        );
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif /* _OMINSTRUMENT*/
}

RiCBoolean Uc1ArmingLoggerExecutionScopePkg_startBehavior(void) {
    RiCBoolean done = RiCTRUE;
    done &= Admin_startBehavior(&(itsAdmin));
    done &= Driver_startBehavior(&(itsDriver));
    done &= startBehavior(&(itsScanner));
    done &= Sensors_startBehavior(&(itsSensors));
    done &= Uc_Uc1ArmingLogger_startBehavior(&(itsUc_Uc1ArmingLogger));
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalItems(ARCSRelations * arcsRelations) {
    ARCSRS_addRelation(arcsRelations, "itsUc_Uc1ArmingLogger", TRUE, TRUE);
    ARCSRS_addItem(arcsRelations, Uc_Uc1ArmingLogger, &(itsUc_Uc1ArmingLogger));
    ARCSRS_addRelation(arcsRelations, "itsDriver", TRUE, TRUE);
    ARCSRS_addItem(arcsRelations, Driver, &(itsDriver));
    ARCSRS_addRelation(arcsRelations, "itsAdmin", TRUE, TRUE);
    ARCSRS_addItem(arcsRelations, Admin, &(itsAdmin));
    ARCSRS_addRelation(arcsRelations, "itsSensors", TRUE, TRUE);
    ARCSRS_addItem(arcsRelations, Sensors, &(itsSensors));
    ARCSRS_addRelation(arcsRelations, "itsScanner", TRUE, TRUE);
    ARCSRS_addItem(arcsRelations, Scanner, &(itsScanner));
}

static void RenameGlobalInstances(void) {
    ARCAI_SetName(&(itsUc_Uc1ArmingLogger), Uc_Uc1ArmingLogger, "itsUc_Uc1ArmingLogger", ARCNoMultiplicity);
    ARCAI_SetName(&(itsDriver), Driver, "itsDriver", ARCNoMultiplicity);
    ARCAI_SetName(&(itsAdmin), Admin, "itsAdmin", ARCNoMultiplicity);
    ARCAI_SetName(&(itsSensors), Sensors, "itsSensors", ARCNoMultiplicity);
    ARCAI_SetName(&(itsScanner), Scanner, "itsScanner", ARCNoMultiplicity);
}
#endif /* _OMINSTRUMENT */

/*********************************************************************
	File Path	: ModelExecution\Animate\Uc1ArmingLoggerExecutionScopePkg.c
*********************************************************************/
