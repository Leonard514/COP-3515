#include <stdio.h>

int main()
{
    // Know that getchar() saves an integer
    printf("%c %c\n", getchar(), getchar());

    int hrar = getchar();

    putchar('c');

    // Make scanf skip whitespace before reading character

    char sample;
    scanf(" %c", &sample);

    printf("%c", sample);
}