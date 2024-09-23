#include <stdio.h>

int main()
{
    char names[5][15] = {"Anthony", "Leonard", "Katherine", "Joseph", "John"};

    printf("My brother is %s\n", names[0]);
    printf("My name is %s\n", names[1]);
    printf("Let's try one character at a time: %c %c %c %c\n", names[4][0], names[4][1], names[4][2], names[4][3]);


    switch (names[3][0])
    {
        default: printf("hrar hrar hrar!!!\n"); break;
        case 'A': printf("Anthony!\n"); break;
        case 'L': printf("Hi!\n"); break;
        case 'K': printf("Katie!\n"); break;
        case 'J': printf("Joseph!\n"); break;

    }

    switch (names[0][0])
    {
        default: printf("hrar hrar hrar!!!\n");
        case 'A': printf("Anthony!\n");
        case 'L': printf("Hi!\n");
        case 'K': printf("Katie!\n");
        case 'J': printf("Joseph!\n");
    }

    if (names[2][3] == 'h')
    {
        printf("hhhhhhhhhh\n");
    }
    else
    {
        printf("Hi!\n");
    }


    // For AND OR XOR NOT of integers, convert them to binary and perform
    // the operations bitwise

    if (3^2 && 5 > 3)
    {
        printf("Test passed\n");
    }
    else
    {
        printf("Test failed\n");
    }
}