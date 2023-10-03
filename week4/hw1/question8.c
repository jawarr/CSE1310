#include <stdio.h>

int main (void) {
    
    float inches;
    printf("Enter a height in inches: ");
    scanf("%f", &inches);

    printf("The value of %.0f inches in feet is %8.2f\n", inches, (inches/12));
    printf("The value of %.0f inches in feet is %09.2f\n", inches, (inches/12));
    printf("The value of %.0f inches in cm is %.5f\n", inches, (inches*2.54));
    printf("The value of %.0f inches in mm is %.0f\n", inches, (inches*25.4));

    return 0;
}
