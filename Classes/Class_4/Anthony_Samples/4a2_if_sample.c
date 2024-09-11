// This crashes on execution due to semicolon on if statement

#include <stdio.h>

int main()
{
    char var = 't';

    if (var == 'c');
    {
        printf("C found!\n");
    }
    else
    {
        printf("C not found\n");
    }
}