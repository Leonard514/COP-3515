#include <stdio.h>

int main(void)
{
    int x, y;
    int *p = &x;
    int *q = &y;

    printf("p: %p\n", p);
    printf("q: %p\n", q);

    printf("&x: %x\n", &x);
    printf("&y: %x\n", &y);
    
    

    
}