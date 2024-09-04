/*
This file plays around with pointers to a constant
*/

#include <stdio.h>

int main()
{
    int num = 5;
    const int limit = 500;
    int *numPtr = &num;

    // If a pointer points to constant, it cannot modify the
    // value being referenced

    const int *constPtr = &limit;
    
    printf("num - Address: %p value: %d\n",&num, num);
    printf("limit - Address: %p value: %d\n",&limit, limit);
    printf("numPtr - Address: %p value: %p\n",&numPtr, numPtr);
    printf("constPtr - Address: %p value: %p\n",&constPtr, constPtr);

    // We can read the constPtr's value, we can't change it
    printf("Here is the value pointed to by constPtr: %d\n", *constPtr);

    return(0);
}