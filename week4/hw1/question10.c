#include <stdio.h>

int main (void) {

    float a, b;
    
    printf("Enter two numbers (a) and (b) seperated by a space:\n");
    scanf("%f%f", &a, &b);

    printf("%f is %.2f%% of %f\n", a, (a/b*100), b);
    printf("%f is %.2f%% of %f\n", b, (b/a*100), a);
   
    return 0;
}