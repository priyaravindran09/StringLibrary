#include <stdio.h>

char* myStrstr(char* string, char* substring)
{
    if((string == NULL) || (substring == NULL))
        return NULL;
    
    char* s;
    char* ss;

    ss = substring;
    
    while(*string != '\0')
    {
        ss = substring;
        if(*string++ != *ss)
            continue;
        else
        {
            s = string;
            ss+=1;
            while(1)
            {
                if(*ss == '\0')
                    return --string;    //returning from the first character
                    
                if(*s++ != *ss++)
                    break;
            }
        }
    }
    
    return NULL;
}


int main(void)
{
    char* found;
    char string[] = "HeyInotIamHere";
    char substring[] = "Iam";
    
    printf("Is the substring found in string?\n");
    
    found = myStrstr(string,substring);
    
    if(found)
        printf("String found %s\n",found);
    else
        printf("String not found\n");
        
        
    return 0;
    
}
