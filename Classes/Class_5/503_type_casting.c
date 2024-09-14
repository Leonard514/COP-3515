#include <stdio.h>

int main()
{
    char sample = '1';
    int sample = 1;

    // Notice type casting a character will utilize its ASCII value always
    // This means we can't convert "numeric" strings to integers that easily,
    // but that's not a problem since in C we can take numeric input (whereas)
    // in Python we could only take string input
    
    printf("1 + 2 = %d\n", (int)sample + 2);

    return(0);
}