#include <stdio.h>
#include <string.h>

int main()
{
    char test[15] = "Hello World!";

    char *p = strchr(test, '0');

    printf("Test is %s\n", p);
}