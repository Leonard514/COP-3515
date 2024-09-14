#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("test.txt", "r");
    char file_char = fgetc(fp);
    printf("File character is %c", file_char);
    return(0);
}