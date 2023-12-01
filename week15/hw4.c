#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dotProduct(int size, int vector1[size], int vector2[size]);
void print4x4Array(int source[4][4]);
void print2DimensionalArray(int rows, int columns, int source[rows][columns]);

int main(void) 
{
    // printf("\n---------------Question 1---------------\n");
    
    // //Initialize and populate two vectors
    // int size;
    // printf("Enter the number elements for the two vectors: ");
    // scanf("%d", &size);
    
    // int vector1[size];
    // printf("Enter the elements for vector 1: ");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &vector1[i]);
    // }
    
    // int vector2[size];
    // printf("Enter the elements for vector 2: ");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &vector2[i]);
    // }

    // //Call dotProduct func and print output
    // printf("The dot product of the two vectors is %d.\n", dotProduct(size, vector1, vector2));
    
    // printf("\n---------------Question 2---------------\n");
    
    // //Array 1
    // int array1[4][4];
    // srand(time(NULL));
    // printf("i)\n");
    
    // for (int i = 0; i < 4; i++)
    // {
    //     switch (i)
    //     {
    //     case 0:
    //         for (int j = 0; j < 4; j++)
    //         {
    //             if (j == 0) array1[i][j] = rand() % 9 + 1;
    //             else array1[i][j] = 0;
    //         }
    //         break;

    //     case 1:
    //         for (int j = 0; j < 4; j++)
    //         {
    //             if (j <= 1) array1[i][j] = rand() % 9 + 1;
    //             else array1[i][j] = 0;
    //         }
    //         break;
        
    //     case 2:
    //         for (int j = 0; j < 4; j++)
    //         {
    //             if (j <= 2) array1[i][j] = rand() % 9 + 1;
    //             else array1[i][j] = 0;
    //         }
    //         break;

    //     case 3:
    //         for (int j = 0; j < 4; j++)
    //         {
    //             array1[i][j] = rand() % 9 + 1;
    //         }
    //         break;
    //     default:
    //         break;
    //     }
        
    // }
    // print4x4Array(array1);
    
    // //Array 2
    // int array2[4][4];
    // printf("ii)\n");
    
    // for (int i = 0; i < 4; i++)
    // {
    //     switch (i)
    //     {
    //     case 0:
    //         for (int j = 0; j < 4; j++)
    //         {
    //             array2[i][j] = rand() % 9 + 1;
    //         }
    //         break;

    //     case 1:
    //         for (int j = 0; j < 4; j++)
    //         {
    //             if (j >= 1) array2[i][j] = rand() % 9 + 1;
    //             else array2[i][j] = 0;
    //         }
    //         break;
        
    //     case 2:
    //         for (int j = 0; j < 4; j++)
    //         {
    //             if (j >= 2) array2[i][j] = rand() % 9 + 1;
    //             else array2[i][j] = 0;
    //         }
    //         break;

    //     case 3:
    //         for (int j = 0; j < 4; j++)
    //         {
    //             if (j >= 3) array2[i][j] = rand() % 9 + 1;
    //             else array2[i][j] = 0;
    //         }
    //         break;
    //     default:
    //         break;
    //     }
        
    // }
    // print4x4Array(array2);

    // //Array 3
    // int array3[4][4];
    // printf("iii)\n");
    
    // for (int i = 0; i < 4; i++)
    // {
    //     switch (i)
    //     {
    //     case 0:
    //         for (int j = 0; j < 4; j++)
    //         {
    //             if (j == 0) array3[i][j] = rand() % 9 + 1;
    //             else array3[i][j] = 0;
    //         }
    //         break;

    //     case 1:
    //         for (int j = 0; j < 4; j++)
    //         {
    //             if (j == 1) array3[i][j] = rand() % 9 + 1;
    //             else array3[i][j] = 0;
    //         }
    //         break;
        
    //     case 2:
    //         for (int j = 0; j < 4; j++)
    //         {
    //             if (j == 2) array3[i][j] = rand() % 9 + 1;
    //             else array3[i][j] = 0;
    //         }
    //         break;

    //     case 3:
    //         for (int j = 0; j < 4; j++)
    //         {
    //             if (j == 3) array3[i][j] = rand() % 9 + 1;
    //             else array3[i][j] = 0;
    //         }
    //         break;
    //     default:
    //         break;
    //     }
        
    // }
    // print4x4Array(array3);
    
    printf("\n---------------Question 3---------------\n");

    //Initialize arrays
    int rows, columns;

    printf("Enter the number of rows and columns for both arrays: ");
    scanf("%d%d", &rows, &columns);
    int array1[rows][columns];
    int array2[rows][columns];
    int sumArray[rows][columns];

    //Populate 2 arrays
    for (int i = 0; i < rows; i++)
    {
        printf("Enter the values for array 1 row %d: ", i+1);
        
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }
    
    for (int i = 0; i < rows; i++)
    {
        printf("Enter the values for array 2 row %d: ", i+1);
        
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }

    //Add 2 arrays
    for (int i = 0; i < rows; i++)
    {   
        for (int j = 0; j < columns; j++)
        {
            sumArray[i][j] = array1[i][j] + array2[i][j];
        }
    }
    printf("\n");

    //Print sum array
    printf("Sum of both arrays:\n");
    print2DimensionalArray(rows, columns, sumArray);
    
    return 0;
}

int dotProduct(int size, int vector1[size], int vector2[size]) 
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        int product = (vector1[i] * vector2[i]);
        sum += product;
    }
    return sum;
}

void print4x4Array(int source[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (source[i][j] == 0) printf("  %d", 0);
            else printf("%3.d", source[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void print2DimensionalArray(int rows, int columns, int source[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%10.d", source[i][j]);
        }
        printf("\n\n");
    }
}