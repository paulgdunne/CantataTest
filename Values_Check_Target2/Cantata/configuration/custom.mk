#
# Cantata Custom Makefile.
# This makefile contains rules that can be modified to perform any combination of pre and post build actions, 
# as well as different actions before and after each test build.
#
# The rule names are preset and should not be modified. Changing these will result in the Cantata build system
# not functioning correctly.
#
# It is not recommended that this makefile is modified without some knowledge of make commands and syntax. 
#

#
# Makefile variables from the Cantata build system that are available for use with these rules are:
# All variables declared in the config.mk file
# All variables exported from the Makefile file
# 

# If some commands are specific to a particular test (rather than each test in turn) the %/custom_pre_build
# and %/custom_post_build rules below can be overridden by introducing new rules.
# For example, if there are two tests (test_A and test_B) and some commands were necessary before test_A is built
# but not test_B then the following rule could be added into this makefile:
#
# test_A/custom_pre_build :
# 	<Commands>....
#
# With this rule in place, the %/custom_pre_build rule would only get run before test_B was built, and the 
# test_A/custom_pre_build rule would be run before test_A was built.

#
# An example rule for executing QAC for each test that is built. In the example the 'filelist.lst' file is assumed
# to be located in the same directory as the test script, and must be created manually. It is also assumed that
# all required QAC exectuables are available on the PATH, and QAC has been previously set up for use with the project
#
# %/custom_pre_build :
#	@echo Running QAC on files listed in $*/filelist.lst
#	@qaw qac -list $*/filelist.lst -plog
#

#
# An example rule for executing QAC before any tests are built. In the example the 'filelist.lst' file is assumed
# to be located in the 'tests' directory and must be created manually. It is also assumed that all required QAC 
# exectuables are available on the PATH, and QAC has been previously set up for use with the project
#
# custom_pre_build :
#	@echo Running QAC on files listed in filelist.lst
#	@qaw qac -list filelist.lst -plog
#

# The custom rules that can be modified are below:

# This rule is automatically executed at the start of any build with the Cantata Makefiles
#custom_pre_build :
#	@echo Performing pre build steps.

# This rule is automatically executed at the end of any build with the Cantata Makefiles
#custom_post_build :
#	@echo Performing post build steps
#	@echo

# This rule is automatically executed at the start of every individual test build	
#%/custom_pre_build :
	

# This rule is automatically executed at the end of every individual test build
#%/custom_post_build :
	
