#include <string.h>
#include <stdio.h>

int main(void)
{
    char str1[20], str2[20];

    strcpy(str2, "abcd");
    printf("str2 = %s\n", str2);

    strcpy(str1, str2);
    printf("str1 = %s\n", str1);
}