#include <stdio.h>

int main()
{
    char hrar[5] = "hrar";
    char *ptr = &hrar;

    printf("%c\n", *ptr);

    ptr++;

    printf("%c\n", *ptr);

    ptr++;

    printf("%c\n", *ptr);

    ptr++;

    printf("%c\n", *ptr);

    *ptr = NULL;

    printf("%c\n", *ptr);

    return(0);
}