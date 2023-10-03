#include <stdio.h>

int main (void) {
    int month;
    printf("Enter a number of a month (e.g. 1 for Jan, 2 for Feb,…): ");
    scanf("%d", &month);
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("This month has 31 days.\n");
        break;
    
    case 4: case 6: case 9: case 11:
        printf("This month has 30 days.\n");
        break;

    case 2:
        printf("This month has 28 days on non-leap years, and 29 on leap years.\n");
        break;
    
    default:
        printf("Please enter a number 1-12.\n");
        break;
    }
    return 0;
}