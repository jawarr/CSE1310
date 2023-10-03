#include <stdio.h>

int main (void) {
    
    int num, i = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num >= 1) {
        while (i <= 12) {
            printf("%d * %d = %d\n", num, i, num*i);
            i++;
        }
    }
    else printf("Error: Not a positive integer\n");

    return 0;
}