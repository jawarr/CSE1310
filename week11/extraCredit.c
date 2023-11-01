// Write a C program that receives a 2 dimensional array of n x m dimensions.
// Your program should print the row exchanged 2 dimensional arrays below:
//                  R1 <----> R2
//                  R2 <----> R3
//                  R3 <----> R1

#include <stdio.h>

int main (void) {
    
    //Initialize Array
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int array[rows][columns];

    //Populate Array
    for (int i = 0; i < rows; i++)
    {
        printf("Enter the values for row %d: ", i+1);
        
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &array[i][j]);
        }
        
        
    }
    printf("\n\n");
    //Print Array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%10.d", array[i][j]);
        }
        printf("\n\n");
    }
    

    return 0;
}