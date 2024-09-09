#include <stdio.h>

int main()
{
    // Make a matrix (multidimensional array) with 
    // 5 rows and 9 columns, they are 0-indexed
    int matrix[5][9];


    // Inserts 1 in row 1, column 1. Though it seems
    // like a table, C actually stores them in row order
    // (i.e., everything in row 0, then everything in row 1...)
    matrix[1][1] = 1;

    printf("matrix[1][1] is %d\n", matrix[1][1]);

    // Initialize the full array. Just like single-dimensional
    // arrays, it fills in missing values with 0

    int matrix1[5][9] = {{1,1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,0,1,1,1},
                        {1,1,1,0,1,1,1,1,1},
                        {1,1,1,1,0,1,1,1,1}};

    printf("matrix1[3][2] is %d", matrix1[3][2]);

    // A constant array: each of the elements are constants, meaning
    // you can't change them! Helps catch errors for things that aren't
    // supposed to change (ex: day of the week)

    const char chars[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    // expression must be a modifiable lvalue
    // chars[0] = '9';


    // YAY WE CAN CHAIN OPERATORS!

    int i, j, k;

    i = j = k = 0;


    // lvalues: assignment operator must have left value at the left,
    // no doing 12 = i or i + j = 0
    
    return(0);
}