#include <stdio.h>

int main (void) {

    //Question 1

    int p, q;
    
    printf("Enter two integers (x) and (y) seperated by a space: ");
    scanf("%d%d", &p, &q);

    printf("x^2 + xy + y^2 = %d\n\n", ((p*p)+(p*q)+(q*q)));

    //Question 2

    float a, b, c, d, e, sum1;

    printf("Enter 5 numbers seperated by spaces: ");
    scanf("%f%f%f%f%f",&a, &b, &c, &d, &e);
    
    sum1 = a+b+c+d+e;
    
    printf("Average of 5 numbers + their sum = %f\n\n", ((sum1*2)/6));

    //Question 3

    float f, g, h, j, k, sum2;

    printf("Enter 5 numbers seperated by spaces: ");
    scanf("%f%f%f%f%f",&f, &g, &h, &j, &k);
    
    sum2 = f+g+h+j+k;
    
    printf("Average of 5 numbers + their sum = %.2f\n\n", ((sum2*2)/6));

    //Question 4

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n%d\t\t%d\n\n\t%d\t\n\n%d\t\t%d\n\n", num, num, num, num, num);

    //Question 5

    printf("\n*\t*\t*\n\n*\t*\t*\n\n*\t*\t*\n\n*\t*\t*\n\n");

    //Question 6

    printf("\"The printf command prints whatever is within the double quotation marks. The \\n escape sequence adds a new line.\"\n\n");

    //Question 7
    
    int w, z;

    printf("Enter two numbers (x) and (y) seperated by a space: ");
    scanf("%d%d", &w, &z);

    printf("The value of x is %d, the value of y is %d. The result of x && y is %d\n", w, z, w&&z);
    printf("The value of x is %d, the value of y is %d. The result of x || y is %d\n", w, z, w||z);
    printf("The value of x is %d, the value of y is %d. The result of x == y is %d\n", w, z, w==z);
    printf("The value of x is %d, the value of y is %d. The result of x < y is %d\n\n", w, z, w<z);
    
    //Question 8

    float inches;
    printf("Enter a height in inches: ");
    scanf("%f", &inches);

    printf("The value of %.0f inches in feet is %8.2f\n", inches, (inches/12));
    printf("The value of %.0f inches in feet is %09.2f\n", inches, (inches/12));
    printf("The value of %.0f inches in cm is %.5f\n", inches, (inches*2.54));
    printf("The value of %.0f inches in mm is %.0f\n\n", inches, (inches*25.4));
    
    //Question 9
    //The blank line needs to be replaced with the following:
    //rem = x%y;

    int x=67, y=12, rem;

    rem = x%y;

    printf("Remainder of %d / %d is %d\n\n", x, y, rem);
    
    //Question 10

    float u, v;
    
    printf("Enter two numbers (a) and (b) seperated by a space: ");
    scanf("%f%f", &u, &v);

    printf("%f is %.2f%% of %f\n", u, (u/v*100), v);
    printf("%f is %.2f%% of %f\n\n", v, (v/u*100), u); 
    
    return 0;

}
