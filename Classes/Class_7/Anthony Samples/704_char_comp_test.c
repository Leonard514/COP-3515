#include <stdio.h>

int main()

{
    char char1 = 'd';
    char charArr1[4];
    char charArr2[4] = "cat";

    if (char1 == 'd')
    {
        printf("char1 == c\n");
    }
    else
    {
        printf("char1 != c\n");
    }


    if (charArr1 == "dog")
    {
        printf("charArr1 == dog\n");
    }
    else
    {
        printf("charArr1 != dog\n");
    }

    if ((charArr1 == "dog") || 'f')
    {
        printf("charArr1 == dog || f\n");
    }
    else
    {
        printf("charArr1 != dog || f\n");
    }

    if ((charArr1 == "dog") || '\0')
    {
        printf("charArr1 == dog || NULL \n");
    }
    else
    {
        printf("charArr1 != dog || NULL \n");
    }

    if (char1 == 'c' || char1 == 'C')
    {
        printf("user inputted a C\n");
    }

    if (charArr2 == "cat")
    {
        printf("charArr2 == cat\n");
    }
    else
    {
        printf("charArr2 != cat\n");
    }




}