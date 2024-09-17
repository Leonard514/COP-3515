#include <stdio.h>

int main()
{
    int i=10;
    // while: Has a boolean expression i>0 and a statement
    // If the boolean expression is not true on first attempt,
    // the statement never executes
    while (i>0)
    {
        printf("T minus %d and counting\n", i);
        i--;
    }
}