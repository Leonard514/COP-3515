/*
In C, arrays without a specification are filled with garbage from the computer's memory.
In this test, we will make two arrays, one with no initialized values and one with
initialized values, and we will compare the contents of each.
*/

#include <stdio.h>

int main()
{
    // Each array must have number of elements and datatype of elements declared.
    // It looks like we can only use one datatype in a given array, unlike python :(
    int arr[10];
    int arr1[10] = {0};

    /* Let's print the arrays directly. As you can see, it prints
    garbage regardless of what kind of array we're talking about */

    printf("arr, the garbage version, printed looks like: %a\n", arr);
    printf("arr1, the nongarbage version, printed looks like: %a\n", arr1);

    // Let's see what happens when you print the first element of each array

    printf("arr[0]: %d\n", arr[0]);
    printf("arr1[0]: %d\n", arr1[0]);

    // Let's see what happens when we print the fifth element

    printf("arr[4]: %d\n", arr[4]);
    printf("arr1[4]: %d\n", arr1[4]);

    // Arrays are technically not bounded (this is a security issue). Let's
    // see what happens if we print the hundredth element of each array.

    printf("arr[99]: %d\n", arr[99]);
    printf("arr1[99]: %d\n", arr1[99]);
    

    return(0);
}