#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *writeptr;

    writeptr = fopen("hi.txt", "w");

    fprintf(writeptr, "\n999\n\nHello World!");

    fclose(writeptr);

    FILE *readptr;

    readptr = fopen("hi.txt", "r");

    char hi_str[20];

    int hi_int;

    fscanf(readptr, "%d ", &hi_int);

    fgets(hi_str, 20, readptr);

    printf("%s %d\n", hi_str, hi_int);
}