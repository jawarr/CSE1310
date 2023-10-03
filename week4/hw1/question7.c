#include <stdio.h>

int main (void) {

    int x, y;

    printf("Enter two numbers (x) and (y) seperated by a space:\n");
    scanf("%d%d", &x, &y);

    printf("The value of x is %d, the value of y is %d. The result of x && y is %d\n", x, y, x&&y);
    printf("The value of x is %d, the value of y is %d. The result of x || y is %d\n", x, y, x||y);
    printf("The value of x is %d, the value of y is %d. The result of x == y is %d\n", x, y, x==y);
    printf("The value of x is %d, the value of y is %d. The result of x < y is %d\n", x, y, x<y);

    return 0;
}