#
# Generated makefile for test "atest_reverse_string"
#

#
# Stop the MAKEFLAGS variable being exported.
# This is needed for sub-make processes to use different options.
#
unexport MAKEFLAGS

#
# The name of the test
#
THIS_TEST := atest_reverse_string

#
# Test script file
#
atest_reverse_string_TESTOBJ := atest_reverse_string

#
# Software under test
#
atest_reverse_string_SUTOBJ := reverse_string

#
# Compile and link as 'C' or 'CXX'
#
atest_reverse_string_C_OR_CPP_MODE := C

#
# Additional libraries to link
#
atest_reverse_string_EXTLIBS := 

#
# Additional object files to link
#
atest_reverse_string_EXTOBJS := 

#
# Additional defines for this test
#
atest_reverse_string_DEFINES := 

#
# Additional includes for this test
#
atest_reverse_string_INCLUDES := 

#
# Include the test definitions makefile
#
include ../configuration/test_defs.mk

#
# Rules for compiling the software under test
#
atest_reverse_string/reverse_string.o : ../../reverse_string.c
	$(MKDIR_CMD) -p atest_reverse_string
	@$(RM_CMD) $(DYNAMIC_THIS_TEST)/*.cov $(DYNAMIC_THIS_TEST)/*.ctr $(DYNAMIC_THIS_TEST)/*.ctg
	@$(ECHO_CMD_MED) ,,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),1,0,0,0,0 >> $(CANTPP_TOP_LEVEL_LOG)
	-@$(ECHO_CMD_MED) ../../reverse_string.c > $(DYNAMIC_THIS_TEST)/filelist.lst
	-@$(QAC_CMD)
	$(subst %DEFINES%, $(foreach define,$(atest_reverse_string_ALL_DEFINES),$(DEFINE_OPT)$(define)), $(subst %INCLUDES%, $(foreach include,$(atest_reverse_string_ALL_INCLUDES),$(subst %s,$(include),$(INCLUDE_PATH_OPT))), $(subst %n,$(DYNAMIC_THIS_TEST)/$(atest_reverse_string_SUTOBJ),$(COMPILE_CC_CMD))))

#
# Rule for compiling the test script
#
atest_reverse_string/atest_reverse_string.o : atest_reverse_string/atest_reverse_string.c
	$(MKDIR_CMD) -p atest_reverse_string
	@$(RM_CMD) $(DYNAMIC_THIS_TEST)/*.cov $(DYNAMIC_THIS_TEST)/*.ctr $(DYNAMIC_THIS_TEST)/*.ctg
	@$(ECHO_CMD_MED) ,,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),1,0,0,0,0 >> $(CANTPP_TOP_LEVEL_LOG)
	-@$(ECHO_CMD_MED) atest_reverse_string/atest_reverse_string.c > $(DYNAMIC_THIS_TEST)/filelist.lst
	$(subst %DEFINES%, $(foreach define,$(atest_reverse_string_ALL_DEFINES),$(DEFINE_OPT)$(define)), $(subst %INCLUDES%, $(foreach include,$(atest_reverse_string_ALL_INCLUDES),$(subst %s,$(include),$(INCLUDE_PATH_OPT))), $(subst %n,$(DYNAMIC_THIS_TEST)/$(atest_reverse_string_SUTOBJ),$(COMPILE_CC_CMD))))

#
# Rule for linking the test executable
#
$(atest_reverse_string_TEST_EXE) : \
	$(atest_reverse_string_SUTOBJ_FILENAMES) \
	$(atest_reverse_string_TESTOBJ_FILENAMES) \
	$(atest_reverse_string_EXTRA_DEPENDS)
	@$(RM_CMD) $(DYNAMIC_THIS_TEST)/*.cov $(DYNAMIC_THIS_TEST)/*.ctr $(DYNAMIC_THIS_TEST)/*.ctg
	@$(ECHO_CMD_MED) ",,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),1,0,0,1,0" >> $(CANTPP_TOP_LEVEL_LOG)
	$(subst %EXTLIBS%, $(foreach extlib,$(atest_reverse_string_ALL_EXTLIBS),$(subst %s,$(extlib),$(atest_reverse_string_LINK_EXTLIBOPT))), $(subst %n,$(DYNAMIC_THIS_TEST)/atest_reverse_string,$(subst %EXTOBJS%,$(atest_reverse_string_EXTOBJS),$(CC_LINK_CMD))))
	@$(ECHO_CMD_MED) Built atest_reverse_string successfully

#
# Rule for running the test executable
#
$(atest_reverse_string_CTR_FILE) : $(atest_reverse_string_TEST_EXE)
	@$(ECHO_CMD_MED) ,,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),0,1,0,1,0 >> $(CANTPP_TOP_LEVEL_LOG)
	@$(RUN_CMD)
	@$(ECHO_CMD_MED) ,,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),0,0,1,0,0 >> $(CANTPP_TOP_LEVEL_LOG)

#
# Rule for ensuring nothing is built/run unless the ctr file is out of date
#
$(atest_reverse_string_RUN) : $(atest_reverse_string_CTR_FILE)

#
# Rule for controlling the building and running of the test executable
#
ifeq ($(EXECUTE),1)
ifeq ($(PUSH_TO_SERVER),1)
$(atest_reverse_string_BUILD_AND_RUN) : 
	-@$(MAKE) $(atest_reverse_string_RUN) --warn-undefined-variables -s -f $(DYNAMIC_THIS_TEST)/test.mk 2>&1 | tee -a $(DYNAMIC_THIS_TEST)/$($(DYNAMIC_THIS_TEST)_LOG)
	@$(ECHO_CMD_MED) Uploading test results to Cantata Server...
	@$(JAVA_CMD) -cp "$(CANTATA_INSTALL_DIR)/bin/client.jar" com.qas.cantata.client.control.CCLC filesToLoad=$(DYNAMIC_THIS_TEST)/.*.ctr,$(DYNAMIC_THIS_TEST)/.*.ctg,$(DYNAMIC_THIS_TEST)/.*.cov,../../reverse_string.c,$(DYNAMIC_THIS_TEST)/atest_reverse_string.c optionsFiles=../../ipg.cop,$(DYNAMIC_THIS_TEST)/ipg.cop 2>&1 | tee -a $(DYNAMIC_THIS_TEST)/$($(DYNAMIC_THIS_TEST)_LOG)
	@$(CTR_STATE_CMD)
else
$(atest_reverse_string_BUILD_AND_RUN) : 
	-@$(MAKE) $(atest_reverse_string_RUN) --warn-undefined-variables -s -f $(DYNAMIC_THIS_TEST)/test.mk 2>&1 | tee -a $(DYNAMIC_THIS_TEST)/$($(DYNAMIC_THIS_TEST)_LOG)
	@$(CTR_STATE_CMD)
endif
else
$(atest_reverse_string_BUILD_AND_RUN) : 
	@$(MAKE) $(atest_reverse_string_TEST_EXE) --warn-undefined-variables -s -f $(DYNAMIC_THIS_TEST)/test.mk 2>&1 | tee -a $(DYNAMIC_THIS_TEST)/$($(DYNAMIC_THIS_TEST)_LOG)
	@$(ECHO_CMD_MED) Finished $(DYNAMIC_THIS_TEST)
endif

#
# Rules for generating the required folder structure
#

#
# Additional dependencies
#
atest_reverse_string/atest_reverse_string.o : ../../../../../../../PROGRA~2/Jenkins/workspace/ReverseStringPipeline/reverse_string/reverse_string.h
atest_reverse_string/atest_reverse_string.o : ../../ipg.cop
atest_reverse_string/atest_reverse_string.o : atest_reverse_string/ipg.cop
atest_reverse_string/reverse_string.o : ../../../../../../../PROGRA~2/Jenkins/workspace/ReverseStringPipeline/reverse_string/reverse_string.h
atest_reverse_string/reverse_string.o : ../../ipg.cop
atest_reverse_string/reverse_string.o : atest_reverse_string/ipg.cop


