#include <stdio.h>

//Question 1

int main (void) {

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
    

    return 0;
}

//Question 2

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

//Question 3

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

//Question 4

int main (void) {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int initialNum = n;

    if (n >= 1) {
        for (int i = 1; i <= n; i++) {
            sum += i;
            
        }
        printf("The sum of all integers from 0 to %d is %d\n", initialNum, sum);
    }
    else printf("Error: Not a positive integer\n");

    return 0;
}

//Question 5

int main (void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= 3 ; i++) {
        for (int j = 1; j <= 3 ; j++) {
            printf ("%d\t", n);
            n++;
        }
        printf("\n");
    }
    

    
    return 0;
}

//Question 6

int main (void) {

    int phys, chem, math, i;

    printf("Enter your grade for Physics rounded to the nearest integer: ");
    scanf("%d", &phys);

    printf("Enter your grade for Chemistry rounded to the nearest integer: ");
    scanf("%d", &chem);

    printf("Enter your grade for Mathematics rounded to the nearest integer: ");
    scanf("%d", &math);

    int numArr[] = {phys, chem, math}; 
    char letterArr[3];
    
    for (i = 0; i < 3; i++) {
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

    return 0;
}

//Question 7

int main (void) {
    
    int num, i = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num >= 1) {
        while (i <= 12) {
            printf("%d * %d = %d\n", num, i, num*i);
            i++;
        }
    }
    else printf("Error: Not a positive integer\n");

    return 0;
}

// Question 8

int main (void) {
    
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num >= 1) {
        for (i = 12; i >= 0; i--) {
            printf("%d * %d = %d\n", num, i, num*i);
        }
    } 
    else printf("Error: Not a positive integer\n");

    return 0;
}

//Question 9

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
}

//Question 10

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

//Question 11

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

//Question 12

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

//Question 13

int main (void) {
    int i, sum;
    for (i = 0; i <= 50; i+=2) {
        sum+=i;
    }
    printf("The sum of all even numbers between 1 and 50 is %d\n", sum);
    return 0;
}

//Question 14

int main (void) {
    
    int num, i;
    printf("Enter a number that has more than one digit: ");
    scanf("%d", &num);

    if (num >= 10) {
        int lastDigit = num % 10;
        while (num > 9) num /= 10;	  
        printf("The sum of the first and last digits %d\n", num + lastDigit);
    } 
    else printf("Error: Number does not have multiple digits\n");

    return 0;
}

//Question 15

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