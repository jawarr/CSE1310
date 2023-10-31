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

int main (void) {
    //Question 1
    char letterGrade;
    float phys, chem, engl, math;
    printf("Enter grades for Physics, Chemistry, English, and Mathematics (seperated by spaces): ");
    scanf("%f%f%f%f", &phys, &chem, &engl, &math);
    printf("REPORT CARD \nPhysics:%c \nChemistry:%c \nEnglish:%c \nMathematics:%c \n", gradeEval(phys), gradeEval(chem), gradeEval(engl), gradeEval(math));
    
    
    return 0;
}