#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20], str2[20];

    strcpy(str1, "Hello");
    strcpy(str2, "Hello");
    
    printf("str1 = %s, str2 = %s\n", str1, str2);

    strcpy(str1, "Goodbye");
    printf("str1 = %s, str2 = %s\n", str1, str2);

    printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));

    strcpy(str1, "Hello");
    strcpy(str2, "Goodbye");
    printf("str1 = %s, str2 = %s\n", str1, str2);
    printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));

    strcpy(str1, "abc");
    strcpy(str2, "abcd");
    printf("str1 = %s, str2 = %s\n", str1, str2);
    printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));

}