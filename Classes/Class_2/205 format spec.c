#include <stdio.h>


int main() 
{
    /* To make a format string, you need
    to specify a variable, then where you
    want to insert, you must insert %X based
    on the datatype
        -%d - int
        -%f - floating point
        -%c - character
        -%s - string*/
    int itemp = 5;
    printf("%d\n",itemp);
    
    float ftemp=5.3;
    printf("%f\n", ftemp);

    char ctemp = 'a';
    printf("%c\n",ctemp);

    char name[12] = "Bob";
    printf("%s\n",name);

    /*
    * Put a number before the datatype of format string
    to specify the width. Is right-aligned by default, make
    it left aligned by a negative number! With floats, you
    can also specify number of decimal digits using .#f, where
    # is the number of digits. If not specified, defaults to max
    precision. Make a percent using %%
    */

    int numApples = 20;
    printf("Number of apples: |%10d|\n",numApples);
    printf("Left aligned apples: |%-10d|\n", numApples);
    printf("Make a percent: %d%%\n", numApples);

    float applePrice = 1.7523;
    printf("Apple Price: |%5.1f|\n",applePrice);
    printf("Apple Price 3 digits: |%.3f|\n", applePrice);
    printf("Apple Price: |%f|\n", applePrice);

    // This is how you get two different variables piped into
    // a format string
    printf("%d apples costs $%.2f\n", numApples, applePrice);

    printf("Print a string: %s", "Hello World!");
    return(0);

}