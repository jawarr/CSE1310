#include <stdio.h>

int main (void) {
    
    int num, i;
    printf("Enter a number that has more than one digit: ");
    scanf("%d", &num);

    if (num >= 10) {
        int lastDigit = num % 10;
        while (num > 9) num /= 10;	  
        printf("The sum of the first and last digits %d\n", num + lastDigit);
    } 
    else printf("Error: Number does not have multiple digits\n");

    return 0;
}