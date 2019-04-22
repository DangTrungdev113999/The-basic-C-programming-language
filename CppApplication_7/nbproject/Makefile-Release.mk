#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/thematic\ 4.2.1.o \
	${OBJECTDIR}/thematic\ 4.2.10.o \
	${OBJECTDIR}/thematic\ 4.2.2.o \
	${OBJECTDIR}/thematic\ 4.2.3.o \
	${OBJECTDIR}/thematic\ 4.2.4.o \
	${OBJECTDIR}/thematic\ 4.2.5.o \
	${OBJECTDIR}/thematic\ 4.2.6.o \
	${OBJECTDIR}/thematic\ 4.2.7.o \
	${OBJECTDIR}/thematic\ 4.2.8.o \
	${OBJECTDIR}/thematic\ 4.2.9.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_7.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_7.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_7 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/main.o: main.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

.NO_PARALLEL:${OBJECTDIR}/thematic\ 4.2.1.o
${OBJECTDIR}/thematic\ 4.2.1.o: thematic\ 4.2.1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/thematic\ 4.2.1.o thematic\ 4.2.1.c

.NO_PARALLEL:${OBJECTDIR}/thematic\ 4.2.10.o
${OBJECTDIR}/thematic\ 4.2.10.o: thematic\ 4.2.10.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/thematic\ 4.2.10.o thematic\ 4.2.10.c

.NO_PARALLEL:${OBJECTDIR}/thematic\ 4.2.2.o
${OBJECTDIR}/thematic\ 4.2.2.o: thematic\ 4.2.2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/thematic\ 4.2.2.o thematic\ 4.2.2.c

.NO_PARALLEL:${OBJECTDIR}/thematic\ 4.2.3.o
${OBJECTDIR}/thematic\ 4.2.3.o: thematic\ 4.2.3.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/thematic\ 4.2.3.o thematic\ 4.2.3.c

.NO_PARALLEL:${OBJECTDIR}/thematic\ 4.2.4.o
${OBJECTDIR}/thematic\ 4.2.4.o: thematic\ 4.2.4.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/thematic\ 4.2.4.o thematic\ 4.2.4.c

.NO_PARALLEL:${OBJECTDIR}/thematic\ 4.2.5.o
${OBJECTDIR}/thematic\ 4.2.5.o: thematic\ 4.2.5.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/thematic\ 4.2.5.o thematic\ 4.2.5.c

.NO_PARALLEL:${OBJECTDIR}/thematic\ 4.2.6.o
${OBJECTDIR}/thematic\ 4.2.6.o: thematic\ 4.2.6.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/thematic\ 4.2.6.o thematic\ 4.2.6.c

.NO_PARALLEL:${OBJECTDIR}/thematic\ 4.2.7.o
${OBJECTDIR}/thematic\ 4.2.7.o: thematic\ 4.2.7.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/thematic\ 4.2.7.o thematic\ 4.2.7.c

.NO_PARALLEL:${OBJECTDIR}/thematic\ 4.2.8.o
${OBJECTDIR}/thematic\ 4.2.8.o: thematic\ 4.2.8.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/thematic\ 4.2.8.o thematic\ 4.2.8.c

.NO_PARALLEL:${OBJECTDIR}/thematic\ 4.2.9.o
${OBJECTDIR}/thematic\ 4.2.9.o: thematic\ 4.2.9.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/thematic\ 4.2.9.o thematic\ 4.2.9.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
