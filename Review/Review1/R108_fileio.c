#include <stdio.h>

int main()
{
    FILE *writeptr;
    writeptr = fopen("hrar.txt", "w");

    fprintf(writeptr, "255\nAnthony Werthmiller");

    fclose(writeptr);

    FILE *readptr;
    readptr = fopen("hrar.txt", "r");

    int num;
    
    fscanf(readptr, "%d", &num);

    // getchar is from standard input, fgetc is from a file
    char hrar = fgetc(readptr);

    char name[25];
    
    fgets(name, 25, readptr);

    printf("Number is %d, name is %s", num, name);


}