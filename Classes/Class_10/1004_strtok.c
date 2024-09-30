#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[80] = "The rain in Spain falls, mainly on the plain";
    char *token;

    token = strtok(str," ");

    while (token != NULL)
    {
        printf(" %s\n", token);
        token = strtok(NULL," ");
    }
    return(0);
}