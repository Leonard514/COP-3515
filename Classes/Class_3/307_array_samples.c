#include <stdio.h>

int main()
{
    /*
    char char_arr1[7] = {'H', 'e', 'l', 'l', 'o'};
    char char_arr2[7];

    printf("Please say world: ");
    fgets(char_arr2, 7, stdin);

    printf("Contents of char_arr2: %s ", char_arr1);
    printf("%s", char_arr2);

    */
    int int_arr1[8] = {1, 2, 3, 4};
    int int_arr2[8];

    printf("%a\n", int_arr1);
    printf("%d, %d\n", int_arr1[0], int_arr1[1]);

    printf("Enter an integer please");
    scanf("%d", &int_arr2[0]);
    printf("Here is your value: %d", int_arr2[0]);

    return(0);

}