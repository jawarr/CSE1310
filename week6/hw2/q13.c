#include <stdio.h>

int main (void) {
    int i, sum;
    for (i = 0; i <= 50; i+=2) {
        sum+=i;
    }
    printf("The sum of all even numbers between 1 and 50 is %d\n", sum);
    return 0;
}