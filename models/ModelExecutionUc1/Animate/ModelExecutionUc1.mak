
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" /MDd  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" /MD /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug

ConfigurationCPPCompileSwitches=  /I . /I . /I $(OMROOT)\LangC  /I $(OMROOT)\LangC\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c 

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
LIB_PREFIX=Ms

CRT_FLAGS=
ENABLE_EH=/EHsc

WINMM_LIB=winmm.lib

################### Distributed Events Marcos & Flags #######
#############################################################
DISTRIBUTION=False
DISTRIBUTION_PREFIX=
DOX_LIBS=
DOX_FLAGS=

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug) /NOLOGO   
LINK_FLAGS=$(LinkDebug) /NOLOGO    /SUBSYSTEM:console /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Users\1\IBM\Rational\Rhapsody\7.6.1\Share"

CPP_EXT=.c
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=ModelExecutionUc1

all : $(TARGET_NAME)$(EXE_EXT) ModelExecutionUc1.mak

TARGET_MAIN=MainModelExecutionUc1

LIBS= \
  $(OMROOT)\LangC\lib\$(LIB_PREFIX)WebComponents$(LIB_POSTFIX)$(LIB_EXT) \
  $(OMROOT)\lib\$(LIB_PREFIX)WebServices$(LIB_POSTFIX)$(LIB_EXT) \
  ws2_32$(LIB_EXT)

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangC/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  Driver.obj \
  Admin.obj \
  Scanner.obj \
  Sensors.obj \
  Uc_Uc1ArmingLogger.obj \
  iAdmin_Uc_Uc1ArmingLogger.obj \
  iDriver_Uc_Uc1ArmingLogger.obj \
  iUc_Uc1ArmingLogger_Scanner.obj \
  iUc_Uc1ArmingLogger_Sensors.obj \
  iSensors_Uc_Uc1ArmingLogger.obj \
  iScanner_Uc_Uc1ArmingLogger.obj \
  ActorPkg.obj \
  TypesPkg.obj \
  Uc1ArmingLoggerPkg.obj \
  Uc1ArmingLoggerExecutionScopePkg.obj \
  Uc1_InterfacesPkg.obj \
  InterfacesPkg.obj \
  InitWebResources.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
$(OBJS) : $(FLAGSFILE) $(RULESFILE) $(INST_LIBS) $(OXF_LIBS)

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(DISTRIBUTION)" == "True"
DISTRIBUTION_PREFIX=distrib_
DOX_LIBS=$(OMROOT)\LangC\lib\$(LIB_PREFIX)dox$(LIB_POSTFIX)$(LIB_EXT) kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib 
DOX_FLAGS=/D "RIC_DISTRIBUTED_SYSTEM"
!ELSE
DISTRIBUTION_PREFIX=
DOX_LIBS=
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug) /DEBUGTYPE:CV
!ENDIF

