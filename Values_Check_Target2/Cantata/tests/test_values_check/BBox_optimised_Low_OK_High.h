struct CPPTH_LOOP_INPUT_STRUCT CPPTH_LOOP_INPUT[] = {
    {"BBox Low (1/144)", "average of a&b inputs are low, expect return TOO_LOW", "{{system_valid#Valid_Data}{high_value_check#default}{low_value_check#default}}", 0, 10, 10, 10, 10, 0, 2, 5, TOO_LOW},
    {"BBox OK (18/144)", "average of a&b inputs are acceptable, expect return OK", "{{system_valid#Valid_Data}{high_value_check#default}{low_value_check#default}}", 0, 10, 15, 13, 20, 2, 0, 5, OK},
    {"BBox High (36/144)", "average of a&b inputs are high, return TOO_HIGH", "{{system_valid#Valid_Data}{high_value_check#default}{low_value_check#default}}", 0, 10, 20, 19, 20, 2, 0, 5, TOO_HIGH}
};