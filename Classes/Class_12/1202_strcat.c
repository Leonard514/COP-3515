#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];

    strcpy(str1, "abc");
    strcpy(str2, "def");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    strcat(str1, str2);
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    return(0);
}