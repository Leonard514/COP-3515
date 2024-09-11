#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "example.txt"

int main()
{
    FILE *fp;

    fp = fopen(FILE_NAME, "r");
    if (fp == NULL)
    {
        printf("Can't open %s\n", FILE_NAME);
        return 1;
    }
}