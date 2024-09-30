#include <stdio.h>

int main()
{
    char test = ('a' == 'a');

    printf("%d\n", test, test);
   
    if ('a' == 'a' == 'a'){
        printf("Test 1 passed\n");
    }
    else
    {
        printf("Test 1 failed\n");
    }

    if ('a' == 'a' == 'b'){
        printf("Test 1 passed\n");
    }
    else
    {
        printf("Test 1 failed\n");
    }

    
}