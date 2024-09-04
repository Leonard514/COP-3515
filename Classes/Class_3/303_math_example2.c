#include <stdio.h>
#include <math.h>

int main()
{

    /* This is how to convert between integers and floats. Changing a float
    to an int always results in the decimal part being truncated off.*/
    int num1 = (int)5.3;
    float num2 = (float)5;

    // You can also round as usual, this returns a float
    int num3 = round(5.4);
    int num4 = round(5.6);
    
    // This shows mixed-mode arithmetic - floats always win!
    float num5 = (3 * 3.0);

    printf("5.3 converted to an integer is %d, while 5 converted to a float is %.1f\n", num1, num2);
    printf("Round up to get %.1f, round down to get %.1f\n", num3, num4);
    printf("Here is 3 times 3.0: %.1f\n", num5);

    return(0);
}