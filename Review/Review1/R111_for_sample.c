#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 8; i++)
    {
        if (i == 4)
        {
            continue;
        }
        if (i == 7)
        {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");
}