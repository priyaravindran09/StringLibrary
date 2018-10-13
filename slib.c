/**
 * @file            slib.c
 * @description     String operation implementation
 *
 * @author          Shanmugapriya Ravindran
 *
 * @copyright
 *
 */

#include <stdint.h>
#include <stdlib.h>
#include "slib.h"

// Function Definitions

char* slib_find_sub_string(const char* string, const char* substring)
{
    if((string == NULL) || (substring == NULL))
        return NULL;

    char *s_ptr, *ss_ptr;
    ss_ptr = (char*)substring;

    while(*string != '\0')
    {
        ss_ptr = (char*)substring;
        if(*string++ != *ss_ptr) {
            continue;
        }
        else {
            s_ptr = (char*)string;
            ss_ptr+=1;
            while(1) {
                if(*ss_ptr == '\0')
                    return (char*)(--string);    //returning from the first character

                if(*s_ptr++ != *ss_ptr++)
                    break;
            }
        }
    }
    return NULL;
}

