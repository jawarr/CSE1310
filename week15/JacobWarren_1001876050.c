#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int dotProduct(int size, int vector1[size], int vector2[size]);
void print4x4Array(int source[4][4]);
void print2DimensionalArray(int rows, int columns, int source[rows][columns]);
void printMinMax2DArray(int rows, int columns, int source[rows][columns]);
void printDistinctValues2DArray(int rows, int columns, int source[rows][columns]);

int main(void) 
{
    printf("\n---------------Question 1---------------\n");
    
    //Initialize and populate two vectors
    int size;
    printf("Enter the number elements for the two vectors: ");
    scanf("%d", &size);
    
    int vector1[size];
    printf("Enter the elements for vector 1: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &vector1[i]);
    }
    
    int vector2[size];
    printf("Enter the elements for vector 2: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &vector2[i]);
    }

    //Call dotProduct func and print output
    printf("The dot product of the two vectors is %d.\n", dotProduct(size, vector1, vector2));
    
    printf("\n---------------Question 2---------------\n");
    
    //Array 1
    int array1[4][4];
    srand(time(NULL));
    printf("i)\n");
    
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            for (int j = 0; j < 4; j++)
            {
                if (j == 0) array1[i][j] = rand() % 9 + 1;
                else array1[i][j] = 0;
            }
            break;

        case 1:
            for (int j = 0; j < 4; j++)
            {
                if (j <= 1) array1[i][j] = rand() % 9 + 1;
                else array1[i][j] = 0;
            }
            break;
        
        case 2:
            for (int j = 0; j < 4; j++)
            {
                if (j <= 2) array1[i][j] = rand() % 9 + 1;
                else array1[i][j] = 0;
            }
            break;

        case 3:
            for (int j = 0; j < 4; j++)
            {
                array1[i][j] = rand() % 9 + 1;
            }
            break;
        default:
            break;
        }
        
    }
    print4x4Array(array1);
    
    //Array 2
    int array2[4][4];
    printf("ii)\n");
    
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            for (int j = 0; j < 4; j++)
            {
                array2[i][j] = rand() % 9 + 1;
            }
            break;

        case 1:
            for (int j = 0; j < 4; j++)
            {
                if (j >= 1) array2[i][j] = rand() % 9 + 1;
                else array2[i][j] = 0;
            }
            break;
        
        case 2:
            for (int j = 0; j < 4; j++)
            {
                if (j >= 2) array2[i][j] = rand() % 9 + 1;
                else array2[i][j] = 0;
            }
            break;

        case 3:
            for (int j = 0; j < 4; j++)
            {
                if (j >= 3) array2[i][j] = rand() % 9 + 1;
                else array2[i][j] = 0;
            }
            break;
        default:
            break;
        }
        
    }
    print4x4Array(array2);

    //Array 3
    int array3[4][4];
    printf("iii)\n");
    
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            for (int j = 0; j < 4; j++)
            {
                if (j == 0) array3[i][j] = rand() % 9 + 1;
                else array3[i][j] = 0;
            }
            break;

        case 1:
            for (int j = 0; j < 4; j++)
            {
                if (j == 1) array3[i][j] = rand() % 9 + 1;
                else array3[i][j] = 0;
            }
            break;
        
        case 2:
            for (int j = 0; j < 4; j++)
            {
                if (j == 2) array3[i][j] = rand() % 9 + 1;
                else array3[i][j] = 0;
            }
            break;

        case 3:
            for (int j = 0; j < 4; j++)
            {
                if (j == 3) array3[i][j] = rand() % 9 + 1;
                else array3[i][j] = 0;
            }
            break;
        default:
            break;
        }
        
    }
    print4x4Array(array3);
    
    printf("\n---------------Question 3---------------\n");

    //Initialize arrays
    int rows, columns;

    printf("Enter the number of rows and columns for both arrays: ");
    scanf("%d%d", &rows, &columns);
    int array4[rows][columns];
    int array5[rows][columns];
    int sumArray[rows][columns];

    //Populate 2 arrays
    for (int i = 0; i < rows; i++)
    {
        printf("Enter the values for array 1 row %d: ", i+1);
        
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &array4[i][j]);
        }
    }
    
    for (int i = 0; i < rows; i++)
    {
        printf("Enter the values for array 2 row %d: ", i+1);
        
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &array5[i][j]);
        }
    }

    //Add 2 arrays
    for (int i = 0; i < rows; i++)
    {   
        for (int j = 0; j < columns; j++)
        {
            sumArray[i][j] = array4[i][j] + array5[i][j];
        }
    }
    printf("\n");

    //Print sum array
    printf("Sum of both arrays:\n");
    print2DimensionalArray(rows, columns, sumArray);

    printf("\n---------------Question 4---------------\n");

    //Initialize arrays
    int rows2, columns2;

    printf("Enter the number of rows and columns for the array: ");
    scanf("%d%d", &rows2, &columns2);
    int array6[rows2][columns2];

    //Populate array
    for (int i = 0; i < rows2; i++)
    {   
        for (int j = 0; j < columns2; j++)
        {
            array6[i][j] = rand() % 10 + 1;
        }
    }
    
    //Print Array
    printf("\ni)\n");
    print2DimensionalArray(rows2, columns2, array6);

    //Min and max
    printf("ii)\n");
    printMinMax2DArray(rows2, columns2, array6);

    //Find and print distinct values
    printf("iii)\n");
    printDistinctValues2DArray(rows2, columns2, array6);

    printf("\n---------------Question 5---------------\n");

    printf("b) jill\n");
    printf("c) jack and jill\n");
    printf("d) 8\n");
    printf("e) 13\n\n");
    printf("(gcc compiler gives a warning when using the \"%%u\" format specifier in part d and e, because strlen() returns a long unsigned int rather than just an unsigned int; however, it will still print.)\n");

    printf("\n---------------Question 6---------------\n");
    
    char word[20];
    char smallest_word[20] = "20 character phrase!";
    char largest_word[20];
    while(1)
    {   
        printf("Enter word: ");
        scanf("%s", word);
        if(strlen(word) > 20)
        {
            printf("Words must be shorter than 20 characters\n");
            continue;
        }
        if(strlen(word) < strlen(smallest_word)) strcpy(smallest_word, word);
        if(strlen(word) > strlen(largest_word)) strcpy(largest_word, word);
        if (strlen(word) == 4) break;
    }
    printf("\nSmallest word: %s", smallest_word);
    printf("\nLargest word: %s\n", largest_word);

    printf("\n---------------Question 7---------------\n");
    
    int frequencyArr1[6] = {0};
    int frequencyArr2[6] = {0};
    int sumFrequencyArr[11] = {0};
    srand(time(NULL));
    
    for (int i = 0; i < 10000; i++) {
        
        int n1 = rand() % 6;
        switch (n1) {
            case 0:
                frequencyArr1[n1]++;
                break;
            case 1:
                frequencyArr1[n1]++;
                break;
            case 2:
                frequencyArr1[n1]++;
                break;
            case 3:
                frequencyArr1[n1]++;
                break;
            case 4:
                frequencyArr1[n1]++;
                break;
            case 5:
                frequencyArr1[n1]++;
                break;  
            default:
                break;
        }
        int n2 = rand() % 6;
        switch (n2) {
            case 0:
                frequencyArr2[n2]++;
                break;
            case 1:
                frequencyArr2[n2]++;
                break;
            case 2:
                frequencyArr2[n2]++;
                break;
            case 3:
                frequencyArr2[n2]++;
                break;
            case 4:
                frequencyArr2[n2]++;
                break;
            case 5:
                frequencyArr2[n2]++;
                break;  
            default:
                break;
        }
        switch (n1+n2)
        {
        case 0:
            sumFrequencyArr[n1+n2]++;
            break;
        case 1:
            sumFrequencyArr[n1+n2]++;
            break;
        case 2:
            sumFrequencyArr[n1+n2]++;
            break;
        case 3:
            sumFrequencyArr[n1+n2]++;
            break;
        case 4:
            sumFrequencyArr[n1+n2]++;
            break;
        case 5:
            sumFrequencyArr[n1+n2]++;
            break;  
        case 6:
            sumFrequencyArr[n1+n2]++;
            break;
        case 7:
            sumFrequencyArr[n1+n2]++;
            break;
        case 8:
            sumFrequencyArr[n1+n2]++;
            break;
        case 9:
            sumFrequencyArr[n1+n2]++;
            break;
        case 10:
            sumFrequencyArr[n1+n2]++;
            break;
        default:
            break;
        }
    }

    printf("The dice were rolled 10000 times\n");
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("On dice 1, number %d appeared %d times\n", i+1, frequencyArr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("On dice 2, number %d appeared %d times\n", i+1, frequencyArr2[i]);
    }
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        printf("On both dice, the sum %d appeared %d times\n", i+2, sumFrequencyArr[i]);
    }

    printf("\n---------------Question 8---------------\n");

    FILE *grPtr; // cfPtr = GradeReport.txt file pointer
    // fopen opens file. Exit program if unable to create file
    if ((grPtr = fopen("GradeReport.txt", "w")) == NULL) puts("File could not be opened");
    
    else 
    {
        puts("Enter the student name and grade");
        puts("Enter EOF to end input.");
        printf("%s", "=> ");
        char name[30]; // student name
        int grade; // grade number
        scanf("%29s%d", name, &grade);

        // write name and grade into file with fprintf
        
        while (!feof(stdin)) 
        {
            fprintf(grPtr, "%s %d \n", name, grade);
            printf("%s", "=> ");
            scanf("%29s%d", name, &grade);
        }
        fclose(grPtr); 
        puts("\n\nContents of GradeReport.txt: ");

        if ((grPtr = fopen("GradeReport.txt", "r")) == NULL) puts("File could not be opened");
        fscanf(grPtr, "%29s%d", name, &grade);
        while (!feof(grPtr))
        {
            printf("%s %d \n", name, grade);
            fscanf(grPtr, "%29s%d", name, &grade);
        }
        fclose(grPtr); 
    }


    return 0;
}

int dotProduct(int size, int vector1[size], int vector2[size]) 
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        int product = (vector1[i] * vector2[i]);
        sum += product;
    }
    return sum;
}

void print4x4Array(int source[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (source[i][j] == 0) printf("  %d", 0);
            else printf("%3.d", source[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void print2DimensionalArray(int rows, int columns, int source[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%10.d", source[i][j]);
        }
        printf("\n\n");
    }
}

void printMinMax2DArray(int rows, int columns, int source[rows][columns])
{
    int min = source[0][0], max = source[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (source[i][j] < min) min = source[i][j];
            if (source[i][j] > max) max = source[i][j];
        }
    }
    printf("\tMin: %d\n", min);
    printf("\tMax: %d\n", max);
}

void printDistinctValues2DArray(int rows, int columns, int source[rows][columns])
{
    
    int distinctValues[10] = {0};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
           distinctValues[source[i][j] - 1] += 1; 
        }
    }

    printf("\tDistinct values: ");
    for (int i = 0; i < 10; i++)
    {
        if (distinctValues[i] == 0) continue;
        else printf("%d, ", i+1);
    }
    printf("\n");
}