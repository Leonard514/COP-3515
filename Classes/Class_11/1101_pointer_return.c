#include <stdio.h>

int *max(int *a, int *b)
{
    if (*a > *b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


int main(void)
{
    int *p;
    int i = 4;
    int j = 9;
    p = max(&i, &j);

    printf("p = %d\n", *p);

    return(0);
}