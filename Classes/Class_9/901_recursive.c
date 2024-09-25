#include <stdio.h>

int fact(int n)
{
    if (n <= 1)
        return(1);
    else
        return(n * fact(n-1));
}

int main(void)
{
    int factNum=0;

    printf("Enter number to use to calculate a factorial: ");
    scanf("%d", &factNum);
    printf("The factorial is %d\n", fact(factNum));
    return 0;
}