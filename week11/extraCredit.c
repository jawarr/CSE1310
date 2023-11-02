// Write a C program that receives a 2 dimensional array of n x m dimensions.
// Your program should print the row-exchanged 2 dimensional arrays below:
//                  R1 <----> R2
//                  R2 <----> R3
//                  R3 <----> R1

#include <stdio.h>

void copy2DimensionalArray(int rows, int columns, int source[rows][columns], int target[rows][columns]);
void print2DimensionalArray(int rows, int columns, int source[rows][columns]);

int main (void) {
    
    //Initialize array
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int array[rows][columns];

    //Populate array
    for (int i = 0; i < rows; i++)
    {
        printf("Enter the values for row %d: ", i+1);
        
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n");
    
    //Print array
    printf("Initial Array:\n");
    print2DimensionalArray(rows, columns, array);
    
    //Create a copy of rows 1 thru 3
    int r1[columns], r2[columns], r3[columns];
    
    for (int i = 0; i < columns; i++)
    {
        r1[i] = array[0][i];
        r2[i] = array[1][i];
        r3[i] = array[2][i];
    }
    
    //R1 <----> R2
    int r1r2swap[rows][columns];
    copy2DimensionalArray(rows, columns, array, r1r2swap);

    for (int i = 0; i < rows; i++)
    {   
        for (int j = 0; j < columns; j++)
        {
            {
                r1r2swap[0][j] = r2[j];
                r1r2swap[1][j] = r1[j];
            }
        }
    }

    //R2 <----> R3
    int r2r3swap[rows][columns];
    copy2DimensionalArray(rows, columns, array, r2r3swap);

    for (int i = 0; i < rows; i++)
    {   
        for (int j = 0; j < columns; j++)
        {
            {
                r2r3swap[1][j] = r3[j];
                r2r3swap[2][j] = r2[j];
            }
        }
    }

    //R3 <----> R1
    int r3r1swap[rows][columns];
    copy2DimensionalArray(rows, columns, array, r3r1swap);

    for (int i = 0; i < rows; i++)
    {   
        for (int j = 0; j < columns; j++)
        {
            {
                r3r1swap[0][j] = r3[j];
                r3r1swap[2][j] = r1[j];
            }
        }
    }
    
    //Print row-exchanged arrays
    printf("Row 1 exchanged with Row 2:\n");
    print2DimensionalArray(rows, columns, r1r2swap);
    printf("Row 2 exchanged with Row 3:\n");
    print2DimensionalArray(rows, columns, r2r3swap);
    printf("Row 3 exchanged with Row 1:\n");
    print2DimensionalArray(rows, columns, r3r1swap);
    return 0;
}

void copy2DimensionalArray(int rows, int columns, int source[rows][columns], int target[rows][columns])
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            target[i][j] = source[i][j];
        }
   }
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