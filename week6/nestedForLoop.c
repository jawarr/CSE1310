#include <stdio.h>

int main (void) {
    for (int i = 1; i <= 5; i+=1) {
        for(int j = 2; j>=1; j--) {
            printf("%d", i*j);
        }
        printf("\n");
    }
    
}