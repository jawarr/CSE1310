#include <stdio.h>

int main (void) {
    
    int rows, columns, i, j;
    printf("Enter the number of rows and columns seperated by spaces: ");
    scanf("%d%d", &rows, &columns);
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("*\t");
        }
        printf("\n\n");
    }
    

    return 0;
}