#include <stdio.h>
#include <string.h>

int main(void)
{
    int len;

    len = strlen("abc");
    printf("String length: %d\n", len);

    len = strlen("");
    printf("String length: %d\n", len);
}