#include <stdio.h>
#include <string.h>

int main()
{
    struct part
    {
        int number;
        char name[51];
        int on_hand;
    };

    // Make a struct variables of part type then load values

    struct part part1;

    part1.number = 107;
    strcpy(part1.name,"Power Tools");
    part1.on_hand = 13;

    printf("%d %s %d\n", part1.number, part1.name, part1.on_hand);

    struct part part2 = {528, "Disk Drive", 10};
    struct part part3 = {914, "Printer cable", 5};

    printf("%d %s %d\n", part2.number, part2.name, part2.on_hand);
    printf("%d %s %d\n", part3.number, part3.name, part3.on_hand);

}