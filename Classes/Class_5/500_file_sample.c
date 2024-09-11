#include <stdio.h>

int main()
{
    FILE *pFile;


    /* FILE* fopen (char* filename, char* mode)
    You can include the file path, but remember to 
    include double backslashes in your paths
    
    Modes: r (read), w (write, file doesn't have to exist,
    overwrites contents), a (append, file doesn't have to exist)
    */


    pFile = fopen("test.txt", "r");

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return(1);
    }
    else
    {
        printf("File opened successfuly\n");
        return(0);
    }
}