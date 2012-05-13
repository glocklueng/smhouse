/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg.c
*********************************************************************/

/*## auto_generated */
#include "Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg.h"
/*## classInstance itsDriver */
#include "Driver.h"
/*## classInstance itsScanner */
#include "Scanner.h"
/*## classInstance itsSensors */
#include "Sensors.h"
/*## classInstance itsUc_Uc2DataLoggingAndIntrusionDetection */
#include "Uc_Uc2DataLoggingAndIntrusionDetection.h"
/*## package FunctionalAnalysisPkg::Uc2DataLoggingAndIntrusionDetectionPkg::Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg */


/*## classInstance itsDriver */
struct Driver itsDriver;

/*## classInstance itsScanner */
struct Scanner itsScanner;

/*## classInstance itsSensors */
struct Sensors itsSensors;

/*## classInstance itsUc_Uc2DataLoggingAndIntrusionDetection */
struct Uc_Uc2DataLoggingAndIntrusionDetection itsUc_Uc2DataLoggingAndIntrusionDetection;

#ifdef _OMINSTRUMENT
static void serializeGlobalItems(ARCSRelations * arcsRelations);

static void RenameGlobalInstances(void);

/*#[ ignore */
static const ARCSerGVtbl FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_instrumentVtbl = {
    NULL,
    &serializeGlobalItems
};
/*#]*/

OM_INSTRUMENT_PACKAGE(FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg, FunctionalAnalysisPkg::Uc2DataLoggingAndIntrusionDetectionPkg::Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg, &FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_instrumentVtbl)
#endif /* _OMINSTRUMENT */

void Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_OMInitializer_Init(void) {
    Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_initRelations();
    Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_startBehavior();
}

void Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_OMInitializer_Cleanup(void) {
}

void Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_initRelations(void) {
    Driver_Init(&(itsDriver), RiCMainTask());
    Init(&(itsScanner), RiCMainTask());
    Sensors_Init(&(itsSensors), RiCMainTask());
    Uc_Uc2DataLoggingAndIntrusionDetection_Init(&(itsUc_Uc2DataLoggingAndIntrusionDetection), RiCMainTask());
    {
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsDriver.pUc_Uc2DataLoggingAndIntrusionDetection.outbound),
          &(itsUc_Uc2DataLoggingAndIntrusionDetection.pDriver.inbound)
        );
    }{
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsUc_Uc2DataLoggingAndIntrusionDetection.pDriver.outbound),
          &(itsDriver.pUc_Uc2DataLoggingAndIntrusionDetection.inbound)
        );
    }
    {
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsUc_Uc2DataLoggingAndIntrusionDetection.pSensors.outbound),
          &(itsSensors.pUc_Uc2DataLoggingAndIntrusionDetection.inbound)
        );
    }{
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsSensors.pUc_Uc2DataLoggingAndIntrusionDetection.outbound),
          &(itsUc_Uc2DataLoggingAndIntrusionDetection.pSensors.inbound)
        );
    }
    {
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsUc_Uc2DataLoggingAndIntrusionDetection.pScanner.outbound),
          &(itsScanner.pUc_Uc2DataLoggingAndIntrusionDetection.inbound)
        );
    }{
        
        RiCDefaultReactiveOutbound_setItsIRiCReactive(
          &(itsScanner.pUc_Uc2DataLoggingAndIntrusionDetection.outbound),
          &(itsUc_Uc2DataLoggingAndIntrusionDetection.pScanner.inbound)
        );
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif /* _OMINSTRUMENT*/
}

RiCBoolean Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_startBehavior(void) {
    RiCBoolean done = RiCTRUE;
    done &= Driver_startBehavior(&(itsDriver));
    done &= startBehavior(&(itsScanner));
    done &= Sensors_startBehavior(&(itsSensors));
    done &= Uc_Uc2DataLoggingAndIntrusionDetection_startBehavior(&(itsUc_Uc2DataLoggingAndIntrusionDetection));
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalItems(ARCSRelations * arcsRelations) {
    ARCSRS_addRelation(arcsRelations, "itsUc_Uc2DataLoggingAndIntrusionDetection", TRUE, TRUE);
    ARCSRS_addItem(arcsRelations, Uc_Uc2DataLoggingAndIntrusionDetection, &(itsUc_Uc2DataLoggingAndIntrusionDetection));
    ARCSRS_addRelation(arcsRelations, "itsSensors", TRUE, TRUE);
    ARCSRS_addItem(arcsRelations, Sensors, &(itsSensors));
    ARCSRS_addRelation(arcsRelations, "itsScanner", TRUE, TRUE);
    ARCSRS_addItem(arcsRelations, Scanner, &(itsScanner));
    ARCSRS_addRelation(arcsRelations, "itsDriver", TRUE, TRUE);
    ARCSRS_addItem(arcsRelations, Driver, &(itsDriver));
}

static void RenameGlobalInstances(void) {
    ARCAI_SetName(&(itsUc_Uc2DataLoggingAndIntrusionDetection), Uc_Uc2DataLoggingAndIntrusionDetection, "itsUc_Uc2DataLoggingAndIntrusionDetection", ARCNoMultiplicity);
    ARCAI_SetName(&(itsSensors), Sensors, "itsSensors", ARCNoMultiplicity);
    ARCAI_SetName(&(itsScanner), Scanner, "itsScanner", ARCNoMultiplicity);
    ARCAI_SetName(&(itsDriver), Driver, "itsDriver", ARCNoMultiplicity);
}
#endif /* _OMINSTRUMENT */

/*********************************************************************
	File Path	: ModelExecution\Animate\Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg.c
*********************************************************************/
