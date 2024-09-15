#include <stdio.h>

int main()
{
    char sample = "";
    char sample1 = '1';
    int sample2 = 1;

    // Notice type casting a character will utilize its ASCII value always
    // This means we can't convert "numeric" strings to integers that easily,
    // but that's not a problem since in C we can take numeric input (whereas)
    // in Python we could only take string input
    
    printf("1 + 2 = %d\n", (int)sample1 + 2);

    return(0);
}