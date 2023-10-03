#include <stdio.h>

// Write a C program to take an integer as input and store it in the variable x. Print the
// following 3x3 pattern using nested for loops:
// X    X+1    X+2
// X+3  X+4    X+5
// X+6  X+7    X+8
// So, for example, if the input is 7, the pattern should be as follows:
// 7    8   9
// 10   11  12
// 13   14  15

int main (void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= 3 ; i++) {
        for (int j = 1; j <= 3 ; j++) {
            printf ("%d\t", n);
            n++;
        }
        printf("\n");
    }
    

    
    return 0;
}