/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: test_values_check.c
 *    Author: matt.davis
 *    Generated on: 30-Jun-2017 10:09:27
 *    Generated from: values_check.c
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#define TEST_SCRIPT_GENERATOR 2

/* Include files from software under test */
#include "../../../values.h"

#define CANTATA_DEFAULT_VALUE 0 /* Default value of variables & stub returns */

#include <limits.h>
#include <float.h>
#include <wchar.h>
#include <cantpp.h>  /* Cantata Directives */

/* pragma qas cantata testscript start */
/*****************************************************************************/
/* Global Data Definitions                                                   */
/*****************************************************************************/

/* Global Functions */
extern int ACCESS_FUNCTION_values_check_low_value_check();
extern int ACCESS_FUNCTION_values_check_high_value_check();
unsigned int system_valid();
extern warning_level values_check(int first_a, int second_a, int first_b, int second_b, unsigned short c, unsigned short d, unsigned short e);
extern warning_level values_check(int first_a, int second_a, int first_b, int second_b, unsigned short c, unsigned short d, unsigned short e);

/* Global data */
extern double share;
extern warning_level checked_status;
typedef struct values_check_av_struct { double* ref_average_b; } values_check_av_struct;
extern values_check_av_struct av_values_check;
extern double average_a;

/* Expected variables for global data */
double expected_share2;
int expected_checked_status;
typedef struct expected_values_check_av_struct { double ref_average_b; } expected_values_check_av_struct;
expected_values_check_av_struct expected_av_values_check;
double expected_average_a;

/* This function initialises global data to default values. This function       */
/* is called by every test case so must not contain test case specific settings */
static void initialise_global_data(){
    INITIALISE(share);
    INITIALISE(checked_status);
    INITIALISE(average_a);
}

/* This function copies the global data settings into expected variables for */
/* use in check_global_data(). It is called by every test case so must not   */
/* contain test case specific settings.                                      */
static void initialise_expected_global_data(){
    COPY_TO_EXPECTED(share, expected_share2);
    COPY_TO_EXPECTED(checked_status, expected_checked_status);
    COPY_TO_EXPECTED(average_a, expected_average_a);
}

/* This function checks global data against the expected values. */
static void check_global_data(){
    CHECK_DOUBLE(share, expected_share2);
    CHECK_S_INT(checked_status, expected_checked_status);
    CHECK_DOUBLE(average_a, expected_average_a);
}

/* Prototypes for test functions */
void run_tests();
void test_system_invalid(int);
void test_share_div_by_zero(int);
void BBox_Low_OK_High();
void BBox_optimised_Low_OK_High();
void WBox_optimised_Low_OK_High();
void test_WBox_average_a_and_b(int);
void test_WBox_low_average_b (int);
void test_WBox_high_average_b(int);


/*****************************************************************************/
/* Coverage Analysis                                                         */
/*****************************************************************************/
/* Coverage Rule Set: EN50128 2011 SIL 4 component level BC+CC my text string (HR) */
static void rule_set(char* cppca_sut,
                     char* cppca_context)
{
    START_TEST("COVERAGE RULE SET",
               "EN50128 2011 SIL 4 component level BC+CC my text string (HR)");
#ifdef CANTPP_SUBSET_DEFERRED_ANALYSIS
    TEST_SCRIPT_WARNING("Coverage Rule Set ignored in deferred analysis mode\n");
#elif CANTPP_COVERAGE_INSTRUMENTATION_DISABLED
    TEST_SCRIPT_WARNING("Coverage Instrumentation has been disabled\n");
#elif CANTPP_INSTRUMENTATION_DISABLED
    TEST_SCRIPT_WARNING("Instrumentation has been disabled\n");
#else
    ANALYSIS_CHECK("100% Entry Point Coverage",
                   cppca_entrypoint_cov,
                   100.0);
    
    ANALYSIS_CHECK("100% Statement Coverage",
                   cppca_statement_cov,
                   100.0);
                   
    ANALYSIS_CHECK("100% Decision Coverage",
                   cppca_decision_cov,
                   100.0);
    
    ANALYSIS_CHECK("100% Boolean Operand Effectiveness Coverage",
                   cppca_booleff_cov,
                   100.0);
    
    REPORT_COVERAGE(cppca_entrypoint_cov|
                    cppca_statement_cov|
                    cppca_decision_cov|
                    cppca_booleff_cov,
                    cppca_sut,
                    cppca_all_details|cppca_include_catch,
                    cppca_context);
#endif
    END_TEST();
}

