/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecution 
	Configuration 	: Animate
	Model Element	: Scanner
//!	Generated Date	: Thu, 10, May 2012  
	File Path	: ModelExecution\Animate\Scanner.h
*********************************************************************/

#ifndef Scanner_H
#define Scanner_H

/*## auto_generated */
#include <WebComponents\WebComponentsTypes.h>
/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "ActorPkg.h"
/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*## auto_generated */
#include <oxf\RiCDefaultReactivePort.h>
/*## dependency iUc_Uc1ArmingLogger_Scanner */
#include "iUc_Uc1ArmingLogger_Scanner.h"
/*## dependency iScanner_Uc_Uc2DataLoggingAndIntrusionDetection */
#include "iScanner_Uc_Uc2DataLoggingAndIntrusionDetection.h"
/*## package ActorPkg */

/*## actor Scanner */
typedef struct Scanner Scanner;
struct Scanner {
    RiCReactive ric_reactive;
    /***    User implicit entries    ***/
    
    /* Constructors and destructors:*/
    
    /***    User explicit entries    ***/
    
    /* Operations */
    
    /***    Framework entries    ***/
    
    unsigned int keySize;		/*## attribute keySize */
    char* readedKey;		/*## attribute readedKey */
    /*#[ ignore */
    RiCDefaultReactivePort pUc_Uc1ArmingLogger;
    RiCDefaultReactivePort pUc_Uc2DataLoggingAndIntrusionDetection;
    int rootState_subState;
    int rootState_active;
    BasicWebAdapter * itsWebAdapter;
    /*#]*/
};

/*## auto_generated */
void Init(Scanner* const me, RiCTask * p_task);

/*## auto_generated */
void Cleanup(Scanner* const me);

/*## auto_generated */
void setKeySize(Scanner* const me, unsigned int p_keySize);

/*## auto_generated */
void setReadedKey(Scanner* const me, char* p_readedKey);

/*## auto_generated */
Scanner * Create(RiCTask * p_task);

/*## auto_generated */
void Destroy(Scanner* const me);

/*## auto_generated */
RiCBoolean startBehavior(Scanner* const me);

/* rootState: */
/*## statechart_method */
int rootState_IN(const Scanner* const me);

/* sendaction_3: */
/*## statechart_method */
int sendaction_3_IN(const Scanner* const me);

/* ScannerControl: */
/*## statechart_method */
int ScannerControl_IN(const Scanner* const me);

/* KeyRead: */
/*## statechart_method */
int KeyRead_IN(const Scanner* const me);

/*#[ ignore */
BasicWebAdapter * getItsWebAdapter(const Scanner* const me);

void visitWebAdaptedRelations(const Scanner* const me);

enum Scanner_Enum {
    Scanner_RiCNonState = 0,
    Scanner_sendaction_3 = 1,
    Scanner_ScannerControl = 2,
    Scanner_KeyRead = 3
};
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecution\Animate\Scanner.h
*********************************************************************/
