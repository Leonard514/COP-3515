/*
In C, arrays without a specification are filled with garbage from the computer's memory.
In this test, we will make two arrays, one with no initialized values and one with
initialized values, and we will compare the contents of each. We will also mess around with
arrays being initialized to various extents and variable-length arrays. This is the place where
I first learned about debug mode, so you'll notice I start printing less stuff here since I'm
relying on that more.
*/

#include <stdio.h>

int main()
{
    // Each array must have number of elements and datatype of elements declared.
    // It looks like we can only use one datatype in a given array, unlike python :(
    int arr[10];
    int arr1[10] = {0};

    /* Let's print the arrays directly. As you can see, it prints
    garbage regardless of what kind of array we're talking about. It looks
    like it's impossible to print the whole thing on the screen, maybe we can
    use some debug tools! */

    printf("arr, the garbage version, printed looks like: %a\n", arr);
    printf("arr1, the nongarbage version, printed looks like: %a\n", arr1);

    // Let's see what happens when you print the first element of each array

    printf("arr[0]: %d\n", arr[0]);
    printf("arr1[0]: %d\n", arr1[0]);

    // Let's see what happens when we print the seventh element
    // arr[4] yielded a very large number

    printf("arr[4]: %d\n", arr[4]);
    printf("arr1[4]: %d\n", arr1[4]);

    // Arrays are technically not bounded (this is a security issue). Let's
    // see what happens if we print the hundredth element of each array.
    // Both yielded 32767, the maximum positive value for a 2-byte signed integer.

    printf("arr[99]: %d\n", arr[99]);
    printf("arr1[99]: %d\n", arr1[99]);


    // Let's make an array that's partially initialized - if you make a breakpoint,
    // there should be zeros for the missing values

    int arr2[10] = {1, 2, 3, 4, 5};


    // Let's make a variable length array - let's use debug mode lol

    int arr_len = 5;

    /* Oddly enough, you can't initialize a variable-length array with values right away.
    I would guess this might have something to do with C not knowing how many values
    it will have to accept. You must load the values in later, and you must load them in
    one-at-a-time. */

    int array_one[arr_len];
    array_one[0] = 1;
    array_one[4] = 5;

    char str_arr[5] = "Hello";

    printf("%c", str_arr[0]);

    char first = StrToEnum(str_arr[0]);
    

    return(0);
}