#include <string.h>
#include <stdio.h>

int main(void)
{
    char planets[][3][15] = 
    {
        "Mercury",
        "Venus",
        "Earth",
        "Mars",
        "Jupiter",
        "Saturn",
        "Uranus",
        "Neptune",
        "Pluto"
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %7s : %d\n", planets[i][j], strlen(planets[i][j]));
        }
        printf("\n");
    }
    
    return(0);
}