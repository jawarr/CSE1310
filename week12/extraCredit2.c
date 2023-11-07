#include <stdio.h>

void populateAccendingArray(int size, int source[size]); 
void printArray(int size, int source[size]);

int main(void) 
{
    int num;
    printf("Enter the number of arrays to print (max of 10): ");
    scanf("%d", &num);
    if (num > 0 && num <= 10)
    {
        int array[num];
        populateAccendingArray(num, array);

        int size = num;
        for (int i = 0; i < num; i++)
        {
            printArray(size, array);
            size--;
        }
    } else printf("Please enter a valid number (1-10)\n");
    
    return 0;
}

void populateAccendingArray(int size, int source[size]) 
{
    for (int i = 0; i < size; i++)
    {
        source[i] = i + 1;
    }
}

void printArray(int size, int source[size])
{
    printf("[");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d, ", source[i]);
    }
    printf("%d", source[size - 1]);
    printf("]\n");
}