#
# Cantata tool configuration definitions
# Modifying this file may cause errors when building Cantata tests
# Generated from Cantata configuration section: x86-win-Demo-Target-ARM3-C

#
# Test execution related options
#
BUILD_PREFIX := 
REDIRECT_OUTPUT := 1
MKDIR_CMD := mkdir 
ECHO_CMD := echo 
RM_CMD := rm -f 
EXE_EXT := .elf
EXECUTE_CMD := perl %i/ExtraFiles/runSamBa.pl %TEST_EXE% %i COM7 8 ;  perl %i/ExtraFiles/getcov.pl %TEST_EXE%
CANTPP_CMD := cppccd -F %COP% --intdir:%DIR% 
JAVA_CMD := java
ifdef JAVA_HOME
JAVA_CMD := "$(subst \,/,$(JAVA_HOME))/bin/java"
endif
ifdef CANTATA_JAVA_HOME
JAVA_CMD := "$(subst \,/,$(CANTATA_JAVA_HOME))/bin/java"
endif
ifndef CANTATA_INSTALL_DIR
CANTATA_INSTALL_DIR := C:/qa_systems/cantata
export CANTATA_INSTALL_DIR
endif

#
# Global flags, includes and libraries
#
GLOBAL_DEFINES := 
GLOBAL_INCLUDES := 
GLOBAL_EXTLIBS := 
DEBUG_FLAGS := 
C_LINK_FINALOPTS := 
CPP_LINK_FINALOPTS := 
CTR_STATE := ctr_state
# Set to 1 to escape arguments starting with forward slashes (0 otherwise)
USE_ESCAPED_SLASHES := 0

#
# Compiler specific options
#
DEFAULT_COMPILER_NAME := arm-none-eabi-gcc
ifeq ($(USE_ESCAPED_SLASHES),1)
    ORIGINAL_DEFAULT_COMPILER_OPTS := -Dprintf=iprintf -mcpu=cortex-m3 -mthumb -ffunction-sections -g -l%i/ExtraFiles/libraries/libchip_sam3s -I%i/ExtraFiles/libraries/libboard_sam3s-ek2 -I%i/ExtraFiles/libraries -I%i/ExtraFiles/libraries/libqtouch  -l%i/ExtraFiles/libraries/usb -I%i/ExtraFiles/libchip_sam3s -Dsam3sd8 -DTRACE_LEVEL=4 -Dflash -c -o %o %f
    DEFAULT_COMPILER_OPTS := $(patsubst /%,//%,$(ORIGINAL_DEFAULT_COMPILER_OPTS))
    ORIGINAL_DEFAULT_LINKER_OPTS := -L%i/ExtraFiles/libraries/usb/lib -L%i/ExtraFiles/libraries/libchip_sam3s/lib -L%i/ExtraFiles/libraries/libboard_sam3s-ek2/lib -I%i/ExtraFiles/libraries/libqtouch/lib -mcpu=cortex-m3 -mthumb -Wl,--check-sections -Wl,--gc-sections -Wl,--entry=ResetException -Wl,--unresolved-symbols=report-all -Wl,--warn-common -Wl,--warn-section-align -Wl,--warn-unresolved-symbols  -T%i/ExtraFiles/sam3sd8/flash.ld %i/ExtraFiles/obj/Blink.o -o %o %f -Wl,--start-group -lgcc -lc -lusb_sam3s_gcc_dbg -lchip_sam3sd8_gcc_dbg -lboard_sam3s_ek2_gcc_dbg -Wl,--end-group
    DEFAULT_LINKER_OPTS := $(patsubst /%,//%,$(ORIGINAL_DEFAULT_LINKER_OPTS))
    ORIGINAL_DEFINE_OPT := -D
    DEFINE_OPT := $(patsubst /%,//%,$(ORIGINAL_DEFINE_OPT))
    ORIGINAL_LIBRARY_OPT := -l%s
    LIBRARY_OPT := $(patsubst /%,//%,$(ORIGINAL_LIBRARY_OPT))
    ORIGINAL_INCLUDE_PATH_OPT := -I%s
    INCLUDE_PATH_OPT := $(patsubst /%,//%,$(ORIGINAL_INCLUDE_PATH_OPT))
else
    DEFAULT_COMPILER_OPTS := -Dprintf=iprintf -mcpu=cortex-m3 -mthumb -ffunction-sections -g -l%i/ExtraFiles/libraries/libchip_sam3s -I%i/ExtraFiles/libraries/libboard_sam3s-ek2 -I%i/ExtraFiles/libraries -I%i/ExtraFiles/libraries/libqtouch  -l%i/ExtraFiles/libraries/usb -I%i/ExtraFiles/libchip_sam3s -Dsam3sd8 -DTRACE_LEVEL=4 -Dflash -c -o %o %f
    DEFAULT_LINKER_OPTS := -L%i/ExtraFiles/libraries/usb/lib -L%i/ExtraFiles/libraries/libchip_sam3s/lib -L%i/ExtraFiles/libraries/libboard_sam3s-ek2/lib -I%i/ExtraFiles/libraries/libqtouch/lib -mcpu=cortex-m3 -mthumb -Wl,--check-sections -Wl,--gc-sections -Wl,--entry=ResetException -Wl,--unresolved-symbols=report-all -Wl,--warn-common -Wl,--warn-section-align -Wl,--warn-unresolved-symbols  -T%i/ExtraFiles/sam3sd8/flash.ld %i/ExtraFiles/obj/Blink.o -o %o %f -Wl,--start-group -lgcc -lc -lusb_sam3s_gcc_dbg -lchip_sam3sd8_gcc_dbg -lboard_sam3s_ek2_gcc_dbg -Wl,--end-group
    DEFINE_OPT := -D
    LIBRARY_OPT := -l%s
    INCLUDE_PATH_OPT := -I%s
endif
DEFAULT_LINKER_NAME := arm-none-eabi-gcc
OBJ_FILE_EXTS := .o
MULTIPLEXED_OUTPUT := 1

#
# Top level log file
#
export CANTPP_TOP_LEVEL_LOG := make_log.dat

#
# Source file extensions
#
export SOURCE_FILE_EXTS := .c .C .wfc .WFC .Wfc 

#
# Extra dependency on this file (used in test makefiles)
#

EXTRA_DEPENDS := ../configuration/x86-win-Demo-Target-ARM3-C.mk