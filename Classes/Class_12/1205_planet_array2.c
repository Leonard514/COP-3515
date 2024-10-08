#include <stdio.h>

int main(void)
{
    char *planets[] = 
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

    for (int i = 0; i < 9; i++)
    {
        printf("%s\n", planets[i]);
    }
    
    return(0);
}