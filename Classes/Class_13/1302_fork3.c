#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int i = 0; i < 2; i++)
    {
        fork();
        printf("Hi!\n");
    }
}