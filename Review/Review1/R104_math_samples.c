#include <stdio.h>

int main()
{
    printf("5.3 as an int: %d\n", (int) 5.3);
    printf("5 as a float: %f\n", (float) 5);
    printf("5.6 rounded: %f\n", round(5.6));
    printf("5.4 rounded: %f\n", round(5.4));


    // increment value before use!
    int a = 10;
    int b = ++a - 2;
    printf("a: %d, b: %d\n", a, b);

    // increment value after use
    int c = 10;
    int d = c++ - 2;
    printf("c: %d, d: %d\n", c, d);

    int large_num = 3e7;
    printf("large_num: %d\n", large_num);

    return(0);
}