#include <stdio.h>

int main (void) {
    
    int i, num = 4, a1 = 4, d = 5, n = 50;
    
    for (i = 1; i <= 50; i++) {
        printf("%d\n", num);
        num+=5;
    }
    
    int a50 = a1+((n-1)*d);
    int sum = n*(a1+a50)/2; 

    printf("The partial sum of the arithmetic sequence is %d\n", sum);
    
    return 0;
}