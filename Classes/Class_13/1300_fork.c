#include <stdio.h>
#include <unistd.h>

void forkexample(void)
{
    int PID;
    PID = fork();

    if (PID == 0)
    {
        printf("Hello from child!\n");
        printf("Child PID: %d\n", PID);
    }
    else
    {
        printf("Hello from parent!\n");
        printf("Parent PID: %d\n", PID);
    }
}

int main()
{
    forkexample();
    return(0);
}