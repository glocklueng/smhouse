/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc1 
	Configuration 	: Animate
	Model Element	: Scanner
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc1\Animate\Scanner.h
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
    
    /*#[ ignore */
    RiCDefaultReactivePort pUc_Uc2DataLoggingAndIntrusionDetection;
    RiCDefaultReactivePort pUc_Uc1ArmingLogger;
    /*#]*/
    char* readedKey;		/*## attribute readedKey */
    unsigned int keySize;		/*## attribute keySize */
    /*#[ ignore */
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
void setReadedKey(Scanner* const me, char* p_readedKey);

/*## auto_generated */
void setKeySize(Scanner* const me, unsigned int p_keySize);

/*## auto_generated */
Scanner * Create(RiCTask * p_task);

/*## auto_generated */
void Destroy(Scanner* const me);

/*## auto_generated */
RiCBoolean startBehavior(Scanner* const me);

/* rootState: */
/*## statechart_method */
int rootState_IN(const Scanner* const me);

/* sendaction_8: */
/*## statechart_method */
int sendaction_8_IN(const Scanner* const me);

/* sendaction_7: */
/*## statechart_method */
int sendaction_7_IN(const Scanner* const me);

/* sendaction_4: */
/*## statechart_method */
int sendaction_4_IN(const Scanner* const me);

/* sendaction_3: */
/*## statechart_method */
int sendaction_3_IN(const Scanner* const me);

/* PoweringUp: */
/*## statechart_method */
int PoweringUp_IN(const Scanner* const me);

/* PoweringDown: */
/*## statechart_method */
int PoweringDown_IN(const Scanner* const me);

/* On: */
/*## statechart_method */
int On_IN(const Scanner* const me);

/* Off: */
/*## statechart_method */
int Off_IN(const Scanner* const me);

/* KeyRead: */
/*## statechart_method */
int KeyRead_IN(const Scanner* const me);

/*#[ ignore */
BasicWebAdapter * getItsWebAdapter(const Scanner* const me);

void visitWebAdaptedRelations(const Scanner* const me);

enum Scanner_Enum {
    Scanner_RiCNonState = 0,
    Scanner_sendaction_8 = 1,
    Scanner_sendaction_7 = 2,
    Scanner_sendaction_4 = 3,
    Scanner_sendaction_3 = 4,
    Scanner_PoweringUp = 5,
    Scanner_PoweringDown = 6,
    Scanner_On = 7,
    Scanner_Off = 8,
    Scanner_KeyRead = 9
};
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecutionUc1\Animate\Scanner.h
*********************************************************************/
