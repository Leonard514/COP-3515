#include <stdio.h>
#include <string.h>

int main()

{
    char char1 = 'd';
    char charArr1[3] = "f\n\0";

    if (char1 == 'd')
    {
        printf("Everything's fine with char types\n");
    }

    if (charArr1 == 'f')
    {
        printf("Test 1: This array is working properly\n");
    }
    else
    {
        printf("Test 1: Something went wrong\n");
    }

    if (!strncmp(charArr1, "f\n\0", 3))
    {
        printf("Test 2: This array is working properly\n");
    }
    else
    {
        printf("Test 2: Something went wrong\n");
    }

    if (charArr1[0] == 'f')
    {
        printf("charArr1[0] == f\n");
    }
    else
    {
        printf("charArr1[0] != f\n");
    }



}