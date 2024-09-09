#include <stdio.h>

int main() {
    char grade = 'A';

    /* Switch used for decisions about many things, no need for 
    long elif statements :) (though switches are slightly different)
    switch must be followed by *integer* expression,
    known as controlling expression, in parenthesis
    
    C thinks characters are ASCII numbers lol, we could also
    use enumeration constants :)
    
    The case must have constant expressions (no variables!)
    
    Order of cases don't matter... how??? The default case doesn't need
    to be last. If there's no default and there's no match case, it just moves on

    Break makes program break out of switch, move on to the next statement. Without
    a break, control flows to the next case!
    */

    switch (grade) {
        case 'A': printf("Excellent\n");
                break;
        case 'B': printf("Good\n");
                break;
        case 'C': printf("Average\n");
                break;
        case 'D': printf("Bad\n");
                break;
        case 'F': printf("Failing\n");
                break;
        default: printf("Illegal grade\n");
                break;
    }
}