
#include <stdio.h>

int main (void) {
    int num, zeroCount = 0;
    while (1) {
        printf("Enter an integer: ");
        scanf("%d", &num);
        
        if (num == 0 && zeroCount == 0) {
            printf("I'm a simple computer that doesn't understand ZEROS. Please don't enter ZEROS(0)\n");
            zeroCount++;
        } 
        else if (num == 0 && zeroCount == 1) {
            printf("NO ZEROS. LAST WARNING.\n");
            zeroCount++;
        }
        else if (num == 0 && zeroCount == 2) {
            printf("That's it! I QUIT!\n");
            return 0;
        } 
        else printf("%d\n", num);
    }

    return 0;
}