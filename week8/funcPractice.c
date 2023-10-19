#include <stdio.h>

double average (double a, double b) {
    return (a+b)/2;
}

int square (int a) {
    return a*a;
}

int main(void) {

    double a, b;
    int c, i;
    printf("Enter two numbers: ");
    scanf("%lf%lf", &a, &b);
    printf("%lf\n", average(a, b));

    printf("Enter number of table entries: ");
    scanf("%d", &c);
    for (i = 1; i <= c; i++) {
        printf("%10.d %10.d\n", i, square(i));
    }
    
}

