#include <stdio.h>

int dotProduct(int size, int vector1[size], int vector2[size]);

int main(void) 
{
    printf("\n---------------Question 1---------------\n");
    
    //Initialize and populate two vectors
    int size;
    printf("Enter the number elements for the two vectors: ");
    scanf("%d", &size);
    
    int vector1[size];
    printf("Enter the elements for vector 1: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &vector1[i]);
    }
    
    int vector2[size];
    printf("Enter the elements for vector 2: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &vector2[i]);
    }



    //Call dotProduct func and print output
    printf("The dot product of the two vectors is %d.\n", dotProduct(size, vector1, vector2));
    
    

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