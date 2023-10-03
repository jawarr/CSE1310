#include <stdio.h>

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