#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // concatenation sample
    char ChristmasTree[15] = "Christmas";
    strncat(ChristmasTree, " Tree", 5);
    printf("Concatenated string: %s\n", ChristmasTree);

    // copy example

    char CopyString[40] = "Hrar hrar ree wee";
    strncpy(CopyString, "Hello World!", 12);
    printf("Copied string: %s\n", CopyString);

    // comparison example - strncmp seems to compare the 
    // values character by character and return integer
    // based on the first different character. d is three greater
    // than a, a is 32 greater than A. It seems to utilize the ASCII
    // values similar to how it works in Python. 

    char string1[4] = "ab";
    char string2[4] = "Aa";

    printf("string1 then string2: %d\n", strncmp(string1, string2, 2));
    printf("string1 then string1: %d\n", strncmp(string1, string1, 2));
    printf("string2 then string1: %d\n", strncmp(string2, string1, 2));


    // Make strings numbers!!! YAAAAY!!!!
    // Known as ASCII to integer/float
    // atof() doesn't work without stdlib.h

    char int_str[5] = "255";
    char float_str[10] = "192.168";

    printf("255 + 1 = %d\n", atoi(int_str) + 1);
    printf("192.168 + 2.1 = %f\n", atof(float_str) + 2.1);

    // get a string's length, utilize n for max length (security)

    printf("Length of 192.168: %d\n", strnlen(float_str, 10));




}