#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    int pipefds[2];

    if (pipe(pipefds) == -1)
    {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    printf("Read File Descriptor Value: %d\n", pipefds[0]);
    printf("Write File Descriptor Value: %d\n", pipefds[1]);


    int pid = fork();

    if (pid == 0)
    {
        printf("I am the child process, my parent's PID is %d - I will read from the parent and print\n", getppid());
        close(pipefds[1]);
        char string[100];
        if(read(pipefds[0], &string, sizeof(char) * 100) == -1)
        {
            printf("Read error");
        }
        printf("Child: String is %s", string);
    }
    else
    {
        printf("I am the parent process, my child's PID is %d - I will write to the child\n", pid);
        close(pipefds[0]);
        char string[100];
        fgets(string, 99, stdin);
        if(write(pipefds[1], &string, strnlen(string, 100) * sizeof(char)) == -1)
        {
            printf("Write error");
        }
        close(pipefds[1]);
    }
    
    
    return(EXIT_SUCCESS);
}