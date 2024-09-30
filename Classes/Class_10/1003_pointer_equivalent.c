#include <stdio.h>

int main(void)
{
    int i = 7;
    int *p, *q;

    p = &i;
    q = p;

    printf("i = %d\n", i);
    printf("p = %d\n", *p);
    printf("q = %d\n", *q);

    *p = 1;

    printf("i = %d\n", i);
    printf("p = %d\n", *p);
    printf("q = %d\n", *q);
    
    return(0);
}