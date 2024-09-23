#include <stdio.h>

int main()
{
    float input1;
    char input2[15];

    printf("Enter a float:\n");
    scanf("%f", &input1);

    // scanf leaves a leftover newline,
    // let's consume it using getchar()

    getchar();

    printf("Enter a string:\n");
    fgets(input2, 14, stdin);

    printf("Number: %f, String: %s\n", input1, input2);
}