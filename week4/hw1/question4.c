#include <stdio.h>

int main (void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n%d\t\t%d\n\n\t%d\t\n\n%d\t\t%d\n", num, num, num, num, num);

    return 0;
}