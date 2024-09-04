/*
This program shows the difference between
pre-increment and post-increment operators
*/

#include <stdio.h>

int main()
{
    int a;
    int b;
    
    // Make pre-increment operator, which increments
    // a before the operation
    
    a = 10;
    b = ++a - 2;
    printf("a = %d\nb = %d\n\n", a, b);

    // The post-increment operator increments a after the operation

    a = 10;
    b = a++ - 2;
    printf("a = %d\nb = %d\n", a, b);

    // I can make a large number like this:

    int large = 1e6;
    printf("The number is %d\n", large);
    
    return(0);
}