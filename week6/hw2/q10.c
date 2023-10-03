#include <stdio.h>

int main (void) {
    
    int year;
    
    printf("Enter a year (yyyy): ");
    scanf("%d", &year);
    
    if (year >= 0 && year <= 9999) {
        
        if (year % 100 == 0 && year % 400 == 0) {
            printf("%d is a leap year\n", year);
        } 
        else if (year % 100 == 0 && year % 400 != 0) {
            printf("%d is not a leap year\n", year);
        }
        else if (year % 100 != 0 && year % 4 == 0) {
            printf("%d is a leap year\n", year);
        }
        else printf("%d is not a leap year\n", year);
    } 
    else printf("Error: Year must be in a 4 digit format.\n");

    return 0;
}