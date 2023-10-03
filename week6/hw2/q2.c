#include <stdio.h>

// int main (void) {
//     float num = 1;
//     printf("Enter a number (enter 0 to terminate): ");
//     for (int count = 1; num == 0; count++) {
//         scanf("%f", &num);
//         printf("%d", count);
//     }
//     return 0;
// }

int main (void) {
    float num = 1;
    int count = 0;
    printf("Enter a number (enter 0 to terminate): ");
    
    while (num != 0) {
        scanf("%f", &num);
        count++;
        printf("%d\n", count);
    }
    
    return 0;
}