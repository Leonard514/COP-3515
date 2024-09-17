#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 8; i++)
    {
        if (i == 4)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    int i = 0;

    while (i <= 8)
    {
        if (i == 7)
        {
            continue;
        }
        printf("%d ", i);
        i++;
    }

    return(0);
}