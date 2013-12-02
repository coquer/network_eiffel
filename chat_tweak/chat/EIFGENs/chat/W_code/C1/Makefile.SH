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
SYSTEM_IN_DYNAMIC_LIB = chat$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  ch877.o ch877d.o ch877f.o co865.o co865d.o co865f.o me880.o \
	me880d.o me880f.o me874.o me874d.o me874f.o ne876.o ne876d.o ne876f.o \
	po864.o po864d.o po864f.o po861.o po861d.o po861f.o so873.o so873d.o \
	so873f.o ne887.o ne887d.o ne887f.o se875.o se875d.o se875f.o in870.o \
	in870d.o in870f.o in878.o in878d.o in878f.o ne886.o ne886d.o ne886f.o \
	st885.o st885d.o st885f.o so884.o so884d.o so884f.o in872.o in872d.o \
	in872f.o ad863.o ad863d.o ad863f.o in867.o in867d.o in867f.o in869.o \
	in869d.o in869f.o in868.o in868d.o in868f.o ad882.o ad882d.o ad882f.o \
	in871.o in871d.o in871f.o in866.o in866d.o in866f.o ne879.o ne879d.o \
	ne879f.o pa860.o pa860d.o pa860f.o so862.o so862d.o so862f.o ad883.o \
	ad883d.o ad883f.o ex881.o ex881d.o ex881f.o 

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

