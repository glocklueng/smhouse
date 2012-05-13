/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: itsDriver
//!	Generated Date	: Wed, 9, May 2012  
	File Path	: ModelExecution\Animate\itsDriver.c
*********************************************************************/

/*## auto_generated */
#include "itsDriver.h"
/*#[ ignore */
#define FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_itsDriver_itsDriver_SERIALIZE OM_NO_OP
/*#]*/

/*## package FunctionalAnalysisPkg::Uc2DataLoggingAndIntrusionDetectionPkg::Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg */

/*## class TopLevel::itsDriver */
#ifdef _OMINSTRUMENT
/*#[ ignore */
static const ARCSerCVtbl itsDriver_instrumentVtbl = {
    NULL,
    NULL
};
/*#]*/

OM_INSTRUMENT_OBJECT(itsDriver, Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg, FALSE, &itsDriver_instrumentVtbl)
#endif /* _OMINSTRUMENT */

void itsDriver_Init(struct itsDriver_t* const me) {
    NOTIFY_CONSTRUCTOR(me, &me, NULL, itsDriver, itsDriver_Init, itsDriver_Init(), 0, FunctionalAnalysisPkg_Uc2DataLoggingAndIntrusionDetectionPkg_Uc2DataLoggingAndIntrusionDetectionExecutionScopePkg_itsDriver_itsDriver_SERIALIZE);
    NOTIFY_END_CONSTRUCTOR(me);
}

void itsDriver_Cleanup(struct itsDriver_t* const me) {
    NOTIFY_DESTRUCTOR(me, &me, itsDriver, ~itsDriver);
}

struct itsDriver_t * itsDriver_Create(void) {
    struct itsDriver_t* me = (struct itsDriver_t *) malloc(sizeof(struct itsDriver_t));
    if(me!=NULL)
        {
            itsDriver_Init(me);
        }
    return me;
}

void itsDriver_Destroy(struct itsDriver_t* const me) {
    if(me!=NULL)
        {
            itsDriver_Cleanup(me);
        }
    free(me);
}

/*********************************************************************
	File Path	: ModelExecution\Animate\itsDriver.c
*********************************************************************/
