#include <stdio.h>


int main(void) {
    
    printf("\n---------------Question 1---------------\n");

    float a, b, c;
    printf("Enter 3 numbers seperated by spaces: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a > b && a > c)
    printf("%f\n", a);

    else if(b > a && b > c)
    printf("%f\n", b);

    else if (c > a && c > b)
    printf("%f\n", c);

    else
    printf("The 3 numbers are equivalent.\n");

    printf("\n---------------Question 2---------------\n");

    float num = 1;
    int count = 0;
    printf("Enter a number (enter 0 to terminate): ");
    
    while (num != 0) {
        scanf("%f", &num);
        count++;
        printf("Count: %d\n", count);
    }
    
    printf("\n---------------Question 3---------------\n");

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

    printf("\n---------------Question 4---------------\n");

    int num4, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num4);

    int initialNum = num4;

    if (num4 >= 1) {
        for (int i = 1; i <= num4; i++) {
            sum += i;
            
        }
        printf("The sum of all integers from 0 to %d is %d\n", initialNum, sum);
    }
    else printf("Error: Not a positive integer\n");

    printf("\n---------------Question 5---------------\n");

    int n5;
    printf("Enter an integer: ");
    scanf("%d", &n5);
    
    for (int i = 1; i <= 3 ; i++) {
        for (int j = 1; j <= 3 ; j++) {
            printf ("%d\t", n5);
            n5++;
        }
        printf("\n");
    }
    
    printf("\n---------------Question 6---------------\n");

    int phys, chem, math;

    printf("Enter your grade for Physics rounded to the nearest integer: ");
    scanf("%d", &phys);

    printf("Enter your grade for Chemistry rounded to the nearest integer: ");
    scanf("%d", &chem);

    printf("Enter your grade for Mathematics rounded to the nearest integer: ");
    scanf("%d", &math);

    int numArr[] = {phys, chem, math}; 
    char letterArr[3];
    
    for (int i = 0; i < 3; i++) {
        switch (numArr[i]) {
            case 90 ... 100:
                letterArr[i] = 'A';
                break;
            case 80 ... 89:
                letterArr[i] = 'B';
                break;
            case 70 ... 79:
                letterArr[i] = 'C';
                break;
            case 60 ... 69:
                letterArr[i] = 'D';
                break;
            case 40 ... 59:
                letterArr[i] = 'E';
                break;
            case 0 ... 39:
                letterArr[i] = 'F';
                break;
            default:
                letterArr[i] = 'X';
                break;
        }
    }
    
    printf("\nREPORT CARD \nPhysics: %c \nChemistry: %c \nMathematics: %c\n", letterArr[0], letterArr[1], letterArr[2]);

    printf("\n---------------Question 7---------------\n");

    int num7, i = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num7);

    if (num7 >= 1) {
        while (i <= 12) {
            printf("%d * %d = %d\n", num7, i, num7*i);
            i++;
        }
    }
    else printf("Error: Not a positive integer\n");

    printf("\n---------------Question 8---------------\n");

    int num8;
    printf("Enter a positive integer: ");
    scanf("%d", &num8);

    if (num8 >= 1) {
        for (int i = 12; i >= 0; i--) {
            printf("%d * %d = %d\n", num8, i, num8*i);
        }
    } 
    else printf("Error: Not a positive integer\n");

    printf("\n---------------Question 9---------------\n");

    int num9, zeroCount = 0;
    while (1) {
        printf("Enter an integer: ");
        scanf("%d", &num9);
        
        if (num9 == 0 && zeroCount == 0) {
            printf("I'm a simple computer that doesn't understand ZEROS. Please don't enter ZEROS(0)\n");
            zeroCount++;
        } 
        else if (num9 == 0 && zeroCount == 1) {
            printf("NO ZEROS. LAST WARNING.\n");
            zeroCount++;
        }
        else if (num9 == 0 && zeroCount == 2) {
            printf("That's it! I QUIT!\n");
            break;
        } 
        else printf("%d\n", num9);
    }

    printf("\n---------------Question 10---------------\n");

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

    printf("\n---------------Question 11---------------\n");

    int rows, columns;
    printf("Enter the number of rows and columns seperated by spaces: ");
    scanf("%d%d", &rows, &columns);
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("*\t");
        }
        printf("\n\n");
    }
    
    printf("\n---------------Question 12---------------\n");

    int rows12, columns12;
    printf("Enter the number of rows and columns seperated by spaces: ");
    scanf("%d%d", &rows12, &columns12);
    printf("\n");
    
    for (int i = 1; i <= rows12; i++) {
        
        if (i == 1 || i == rows12) { 
            for (int j = 1; j <= columns12; j++) {
                printf("*\t");
            }
            printf("\n\n");
        } 
        else {
            for (int k = 1; k <= columns12; k++) {
                if (k == 1 || k == columns12) {
                    printf("*\t");
                }
                else printf(" \t");
            }
            printf("\n\n");
        } 
    }

    printf("\n---------------Question 13---------------\n");

    int sum13;
    for (int i = 0; i <= 50; i+=2) {
        sum13+=i;
    }
    printf("The sum of all even numbers between 1 and 50 is %d\n", sum13);

    printf("\n---------------Question 14---------------\n");
    
    int num14;
    printf("Enter a number that has more than one digit: ");
    scanf("%d", &num14);

    if (num14 >= 10) {
        int lastDigit = num14 % 10;
        while (num14 > 9) num14 /= 10;	  
        printf("The sum of the first and last digits %d\n", num14 + lastDigit);
    } 
    else printf("Error: Number does not have multiple digits\n");


    printf("\n---------------Question 15---------------\n");

    int num15 = 4, a1 = 4, d = 5, n = 50;
    
    for (int i = 1; i <= 50; i++) {
        printf("%d\n", num15);
        num15+=5;
    }
    
    int a50 = a1+((n-1)*d);
    int sum15 = n*(a1+a50)/2; 

    printf("The partial sum of the arithmetic sequence is %d\n", sum15);
    
    return 0;
}