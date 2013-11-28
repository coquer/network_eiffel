INCLUDE_PATH = 
SHELL = /bin/sh
CC = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/mingw/bin/gcc"
CPP = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE   -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/studio/spec/win64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/studio/spec/win64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mconsole
LDSHAREDFLAGS =  
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/studio/spec/win64/lib/mingw/wkbench.a"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/studio/config/win64/templates
LIBS = 
MAKE = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/msys/1.0/bin/make.exe"
AR = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/mingw/bin/ar"
LD = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/mingw/bin/ld"
MKDEP =   --
MV = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/msys/1.0/bin/cp"
CP = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/msys/1.0/bin/cp"
RANLIB = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/mingw/bin/ranlib.exe"
RM = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/msys/1.0/bin/rm" -f
FILE_EXIST = 
RMDIR = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/msys/1.0/bin/rd"
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/studio/spec/win64/bin/x2c.exe"
SHAREDLINK = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/mingw/bin/dllwrap"
SHAREDLIBS = -luser32 -lws2_32 -ladvapi32 -lgdi32 -lshell32 -lmsimg32 -lcomdlg32 -luuid -lole32 -loleaut32 -lcomctl32 -lmpr -lshlwapi -lwinspool -lstdc++ 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/msys/1.0/bin/touch" finished
PATH := C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL/gcc/win64/mingw/libexec/gcc/mingw32/3.4.2;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\ 
SYSTEM_IN_DYNAMIC_LIB = networktest_server.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  ap873.o ap873d.o ap873f.o me869.o me869d.o me869f.o ne880.o \
	ne880d.o ne880f.o so870.o so870d.o so870f.o in866.o in866d.o in866f.o \
	in871.o in871d.o in871f.o ne879.o ne879d.o ne879f.o st878.o st878d.o \
	st878f.o in868.o in868d.o in868f.o in867.o in867d.o in867f.o ad861.o \
	ad861d.o ad861f.o in863.o in863d.o in863f.o in865.o in865d.o in865f.o \
	in864.o in864d.o in864f.o ad875.o ad875d.o ad875f.o in862.o in862d.o \
	in862f.o ne872.o ne872d.o ne872f.o so877.o so877d.o so877f.o ad876.o \
	ad876d.o ad876f.o ex874.o ex874d.o ex874f.o so860.o so860d.o so860f.o \
	pa859.o pa859d.o pa859f.o 

all::  Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(RM) $@
	$(LD) -r -o $@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

