#include <stdio.h>

// Void is just telling C that we won't be putting any arguments here
int main(void){

    enum scores {A,B,C,D,F};
    enum scores grade = F;

    // Notice without the break statement we print *everything* after
    // the matching case 4. This is because the case is not an elif
    // statement, but it tells the program where to start and the break
    // where to end. If there are many conditions (ex: 31 conditions),
    // you can put the cases together if they have the same output, don't
    // forget to use default for the most common output

    switch (grade) {
        case 4: printf("Failing\n");
        case 0: printf("Excellent\n");
        case 1: printf("Good\n");
        case 2: printf("Average\n");
        case 3: printf("Bad\n");
        default: printf("Illegal grade\n");
    }
}