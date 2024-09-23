#include <stdio.h>

arrayPrinter(char arr[4]);

int main()
{
    char string[4] = "Cat\0";

    int var = arrayPrinter(string);
    printf("%d\n", var);
    
}


arrayPrinter(char arr[4])
{
    printf("Index 0: %c\n", arr[0]);
    printf("Index 1: %c\n", arr[1]);
    printf("Index 2: %c\n", arr[2]);
    return(1);
}