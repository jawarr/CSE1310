#include <stdio.h>

int main (void) {
    
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num >= 1) {
        for (i = 12; i >= 0; i--) {
            printf("%d * %d = %d\n", num, i, num*i);
        }
    } 
    else printf("Error: Not a positive integer\n");

    return 0;
}