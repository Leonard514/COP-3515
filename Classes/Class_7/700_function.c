#include <stdio.h>

double average (double a, double b)
{
    return (a + b) / 2;
}

int main(void)
{
    double result;
    result = average(50,100);
    printf("The average is %f\n", result);
    return(0);
}