/*****************************************************************************/
/* Program Entry Point                                                       */
/*****************************************************************************/
int main()
{
    CONFIGURE_COVERAGE("cov:boolcomb:yes");
	/* Uncomment this directive to demo lower memory use */
	/* RECORD_COVERAGE_BY_TEST_CASE(false); */

    OPEN_LOG("test_values_check.ctr", false, 100);

//    /* Trace coverage added for extra demo detail in .ctr file */
#ifndef CANTPP_SUBSET_DEFERRED_ANALYSIS
    TRACE_COVERAGE(cppca_entrypoint_cov|
                    cppca_statement_cov|
                    cppca_callreturn_cov|
                    cppca_booleff_cov|
                    cppca_decision_cov, "*", "*");
#endif

    START_SCRIPT("values_check", true);

    run_tests();

    return !END_SCRIPT(true);
}

/*****************************************************************************/
/* Test Control                                                              */
/*****************************************************************************/
/* run_tests() contains calls to the individual test cases, you can turn test*/
/* cases off by adding comments*/
void run_tests()
{
    test_system_invalid(1);
    test_share_div_by_zero(1);
    BBox_Low_OK_High();
    BBox_optimised_Low_OK_High();
    WBox_optimised_Low_OK_High();
    test_WBox_average_a_and_b(0);
    test_WBox_low_average_b(0);
    test_WBox_high_average_b(0);

    rule_set("*", "*");
    EXPORT_COVERAGE("test_values_check.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/
void test_system_invalid(int doIt){
if (doIt) {
    /* Test case data declarations */
    warning_level returnValue;

    START_TEST("System Invalid",
               "Call system_valid stubbed to return ERROR, expect checked_status [GD]= ERROR, expect return = ERROR");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("system_valid#Invalid_Data;");

            /* Call SUT */
        returnValue = values_check(CANTATA_DEFAULT_VALUE, CANTATA_DEFAULT_VALUE, CANTATA_DEFAULT_VALUE, CANTATA_DEFAULT_VALUE, CANTATA_DEFAULT_VALUE, CANTATA_DEFAULT_VALUE, CANTATA_DEFAULT_VALUE);

            /* Test case checks */
            CHECK_S_INT(returnValue, ERROR);
            CHECK_U_INT(checked_status, ERROR);

        END_CALLS();
    END_TEST();
}}

void test_share_div_by_zero(int doIt){
if (doIt) {
    /* Test case data declarations */
    warning_level returnValue;

    START_TEST("Share Error - Div by 0",
               "if c + d are both 0, expect share [GD] = ERROR, expect return = ERROR ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("system_valid#Valid_Data;");

            /* Call SUT */
        returnValue = values_check(CANTATA_DEFAULT_VALUE, CANTATA_DEFAULT_VALUE, CANTATA_DEFAULT_VALUE, CANTATA_DEFAULT_VALUE, CANTATA_DEFAULT_VALUE, CANTATA_DEFAULT_VALUE, CANTATA_DEFAULT_VALUE);

            /* Test case checks */
            CHECK_S_INT(returnValue, ERROR);
            CHECK_DOUBLE(share, ERROR);
        END_CALLS();
    END_TEST();
}}
void BBox_Low_OK_High(){
    struct CPPTH_LOOP_INPUT_STRUCT {
        char* name;                 // The name parameter to START_TEST
        char* description;          // The description parameter to START_TEST
        char* expected_calls;       // The parameter to EXPECTED_CALLS
        int execute;                // Whether the particular test should be run
        /* Test case data declarations */
        int first_a;
        int second_a;
        int first_b;
        int second_b;
        unsigned short c;
        unsigned short d;
        unsigned short e;
        warning_level expected_returnValue;
    };
    warning_level returnValue;
    /* Import external data declarations */
    #include "BBox_Low_OK_High.h"

    /* Set global data */
    initialise_global_data();

    START_TEST_LOOP();
        /* Expected Call Sequence  */
        EXPECTED_CALLS(CURRENT_TEST.expected_calls);

            /* Call SUT */
            returnValue = values_check(CURRENT_TEST.first_a, CURRENT_TEST.second_a, CURRENT_TEST.first_b, CURRENT_TEST.second_b, CURRENT_TEST.c, CURRENT_TEST.d, CURRENT_TEST.e);

            /* Test case checks */
            CHECK_S_INT(returnValue, CURRENT_TEST.expected_returnValue);
            CHECK_S_INT(checked_status, OK);
            CHECK_DOUBLE(share, 2.5);
        END_CALLS();
    END_TEST_LOOP();
}

void BBox_optimised_Low_OK_High(){
    struct CPPTH_LOOP_INPUT_STRUCT {
        char* name;                 // The name parameter to START_TEST
        char* description;          // The description parameter to START_TEST
        char* expected_calls;       // The parameter to EXPECTED_CALLS
        int execute;                // Whether the particular test should be run
        /* Test case data declarations */
        int first_a;
        int second_a;
        int first_b;
        int second_b;
        unsigned short c;
        unsigned short d;
        unsigned short e;
        warning_level expected_returnValue;
    };
    warning_level returnValue;
    /* Import external data declarations */
    #include "BBox_optimised_Low_OK_High.h"

    /* Set global data */
    initialise_global_data();

    START_TEST_LOOP();
        /* Expected Call Sequence  */
        EXPECTED_CALLS(CURRENT_TEST.expected_calls);

            /* Call SUT */
            returnValue = values_check(CURRENT_TEST.first_a, CURRENT_TEST.second_a, CURRENT_TEST.first_b, CURRENT_TEST.second_b, CURRENT_TEST.c, CURRENT_TEST.d, CURRENT_TEST.e);

            /* Test case checks */
            CHECK_S_INT(returnValue, CURRENT_TEST.expected_returnValue);
            CHECK_S_INT(checked_status, OK);
            CHECK_DOUBLE(share, 2.5);
        END_CALLS();
    END_TEST_LOOP();
}

void WBox_optimised_Low_OK_High(){
    struct CPPTH_LOOP_INPUT_STRUCT {
        char* name;                 // The name parameter to START_TEST
        char* description;          // The description parameter to START_TEST
        char* expected_calls;       // The parameter to EXPECTED_CALLS
        int execute;                // Whether the particular test should be run
        /* Test case data declarations */
        int first_a;
        int second_a;
        int first_b;
        int second_b;
        unsigned short c;
        unsigned short d;
        unsigned short e;
        warning_level expected_returnValue;
    };
    warning_level returnValue;
    /* Import external data declarations */
    #include "WBox_optimised_Low_OK_High.h"

    /* Set global data */
    initialise_global_data();

    START_TEST_LOOP();
        /* Expected Call Sequence  */
        EXPECTED_CALLS(CURRENT_TEST.expected_calls);

            /* Call SUT */
            returnValue = values_check(CURRENT_TEST.first_a, CURRENT_TEST.second_a, CURRENT_TEST.first_b, CURRENT_TEST.second_b, CURRENT_TEST.c, CURRENT_TEST.d, CURRENT_TEST.e);

            /* Test case checks */
            CHECK_S_INT(returnValue, CURRENT_TEST.expected_returnValue);
            CHECK_S_INT(checked_status, OK);
            CHECK_DOUBLE(share, 2.5);
        END_CALLS();
    END_TEST_LOOP();
}

void test_WBox_average_a_and_b(int doIt){
if (doIt) {
    /* Test case data declarations */
    warning_level returnValue = CANTATA_DEFAULT_VALUE;
    warning_level expected_returnValue = TOO_LOW;
    /* Set global data */
    initialise_global_data();

    START_TEST("WBox av a & b",
               "input low values, directly check average_a & average_b static data, expect return = TOO LOW");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{system_valid#Valid_Data}{high_value_check#default}{low_value_check#default}}");

            /* Call SUT */
            returnValue = values_check(1, 2, 3, 4, 1, 1, 9);

            /* Test case checks */
            CHECK_S_INT(returnValue, TOO_LOW);
            CHECK_DOUBLE_NAMED("average of 1st & 2nd a", average_a, 1.5);
            CHECK_DOUBLE_NAMED("average of 1st & 2nd b", ACCESS_VARIABLE(values_check, average_b), 3.5);
            CHECK_S_INT(checked_status, OK);
            CHECK_DOUBLE(share, 4.5);
        END_CALLS();
    END_TEST();
}}

void test_WBox_low_average_b (int doIt){
if (doIt) {
    /* Test case data declarations */
	warning_level returnValue = CANTATA_DEFAULT_VALUE;
	warning_level expected_returnValue = 1;
    /* Set global data */
    initialise_global_data();
    average_a = 11.25;
    ACCESS_VARIABLE(values_check, average_b) = 15.24;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("WBox low av b",
               "Call low_value_check() directly with acceptable average_a & low average_b for relational operator or MC/DC coverage, expect low value return = true");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION_values_check_low_value_check();

            /* Test case checks */
            CHECK_S_INT(returnValue, 1);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_WBox_high_average_b(int doIt){
if (doIt) {
    /* Test case data declarations */
	warning_level returnValue = CANTATA_DEFAULT_VALUE;
	warning_level expected_returnValue = 1;
    /* Set global data */
    initialise_global_data();
    average_a = 0.0;
    ACCESS_VARIABLE(values_check, average_b) = 18.26;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("WBox high av b",
               "Call high_value_check() directly with low average_a & high average_b for relational operator or MC/DC coverage, expect high_value return = true");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION_values_check_high_value_check();

            /* Test case checks */
            CHECK_S_INT(returnValue, 1);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}


/*****************************************************************************/
/* Call Interface Control                                                    */
/*****************************************************************************/

/* Stub for function system_valid */
unsigned int system_valid(){
    int returnValue;
    REGISTER_CALL("system_valid");

    IF_INSTANCE("Valid_Data") {
        return OK;
    }
    IF_INSTANCE("Invalid_Data") {
        return ERROR;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

#pragma qas cantata ignore on

/* Before-Wrapper for function high_value_check */
int BEFORE_high_value_check(){
    int instanceType = AFTER_WRAPPER;
    REGISTER_CALL("high_value_check");

    IF_INSTANCE("default") { 
        return AFTER_WRAPPER;
    }
    IF_INSTANCE("high") {

        return AFTER_WRAPPER;
    }
    IF_INSTANCE("not_high") {

        return AFTER_WRAPPER;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return instanceType;
}

/* After-Wrapper for function high_value_check */
int AFTER_high_value_check(int cppsm_return_value){
    int returnValue;
    IF_INSTANCE("default") { 
        return cppsm_return_value;
    }
    IF_INSTANCE("high") {
        CHECK_U_INT_NAMED("return is high", cppsm_return_value, 1);
        return cppsm_return_value;
    }
    IF_INSTANCE("not_high") {
        CHECK_S_INT_NAMED("return is not high", cppsm_return_value, 0);
        return cppsm_return_value;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return cppsm_return_value;
}

/* Replace-Wrapper for function high_value_check */
int REPLACE_high_value_check(){
    int returnValue;
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}


/* Before-Wrapper for function low_value_check */
int BEFORE_low_value_check(){
    int instanceType = AFTER_WRAPPER;
    REGISTER_CALL("low_value_check");

    IF_INSTANCE("default") { 
        return AFTER_WRAPPER;
    }
    IF_INSTANCE("low") {

        return AFTER_WRAPPER;
    }
    IF_INSTANCE("not_low") {

        return AFTER_WRAPPER;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return instanceType;
}

/* After-Wrapper for function low_value_check */
int AFTER_low_value_check(int cppsm_return_value){
    int returnValue;
    IF_INSTANCE("default") { 
        return cppsm_return_value;
    }
    IF_INSTANCE("low") {
        CHECK_S_INT_NAMED("return is low", cppsm_return_value, 1);
        return cppsm_return_value;
    }
    IF_INSTANCE("not_low") {
        CHECK_S_INT_NAMED("return is not low", cppsm_return_value, CANTATA_DEFAULT_VALUE);
        return cppsm_return_value;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return cppsm_return_value;
}

/* Replace-Wrapper for function low_value_check */
int REPLACE_low_value_check(){
    int returnValue;
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

#pragma qas cantata ignore off


/* pragma qas cantata testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
