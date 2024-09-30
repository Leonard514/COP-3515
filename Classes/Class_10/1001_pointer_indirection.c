#include <stdio.h>

int main(void)
{
    int i;
    int *p;

    i = 5;
    p = &i;
    printf("%d\n", *p);

    return(0);
}