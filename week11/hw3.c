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

    // printf("\n---------------Question 3---------------\n");
    // int a, b, c;
    // printf("Enter 3 numbers: ");
    // scanf("%d%d%d", &a, &b, &c);
    // print_average(a, b, c);

    printf("\n---------------Question 4---------------\n");
    int intArray[4], index1, index2;
    printf("Enter four numbers for the array: ");
    scanf("%d%d%d%d", &intArray[0], &intArray[1], &intArray[2], &intArray[3]);
    printf("\nInital array: %10.d%10.d%10.d%10.d\n", intArray[0], intArray[1], intArray[2], intArray[3]);
    
    printf("\nEnter a index (0-3) to print: ");
    scanf("%d", &index1);
    printf("\nValue currently at index %d: %d\n", index1, intArray[index1]);
    
    printf("\nEnter two indices to swap: ");
    scanf("%d%d", &index1, &index2);
    
    int a, b;
    a = intArray[index1];
    b = intArray[index2];
    intArray[index1] = b;
    intArray[index2] = a;
    printf("\nUpdated array: %10.d%10.d%10.d%10.d\n", intArray[0], intArray[1], intArray[2], intArray[3]);


    return 0;
}