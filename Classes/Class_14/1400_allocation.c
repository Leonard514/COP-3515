#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Utilize malloc with 5 integer elements
    int *mallocPtr = (int*) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, *mallocPtr);
        mallocPtr++;
    }
    mallocPtr -= 5;

    for (int i = 0; i < 5; i++)
    {
        *mallocPtr = i * 2;
        printf("Element %d: %d\n", i, *mallocPtr);
        mallocPtr++;
    }

    mallocPtr -= 5;

    // We need two more!
    mallocPtr = (int*) realloc(mallocPtr, sizeof(int) * 7);

    mallocPtr += 5;
    *mallocPtr = 10;
    printf("Element 5: %d\n", *mallocPtr);
    mallocPtr++;
    *mallocPtr = 12;
    printf("Element 6: %d\n", *mallocPtr);

    mallocPtr -= 6;

    free(mallocPtr);

    // Now try calloc
    int *callocPtr = (int*) calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, *callocPtr);
        callocPtr++;
    }
    callocPtr -= 5;

    for (int i = 0; i < 5; i++)
    {
        *callocPtr = i * 2;
        printf("Element %d: %d\n", i, *callocPtr);
        callocPtr++;
    }

    callocPtr -= 5;

    free(callocPtr);
}