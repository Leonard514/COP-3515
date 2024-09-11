// This crashes on execution due to absence of
// curly braces on if statement

#include <stdio.h>

int main()
{
    char var = 'c';

    if (var == 'c')
    {
        printf("Character found!\n");
        printf("Character: %c", var);
    }    
else
    {
        printf("Character not found\n");
    }
}