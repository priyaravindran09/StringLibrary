/**
 * @file            main.c
 * @description     Test application
 *
 * @author          Shanmugapriya Ravindran
 *
 * @copyright
 *
 */

#include <stdio.h>
#include "slib.h"

// Test application
int main(void)
{
    char* found;
    char string[] = "Metabolism";
    char substring[] = "bol";

    found = slib_find_sub_string(string,substring);

    if(found)
        printf("String found at %d\n",(int)(found - string)+1);
    else
        printf("String not found\n");


    return 0;

}
