#include <stdio.h>

int main (void) {
    
    float a, b, c, d, e, sum;

    printf("Enter 5 numbers seperated by spaces: ");
    scanf("%f%f%f%f%f",&a, &b, &c, &d, &e);
    
    sum = a+b+c+d+e;
    
    printf("Average of 5 numbers + their sum = %f\n", ((sum*2)/6));

    return 0;
}