#include <stdio.h>

int main()
{
    char array1[3] = {'a', 'b', 'c'};

    printf("%a\n", array1);
    printf("%c\n", array1[0]);
    printf("%d\n", array1[0]);

    switch (array1[1])
    {
        case 'a': printf("I found A!!!\n"); break;
        case 'b': printf("I found B!!!\n");// break;
        case 'c': printf("I found C!!!\n"); break;
    }
}