!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangC\aom
INST_LIBS= $(OMROOT)\LangC\lib\$(LIB_PREFIX)$(DISTRIBUTION_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(OMROOT)\LangC\lib\$(LIB_PREFIX)$(DISTRIBUTION_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangC\lib\$(LIB_PREFIX)omcomappl$(LIB_POSTFIX)$(LIB_EXT)
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangC\aom /I $(OMROOT)\LangCpp\tom
INST_LIBS= $(OMROOT)\LangC\lib\$(LIB_PREFIX)$(DISTRIBUTION_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(OMROOT)\LangC\lib\$(LIB_PREFIX)$(DISTRIBUTION_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangC\lib\$(LIB_PREFIX)omcomappl$(LIB_POSTFIX)$(LIB_EXT)
## C++ Libraries to support link to C++ TOM ##
INST_LIBS= $(INST_LIBS) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)tomtraceRiC$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(OXF_LIBS) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omcomappl$(LIB_POSTFIX)$(LIB_EXT)
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
OXF_LIBS=$(OMROOT)\LangC\lib\$(LIB_PREFIX)$(DISTRIBUTION_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT)
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF

ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) $(DOX_FLAGS)

################## Generated dependencies ########################
##################################################################






Driver.obj : Driver.c Driver.h    ActorPkg.h iDriver_Uc_Uc1ArmingLogger.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"Driver.obj" "Driver.c" 



Admin.obj : Admin.c Admin.h    ActorPkg.h iAdmin_Uc_Uc1ArmingLogger.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"Admin.obj" "Admin.c" 



Scanner.obj : Scanner.c Scanner.h    ActorPkg.h iUc_Uc1ArmingLogger_Scanner.h iScanner_Uc_Uc1ArmingLogger.h InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"Scanner.obj" "Scanner.c" 



Sensors.obj : Sensors.c Sensors.h    ActorPkg.h iSensors_Uc_Uc1ArmingLogger.h iUc_Uc1ArmingLogger_Sensors.h InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"Sensors.obj" "Sensors.c" 



Uc_Uc1ArmingLogger.obj : Uc_Uc1ArmingLogger.c Uc_Uc1ArmingLogger.h    Uc1ArmingLoggerPkg.h iUc_Uc1ArmingLogger_Scanner.h iUc_Uc1ArmingLogger_Sensors.h TypesPkg.h InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"Uc_Uc1ArmingLogger.obj" "Uc_Uc1ArmingLogger.c" 



iAdmin_Uc_Uc1ArmingLogger.obj : iAdmin_Uc_Uc1ArmingLogger.c iAdmin_Uc_Uc1ArmingLogger.h    Uc1_InterfacesPkg.h InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"iAdmin_Uc_Uc1ArmingLogger.obj" "iAdmin_Uc_Uc1ArmingLogger.c" 



iDriver_Uc_Uc1ArmingLogger.obj : iDriver_Uc_Uc1ArmingLogger.c iDriver_Uc_Uc1ArmingLogger.h    Uc1_InterfacesPkg.h InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"iDriver_Uc_Uc1ArmingLogger.obj" "iDriver_Uc_Uc1ArmingLogger.c" 



iUc_Uc1ArmingLogger_Scanner.obj : iUc_Uc1ArmingLogger_Scanner.c iUc_Uc1ArmingLogger_Scanner.h    Uc1_InterfacesPkg.h InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"iUc_Uc1ArmingLogger_Scanner.obj" "iUc_Uc1ArmingLogger_Scanner.c" 



iUc_Uc1ArmingLogger_Sensors.obj : iUc_Uc1ArmingLogger_Sensors.c iUc_Uc1ArmingLogger_Sensors.h    Uc1_InterfacesPkg.h InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"iUc_Uc1ArmingLogger_Sensors.obj" "iUc_Uc1ArmingLogger_Sensors.c" 



iSensors_Uc_Uc1ArmingLogger.obj : iSensors_Uc_Uc1ArmingLogger.c iSensors_Uc_Uc1ArmingLogger.h    Uc1_InterfacesPkg.h InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"iSensors_Uc_Uc1ArmingLogger.obj" "iSensors_Uc_Uc1ArmingLogger.c" 



iScanner_Uc_Uc1ArmingLogger.obj : iScanner_Uc_Uc1ArmingLogger.c iScanner_Uc_Uc1ArmingLogger.h    Uc1_InterfacesPkg.h InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"iScanner_Uc_Uc1ArmingLogger.obj" "iScanner_Uc_Uc1ArmingLogger.c" 



ActorPkg.obj : ActorPkg.c ActorPkg.h    
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"ActorPkg.obj" "ActorPkg.c" 



TypesPkg.obj : TypesPkg.c TypesPkg.h    
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"TypesPkg.obj" "TypesPkg.c" 



Uc1ArmingLoggerPkg.obj : Uc1ArmingLoggerPkg.c Uc1ArmingLoggerPkg.h    Uc_Uc1ArmingLogger.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"Uc1ArmingLoggerPkg.obj" "Uc1ArmingLoggerPkg.c" 



Uc1ArmingLoggerExecutionScopePkg.obj : Uc1ArmingLoggerExecutionScopePkg.c Uc1ArmingLoggerExecutionScopePkg.h    Uc1ArmingLoggerPkg.h Uc_Uc1ArmingLogger.h Driver.h Admin.h Sensors.h Scanner.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"Uc1ArmingLoggerExecutionScopePkg.obj" "Uc1ArmingLoggerExecutionScopePkg.c" 



Uc1_InterfacesPkg.obj : Uc1_InterfacesPkg.c Uc1_InterfacesPkg.h    iAdmin_Uc_Uc1ArmingLogger.h iDriver_Uc_Uc1ArmingLogger.h iUc_Uc1ArmingLogger_Scanner.h iUc_Uc1ArmingLogger_Sensors.h iSensors_Uc_Uc1ArmingLogger.h iScanner_Uc_Uc1ArmingLogger.h InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"Uc1_InterfacesPkg.obj" "Uc1_InterfacesPkg.c" 



InterfacesPkg.obj : InterfacesPkg.c InterfacesPkg.h    
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"InterfacesPkg.obj" "InterfacesPkg.c" 



InitWebResources.obj : InitWebResources.c     
	$(CREATE_OBJ_DIR)
	$(CC) $(ConfigurationCPPCompileSwitches)  /Fo"InitWebResources.obj" "InitWebResources.c" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) $(FLAGSFILE) $(RULESFILE)
	$(CC) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) ModelExecutionUc1.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(DOX_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) ModelExecutionUc1.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist Driver.obj erase Driver.obj
	if exist Admin.obj erase Admin.obj
	if exist Scanner.obj erase Scanner.obj
	if exist Sensors.obj erase Sensors.obj
	if exist Uc_Uc1ArmingLogger.obj erase Uc_Uc1ArmingLogger.obj
	if exist iAdmin_Uc_Uc1ArmingLogger.obj erase iAdmin_Uc_Uc1ArmingLogger.obj
	if exist iDriver_Uc_Uc1ArmingLogger.obj erase iDriver_Uc_Uc1ArmingLogger.obj
	if exist iUc_Uc1ArmingLogger_Scanner.obj erase iUc_Uc1ArmingLogger_Scanner.obj
	if exist iUc_Uc1ArmingLogger_Sensors.obj erase iUc_Uc1ArmingLogger_Sensors.obj
	if exist iSensors_Uc_Uc1ArmingLogger.obj erase iSensors_Uc_Uc1ArmingLogger.obj
	if exist iScanner_Uc_Uc1ArmingLogger.obj erase iScanner_Uc_Uc1ArmingLogger.obj
	if exist ActorPkg.obj erase ActorPkg.obj
	if exist TypesPkg.obj erase TypesPkg.obj
	if exist Uc1ArmingLoggerPkg.obj erase Uc1ArmingLoggerPkg.obj
	if exist Uc1ArmingLoggerExecutionScopePkg.obj erase Uc1ArmingLoggerExecutionScopePkg.obj
	if exist Uc1_InterfacesPkg.obj erase Uc1_InterfacesPkg.obj
	if exist InterfacesPkg.obj erase InterfacesPkg.obj
	if exist InitWebResources.obj erase InitWebResources.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	$(CLEAN_OBJ_DIR)
