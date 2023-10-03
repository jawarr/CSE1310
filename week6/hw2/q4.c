#include <stdio.h>

// Write a C program to take a positive integer as user input and print the sum of all
// positive integers till that number.

int main (void) {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int initialNum = n;

    if (n >= 1) {
        for (int i = 1; i <= n; i++) {
            sum += i;
            
        }
        printf("The sum of all integers from 0 to %d is %d\n", initialNum, sum);
    }
    else printf("Error: Not a positive integer\n");

    return 0;
}