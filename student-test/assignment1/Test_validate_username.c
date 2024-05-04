#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"



void test_validate_my_username()
{
    /**
     * TODO: Replace the line below with your code here as described above to verify your /conf/username.txt 
     * config file and my_username() functions are setup properly
     */
    const char *expected_string = my_username();

    char *input_string = malloc_username_from_conf_file();

    const char *error_message = "The strings do not match!";

    TEST_ASSERT_EQUAL_STRING_MESSAGE(expected_string, input_string, error_message);
}
