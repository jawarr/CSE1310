#include <stdio.h>

int main (void) {
    
    int rows, columns, i, j, k;
    printf("Enter the number of rows and columns seperated by spaces: ");
    scanf("%d%d", &rows, &columns);
    printf("\n");
    
    for (i = 1; i <= rows; i++) {
        
        if (i == 1 || i == rows) { 
            for (j = 1; j <= columns; j++) {
                printf("*\t");
            }
            printf("\n\n");
        } 
        else {
            for (k = 1; k <= columns; k++) {
                if (k == 1 || k == columns) {
                    printf("*\t");
                }
                else printf(" \t");
            }
            printf("\n\n");
        } 
    }

    return 0;
}