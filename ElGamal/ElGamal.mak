# Microsoft Developer Studio Generated NMAKE File, Based on ElGamal.dsp
!IF "$(CFG)" == ""
CFG=ElGamal - Win32 Debug
!MESSAGE No configuration specified. Defaulting to ElGamal - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "ElGamal - Win32 Release" && "$(CFG)" != "ElGamal - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "ElGamal.mak" CFG="ElGamal - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "ElGamal - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "ElGamal - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "ElGamal - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

ALL : "$(OUTDIR)\ElGamal.exe"


CLEAN :
	-@erase "$(INTDIR)\base64.obj"
	-@erase "$(INTDIR)\data_types.obj"
	-@erase "$(INTDIR)\des.obj"
	-@erase "$(INTDIR)\des_manager.obj"
	-@erase "$(INTDIR)\des_tool.obj"
	-@erase "$(INTDIR)\ElGamal.obj"
	-@erase "$(INTDIR)\general_crypto.obj"
	-@erase "$(INTDIR)\gmp_tool.obj"
	-@erase "$(INTDIR)\pki_io.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(OUTDIR)\ElGamal.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /ML /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /D "__WIN32_OS__" /D "__TEST_ELGAMAL_MAIN__" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\ElGamal.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /incremental:no /pdb:"$(OUTDIR)\ElGamal.pdb" /machine:I386 /out:"$(OUTDIR)\ElGamal.exe" 
LINK32_OBJS= \
	"$(INTDIR)\base64.obj" \
	"$(INTDIR)\des.obj" \
	"$(INTDIR)\des_manager.obj" \
	"$(INTDIR)\des_tool.obj" \
	"$(INTDIR)\ElGamal.obj" \
	"$(INTDIR)\general_crypto.obj" \
	"$(INTDIR)\gmp_tool.obj" \
	"$(INTDIR)\data_types.obj" \
	"$(INTDIR)\pki_io.obj"

"$(OUTDIR)\ElGamal.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "ElGamal - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

ALL : "$(OUTDIR)\ElGamal.exe"


CLEAN :
	-@erase "$(INTDIR)\base64.obj"
	-@erase "$(INTDIR)\data_types.obj"
	-@erase "$(INTDIR)\des.obj"
	-@erase "$(INTDIR)\des_manager.obj"
	-@erase "$(INTDIR)\des_tool.obj"
	-@erase "$(INTDIR)\ElGamal.obj"
	-@erase "$(INTDIR)\general_crypto.obj"
	-@erase "$(INTDIR)\gmp_tool.obj"
	-@erase "$(INTDIR)\pki_io.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(INTDIR)\vc60.pdb"
	-@erase "$(OUTDIR)\ElGamal.exe"
	-@erase "$(OUTDIR)\ElGamal.ilk"
	-@erase "$(OUTDIR)\ElGamal.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MLd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ /c 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\ElGamal.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /incremental:yes /pdb:"$(OUTDIR)\ElGamal.pdb" /debug /machine:I386 /out:"$(OUTDIR)\ElGamal.exe" /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\base64.obj" \
	"$(INTDIR)\des.obj" \
	"$(INTDIR)\des_manager.obj" \
	"$(INTDIR)\des_tool.obj" \
	"$(INTDIR)\ElGamal.obj" \
	"$(INTDIR)\general_crypto.obj" \
	"$(INTDIR)\gmp_tool.obj" \
	"$(INTDIR)\data_types.obj" \
	"$(INTDIR)\pki_io.obj"

"$(OUTDIR)\ElGamal.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<


!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("ElGamal.dep")
!INCLUDE "ElGamal.dep"
!ELSE 
!MESSAGE Warning: cannot find "ElGamal.dep"
!ENDIF 
!ENDIF 


!IF "$(CFG)" == "ElGamal - Win32 Release" || "$(CFG)" == "ElGamal - Win32 Debug"
SOURCE=..\LIB_CRYPTO\base64.cpp

"$(INTDIR)\base64.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=..\LIB\data_types.cpp

"$(INTDIR)\data_types.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=..\LIB_CRYPTO\des.cpp

"$(INTDIR)\des.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=..\LIB_CRYPTO\des_manager.cpp

"$(INTDIR)\des_manager.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=..\LIB_CRYPTO\des_tool.cpp

"$(INTDIR)\des_tool.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=.\ElGamal.cpp

"$(INTDIR)\ElGamal.obj" : $(SOURCE) "$(INTDIR)"


SOURCE=..\LIB_CRYPTO\general_crypto.cpp

"$(INTDIR)\general_crypto.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=..\LIB_CRYPTO\gmp_tool.cpp

"$(INTDIR)\gmp_tool.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=..\LIB_CRYPTO\pki_io.cpp

"$(INTDIR)\pki_io.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)



!ENDIF 

