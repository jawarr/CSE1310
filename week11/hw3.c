#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char gradeEval (float numGrade) 
{
    if (numGrade >= 90.0) return 'A';
    else if (numGrade >= 80.0) return 'B';
    else if (numGrade >= 70.0) return 'C';
    else if (numGrade >= 60.0) return 'D';
    else if (numGrade >= 40.0) return 'E';
    else if (numGrade >= 0.0) return 'F';
    else return 'X';
}

int main (void) 
{ 
    srand(time(NULL));

    //Question 1
    // char letterGrade;
    // float phys, chem, engl, math;
    // printf("Enter grades for Physics, Chemistry, English, and Mathematics (seperated by spaces): ");
    // scanf("%f%f%f%f", &phys, &chem, &engl, &math);
    // printf("\nREPORT CARD \nPhysics:%c \nChemistry:%c \nEnglish:%c \nMathematics:%c \n\n\n", gradeEval(phys), gradeEval(chem), gradeEval(engl), gradeEval(math));
    
    //Question 2
    float x, y;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);

    int calc = rand() % 4 + 1;
    printf("Randomized value of calc: %d\n", calc);

    switch (calc)
    {
    case 1:
        printf("Your output is x + y = %0.f\n", x+y);
        break;
    case 2:
        printf("Your output is x - y = %0.f\n", x-y);
        break;
    case 3:
        printf("Your output is x * y = %0.f\n", x*y);
        break;
    case 4:
        printf("Your output is x / y = %f\n", x/y);
        break;
    default:
        break;
    }


    return 0;
}