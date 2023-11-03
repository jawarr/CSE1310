#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char gradeEval (float numGrade);
void print_average (int a, int b, int c);
int makeSquare (int num);
void makeSquareDirectly (int array[],int i, int size);
int arraySum (int array[], int size);
void isOdd (int num);

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

    // printf("\n---------------Question 4---------------\n");
    // int intArray[4], index1, index2;
    // printf("Enter four numbers for the array: ");
    // scanf("%d%d%d%d", &intArray[0], &intArray[1], &intArray[2], &intArray[3]);
    // printf("\nInital array:\n%10.d%10.d%10.d%10.d\n", intArray[0], intArray[1], intArray[2], intArray[3]);
    
    // printf("\nEnter a index (0-3) to print: ");
    // scanf("%d", &index1);
    // printf("\nValue currently at index %d: %d\n", index1, intArray[index1]);
    
    // printf("\nEnter two indices to swap: ");
    // scanf("%d%d", &index1, &index2);
    
    // int a, b;
    // a = intArray[index1];
    // b = intArray[index2];
    // intArray[index1] = b;
    // intArray[index2] = a;
    // printf("\nUpdated array:\n%10.d%10.d%10.d%10.d\n", intArray[0], intArray[1], intArray[2], intArray[3]);

    // printf("\n---------------Question 5---------------\n");
    // int squareArray[4], squareIndex;
    
    // printf("Enter four numbers for the array: ");
    // scanf("%d%d%d%d", &squareArray[0], &squareArray[1], &squareArray[2], &squareArray[3]);
    // printf("\nInital array:\n%10.d%10.d%10.d%10.d\n", squareArray[0], squareArray[1], squareArray[2], squareArray[3]);

    // printf("\nEnter a index (0-3) to square: ");
    // scanf("%d", &squareIndex);
    // printf("\nValue currently at index %d: %d\n", squareIndex, squareArray[squareIndex]);
    
    // squareArray[squareIndex] = makeSquare(squareArray[squareIndex]);
    // printf("\nUpdated array:\n%10.d%10.d%10.d%10.d\n", squareArray[0], squareArray[1], squareArray[2], squareArray[3]);

    // printf("\n---------------Question 6---------------\n");
    // int integerArray[4], squareIndexQ6;
    // printf("Enter four numbers for the array: ");
    // scanf("%d%d%d%d", &integerArray[0], &integerArray[1], &integerArray[2], &integerArray[3]);
    // printf("\nInital array:\n%10.d%10.d%10.d%10.d\n", integerArray[0], integerArray[1], integerArray[2], integerArray[3]);
    // printf("\nEnter a index (0-3) to square: ");
    // scanf("%d", &squareIndexQ6);
    // makeSquareDirectly(integerArray, squareIndexQ6, 4);
    
    // printf("\n---------------Question 7---------------\n");
    // int sumArray[5];
    // printf("Enter five numbers for the array: ");
    // scanf("%d%d%d%d%d", &sumArray[0], &sumArray[1], &sumArray[2], &sumArray[3], &sumArray[4]);
    // printf("\nInital array:\n%10.d%10.d%10.d%10.d%10.d\n", sumArray[0], sumArray[1], sumArray[2], sumArray[3], sumArray[4]);
    // printf("The sum of the numbers in the array is ");
    // isOdd(arraySum(sumArray, 5));
    // printf("\n");

    printf("\n---------------Question 8---------------\n");


    return 0;
}

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

int makeSquare (int num)
{
    return num*num;
}

void makeSquareDirectly (int array[], int i, int size)
{
    array[i] = array[i] * array[i];
    for (int j = 0; j < size; j++)
    {
        printf("%10.d", array[j]);
    }
    printf("\n");

}

int arraySum (int array[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

void isOdd (int num)
{
    if ((num % 2) == 1) printf("odd");
    else printf("even");
}