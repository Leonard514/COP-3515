/*
This is to test how pointers work
*/

#include <stdio.h>

int main()
{

    int num = 0;
    int *pi = &num;
    int *e = NULL;
    
    /* It looks like you can't plug in a variable
    without a format string. This does nothing.*/
    printf(num);

    // This acts as usual
    printf("The number is %d\n", num);

    // This prints the pointer's address
    printf("The address is %p\n", pi);

    // This prints the value that the pointer refers to
    printf("The pointer refers to value %d\n", *pi);
    
    // This guy produces a segmentation fault
    
    // printf("This is the value pointed to by e: %d\n", *e);

    // printf("This is the address of e: %p," e);

    return(0);
}