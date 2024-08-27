/*
ENUM Example Program
*/

#include<stdio.h>
enum year {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

int main()
{
    printf("Hello World!\n");
    enum year i;
    i = Jan;
    printf("%d\n",i);
    i = Feb;
    printf("%d\n",i);
    i = Mar;
    printf("%d\n",i);
    i = Apr;
    printf("%d\n",i);
    i = May;
    printf("%d\n",i);
    i = Jun;
    printf("%d\n",i);
}