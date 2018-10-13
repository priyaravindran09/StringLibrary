/**
 * @file            slib.h
 * @description     String operations driver
 *
 * @author          Shanmugapriya Ravindran
 *
 * @copyright
 *
 */

// Public Functions

/**
 * @brief helper fucntion to locate a substring in a string
 * @param pointer to the main string
 * @param substring to be found
 *
 * @return pointer to the start of the substring
 */
char* slib_find_sub_string(const char* string,
        const char* substring);

