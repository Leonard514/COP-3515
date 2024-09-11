#include <stdio.h>

int main()
{
    int multi_arr[2][2] = {{1, 2}, 
                           {3, 4}};

    printf("%d %d %d %d\n", multi_arr[0][0], multi_arr[0][1],
    multi_arr[1][0], multi_arr[1][1]);
}