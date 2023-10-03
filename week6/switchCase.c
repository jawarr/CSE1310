#include <stdio.h>

int main (void) {
    int rating;
    printf("Enter a rating for our service: ");
    scanf("%d", &rating);
    switch (rating) {
    case 5:
        printf("\nYou gave a 5\n");
        break;
    case 4:
        printf("\nYou gave a 4\n");
        break;
    case 3:
        printf("\nYou gave a 3\n");
        break;
    case 2:
        printf("\nYou gave a 2\n");
        break;
    case 1:
        printf("\nYou gave a 1\n");
        break;    
    case 0:
        printf("\nYou gave a 0\n");
        break;      
    default:
        printf("\nPlease enter a rating from 1-5\n");
        break;
    }
    return 0;
}