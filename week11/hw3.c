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

void print_average (int a, int b, int c)
{
    float average = (a + b + c) / 3.0;
    printf("The average of %d, %d, and %d is %.3f\n", a, b, c, average);
}

int main (void) 
{ 
    srand(time(NULL));

    // printf("\n---------------Question 1---------------\n");
    // char letterGrade;
    // float phys, chem, engl, math;
    // printf("Enter grades for Physics, Chemistry, English, and Mathematics (seperated by spaces): ");
    // scanf("%f%f%f%f", &phys, &chem, &engl, &math);
    // printf("\nREPORT CARD \nPhysics:%c \nChemistry:%c \nEnglish:%c \nMathematics:%c \n", gradeEval(phys), gradeEval(chem), gradeEval(engl), gradeEval(math));
    
    // printf("\n---------------Question 2---------------\n");
    // float x, y;

    // printf("Enter the value of x: ");
    // scanf("%f", &x);
    // printf("Enter the value of y: ");
    // scanf("%f", &y);

    // int calc = rand() % 4 + 1;
    // printf("Randomized value of calc: %d\n", calc);

    // switch (calc)
    // {
    // case 1:
    //     printf("Your output is x + y = %0.f\n", x+y);
    //     break;
    // case 2:
    //     printf("Your output is x - y = %0.f\n", x-y);
    //     break;
    // case 3:
    //     printf("Your output is x * y = %0.f\n", x*y);
    //     break;
    // case 4:
    //     printf("Your output is x / y = %f\n", x/y);
    //     break;
    // default:
    //     break;
    // }

    printf("\n---------------Question 3---------------\n");
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    print_average(a, b, c);
    return 0;
}