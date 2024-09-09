#include <stdio.h>

int main()
{
    int output = 1 ? 2 : 3;

    // Equivalent to
    /*
    if (1)
    {
    output = 2
    }
    else {
    output = 3
    }
    */
    printf("Output is %d\n", output);
}