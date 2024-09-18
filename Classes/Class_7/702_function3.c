#include <stdio.h>

int isletter(char c)
{
    if (c >= 65 && c <= 90)
        return 1;
    else if (c >= 97 && c <= 122)
        return 1;
    else
        return 0;
}

int main(void)
{
    char letter;

    printf("Please enter a character: \n");
    scanf("%c", &letter);
    printf("result = %d\n", isletter(letter));
    return(0);
}