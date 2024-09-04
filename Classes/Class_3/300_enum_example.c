#include <stdio.h>

int main() {
    /* Enums: Compiler by default 0-indexes each constant
    Values must have unique values and be integral constants*/

    enum week {Mon, Tue, Wed};
    enum week day;

    day = Mon;

    printf("It is day %d of 7", day);

    // OR

    /* You can't redeclare these constants and enums*/
    // enum week {Mon, Tue, Wed} day;

    // We can also use the #define, but enums
    // use scope rules and the variables are assigned
    // the values - enum is usually better
    #define Working 0
    #define Failed 1
    #define Frozen 2

    return(0);
}