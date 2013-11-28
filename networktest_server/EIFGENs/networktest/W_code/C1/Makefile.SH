case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C1"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH = 
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $ccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $cppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = networktest_server$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

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

all: Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj1.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

