#include <stdio.h>

int main (void) {

    int x, y;
    
    printf("Enter two integers (x) and (y) seperated by a space:\n");
    scanf("%d%d", &x, &y);

    printf("x^2 + xy + y^2 = %d\n", ((x*x)+(x*y)+(y*y)));
    return 0;
}