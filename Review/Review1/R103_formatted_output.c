#include <stdio.h>
#include <math.h>


int main()
{
    float pisquared = pow(3.14, 2);

    printf("Pi^2: %f\n", pisquared);
    printf("Pi^2 with two decimals: %.2f\n", pisquared);
    printf("Pi^2, two decimals, width 10: |%10.2f|\n", pisquared);
    printf("Pi^2, 2 decimals, width 10, left: |%-10.2f|\n", pisquared);

    return(0);
}
