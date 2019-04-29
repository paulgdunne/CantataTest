/*****************************************************************************/
/*                                                                           */
/*                       Cantata User Guide Example                          */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/* Example  : Reverse String (C)                                             */
/*                                                                           */
/* Filename : reverse_string.c                                               */
/*                                                                           */
/*****************************************************************************/

#include "reverse_string.h"

char* reverse_string(char* original_str)
{
    int start = 0;
    int end = 0;
    char* reverse_str = NULL;
 
    if (original_str != NULL)
    {
        start = 0;
        end = (int) strlen(original_str);
        reverse_str = (char*) malloc(sizeof(char) * (end + 1));
        
        /* 
         * Loop backwards through the elements of the original string copying 
         * them into the reverse string.
         */
        while(start < end)
        {
            reverse_str[start] = original_str[((end - 1) - start)];
            start++;
        }
    
        /*
         * Add the NULL terminator to the end of the reverse string
         */
        reverse_str[(end)] = '\0';
    }

    return reverse_str;
}
