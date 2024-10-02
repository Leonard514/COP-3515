#include <stdio.h>

int main(void)
{
    // Hackers messed with our names!!!
    char name[50] = "4N7H0NY W3R7HM1113R";

    char *fixer;

    fixer = &name;

    *fixer = 'A';

    fixer += 2;

    *fixer = 'T';

    fixer += 2;

    *fixer = 'O';

    fixer += 5;

    *fixer = 'E';

    fixer += 2;

    *fixer = 'T';

    fixer += 3;

    *fixer = 'I';


    for (int i = 0; i <= 1; i++)
    {
    fixer++;

    *fixer = 'L';
    }

    fixer++;

    *fixer = 'E';

    fixer = &name;

    while (1)
    {
        printf("%c", *fixer);
        fixer++;
        if (*fixer == 0)
        {
            printf("\n");
            break;
        }
    }

}