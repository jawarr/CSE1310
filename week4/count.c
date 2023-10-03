#include <stdio.h>

int main (void) 
{
    int num, i;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entires: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {
        printf("%10d%10d\n", i, i*i);
    };
    
    return 0;
}
