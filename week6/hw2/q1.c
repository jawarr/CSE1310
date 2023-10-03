#include <stdio.h>

int main (void) {

    float a, b, c;
    printf("Enter 3 numbers seperated by spaces: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a > b && a > c)
    printf("%f\n", a);

    else if(b > a && b > c)
    printf("%f\n", b);

    else if (c > a && c > b)
    printf("%f\n", c);

    else
    printf("The 3 numbers are equivalent.\n");
    

    return 0;
}