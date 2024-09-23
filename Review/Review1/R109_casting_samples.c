#include <stdio.h>

int main()
{
    float hrar = 255.255;

    // You can type cast the various number types
    printf("%.3f = %d + %.3f\n", hrar, (int) hrar, hrar - (int) hrar);

    // If you want to prevent an overflow error you need to type cast before
    // the operation is performed ex:

    int a = 1e9;
    int b = 2e9;

    printf("%d\n", b);

    // this fails because an integer is printed (integer overflow error)

    printf("%d\n", (long) a + (long) b);



    // this should work because it is using a long format string

    printf("%ld\n", a + b);

    printf("%ld\n", (long) a + (long) b);
}