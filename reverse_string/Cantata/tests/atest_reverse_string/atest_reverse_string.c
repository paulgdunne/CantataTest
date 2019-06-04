/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: ${generated_filename}
 *    Author: ${author}
 *    Generated on: ${generation_date}
 *    Generated from: ${original_filename}
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#define TEST_SCRIPT_GENERATOR 2

/* Include files from software under test */
#include "../../../reverse_string.h"

#define CANTATA_DEFAULT_VALUE 0 /* Default value of variables & stub returns */

#include <cantpp.h>  /* Cantata Directives */
/* pragma qas cantata testscript start */
/*****************************************************************************/
/* Global Data Definitions                                                   */
/*****************************************************************************/

/* Global Functions */
extern char * reverse_string(char * original_str);

/* Global data */
/* None */

/* Expected variables for global data */
/* None */

/* This function initialises global data to default values. This function       */
/* is called by every test case so must not contain test case specific settings */
static void initialise_global_data(){
    /* No global data */
}

/* This function copies the global data settings into expected variables for */
/* use in check_global_data(). It is called by every test case so must not   */
/* contain test case specific settings.                                      */
static void initialise_expected_global_data(){
    /* No global data */
}

/* This function checks global data against the expected values. */
static void check_global_data(){
    /* No global data */
}

/* Prototypes for test functions */
void run_tests();
void test_1(int);

/*****************************************************************************/
/* Program Entry Point                                                       */
/*****************************************************************************/
int main()
{
    OPEN_LOG("atest_reverse_string.ctr", false, 100);
    START_SCRIPT("reverse_string", true);

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
    test_1(1);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/

void test_1(int doIt){
if (doIt) {
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    {
    /* Test case data declarations */
    char * original_str = NULL;
    char * returnValue;

    START_TEST("1: reverse_string",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = reverse_string(original_str);

            /* Test case checks */
            CHECK_ADDRESS(returnValue, "PAUL");
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}}

/*****************************************************************************/
/* Call Interface Control                                                    */
/*****************************************************************************/
#pragma qas cantata ignore on

/* Before-Wrapper for function strlen */
int BEFORE_strlen(const char * param_1){
    REGISTER_CALL("strlen");


    LOG_SCRIPT_ERROR("Call instance not defined.");
    return AFTER_WRAPPER;
}

/* After-Wrapper for function strlen */
size_t AFTER_strlen(size_t cppsm_return_value,
                    const char * param_1){
    size_t returnValue;

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return cppsm_return_value;
}

/* Replace-Wrapper for function strlen */
size_t REPLACE_strlen(const char * param_1){
    size_t returnValue;

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Before-Wrapper for function malloc */
int BEFORE_malloc(size_t param_1){
    REGISTER_CALL("malloc");


    LOG_SCRIPT_ERROR("Call instance not defined.");
    return AFTER_WRAPPER;
}

/* After-Wrapper for function malloc */
void * AFTER_malloc(void * cppsm_return_value,
                    size_t param_1){
    void * returnValue;

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return cppsm_return_value;
}

/* Replace-Wrapper for function malloc */
void * REPLACE_malloc(size_t param_1){
    void * returnValue;

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

#pragma qas cantata ignore off
/* pragma qas cantata testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
