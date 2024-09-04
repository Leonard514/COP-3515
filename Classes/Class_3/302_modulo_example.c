#include <stdio.h>
#include <math.h>

int main()
{
    // Problem 1
    int num_cans = 113;
    int cans_per_box = 12;
    printf("Number of cans leftover: %d\n", num_cans % cans_per_box);

    // Problem 2
    int military_time = 23;
    int ampm_hours = 12;
    printf("Time of day: %d\n", military_time % ampm_hours);

    // Problem 3
    int num_balls = 10432;
    int max_car_load = 2239;
    printf("Number of balls left over: %d\n", num_balls % max_car_load); 
}