#include <stdio.h>

int main(){
    // Notice: This wouldn't work if these were int types
    float fuelAmount = 20;
    float fuelCapacity = 100;

    float fuelPercent = fuelAmount / fuelCapacity;

    printf("%f\n", fuelPercent);

    if ((fuelPercent) < 0.1)
    {
        printf("RED\n");
    }
    else
    {
        printf("GREEN\n");
    }
    return(0);
}