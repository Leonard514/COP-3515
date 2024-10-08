#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("\n# of command line arguments: %d\n\n", argc);
    printf("program name: %s\n\n\n", argv[0]);

    for (i = 0; i < argc; i++)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
}