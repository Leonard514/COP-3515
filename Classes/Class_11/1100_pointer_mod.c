#include <stdio.h>

void decompose(double x, int *int_part, double *frac_part)
{
    *int_part = (int) x;
    *frac_part = x - *int_part;
}


int main(void)
{
    int i;
    double d;

    decompose(3.14159, &i, &d);

    printf("%d %f\n", i, d);
}
