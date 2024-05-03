#include <stdio.h>

// Function to add two matrices using pointers
void addMatrices(int *mat1, int *mat2, int *result) 
{
    for (int i = 0; i < 4; i++) 
    {
        *(result + i) = *(mat1 + i) + *(mat2 + i);
    }
}

// Function to print a 2x2 matrix
void printMatrix(int *mat) 
{
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("%d ", *(mat + i * 2 + j));
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[2][2], matrix2[2][2], result[2][2];
    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Call the addMatrices function passing pointers to the matrices and the result matrix
    addMatrices(&matrix1[0][0], &matrix2[0][0], &result[0][0]);
    printf("Resultant matrix after addition:\n");
    printMatrix(&result[0][0]);
    return 0;
}

/*

output:

Enter the elements of first matrix:
7
0
0
7
Enter the elements of second matrix:
1
0
0
1
Resultant matrix after addition:
8 0 
0 8

*/