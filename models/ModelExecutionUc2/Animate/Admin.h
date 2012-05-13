/*********************************************************************
	Rhapsody in C	: 7.6.1 
	Login		: 1
	Component	: ModelExecutionUc2 
	Configuration 	: Animate
	Model Element	: Admin
//!	Generated Date	: Fri, 11, May 2012  
	File Path	: ModelExecutionUc2\Animate\Admin.h
*********************************************************************/

#ifndef Admin_H
#define Admin_H

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
/*## dependency iAdmin_Uc_Uc1ArmingLogger */
#include "iAdmin_Uc_Uc1ArmingLogger.h"
/*## package ActorPkg */

/*## actor Admin */
typedef struct Admin Admin;
struct Admin {
    RiCReactive ric_reactive;
    /*#[ ignore */
    RiCDefaultReactivePort pUc_Uc1ArmingLogger;
    int rootState_subState;
    int rootState_active;
    BasicWebAdapter * itsWebAdapter;
    /*#]*/
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## auto_generated */
void Admin_Init(Admin* const me, RiCTask * p_task);

/*## auto_generated */
void Admin_Cleanup(Admin* const me);

/*## auto_generated */
Admin * Admin_Create(RiCTask * p_task);

/*## auto_generated */
void Admin_Destroy(Admin* const me);

/*## auto_generated */
RiCBoolean Admin_startBehavior(Admin* const me);

/***    Framework entries    ***/

/* rootState: */
/*## statechart_method */
int Admin_rootState_IN(const Admin* const me);

/* WaitForAdminCommands: */
/*## statechart_method */
int Admin_WaitForAdminCommands_IN(const Admin* const me);

/* sendaction_2: */
/*## statechart_method */
int Admin_sendaction_2_IN(const Admin* const me);

/* sendaction_1: */
/*## statechart_method */
int Admin_sendaction_1_IN(const Admin* const me);

/*#[ ignore */
BasicWebAdapter * Admin_getItsWebAdapter(const Admin* const me);

void Admin_visitWebAdaptedRelations(const Admin* const me);

enum Admin_Enum {
    Admin_RiCNonState = 0,
    Admin_WaitForAdminCommands = 1,
    Admin_sendaction_2 = 2,
    Admin_sendaction_1 = 3
};
/*#]*/

#endif
/*********************************************************************
	File Path	: ModelExecutionUc2\Animate\Admin.h
*********************************************************************/
