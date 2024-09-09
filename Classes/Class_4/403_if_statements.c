#include <stdio.h>
#include <stdbool.h>

int main()
{

    // else is optional lol. You can also put numbers
    // in the if conditionals, and nonzero values are truthy
    // Comparison operators (==) are the same as python

    int var = 999;

    if(var) {
        printf("True!\n");
    } else {
        printf("False!\n");
    }

    // Of course you can execute multiple statements in an if statement block

    // else belongs to the nearest unpaired if statement. We can change that
    // using the curly braces. Of course we can also nest the if statements,
    // at this point this is python review lol. You chain them with else if, not
    // elif.
    return(0);
}