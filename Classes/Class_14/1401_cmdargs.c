#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    printf("Number of command line arguments: %d\n\n", argc);
    printf("Program name: %s\n\n", argv[0]);

    for (int i = 0; i < argc; i++)
    {
        printf("Arg %d: %s\n", i, argv[i]);
    }
}