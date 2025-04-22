#include <stdio.h>

void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    // Initializing elements of matrix result to 0
    for(int i = 0; i < rowFirst; ++i) {
        for(int j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing in result
    for(int i = 0; i < rowFirst; ++i) {
        for(int j = 0; j < columnSecond; ++j) {
            for(int k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[10][10], int row, int column) {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < column; ++j) {
            printf("%d  ", matrix[i][j]);
            if(j == column - 1)
                printf("\n");
        }
    }
}

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];
    int rowFirst, columnFirst, rowSecond, columnSecond;

    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter rows and column for second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    // Taking input until column of first matrix is equal to row of second matrix
    while (columnFirst != rowSecond) {
        printf("Error! Column of first matrix not equal to row of second matrix.\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &rowFirst, &columnFirst);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d", &rowSecond, &columnSecond);
    }

    // Storing elements of first matrix
    printf("\nEnter elements of matrix 1:\n");
    for(int i = 0; i < rowFirst; ++i) {
        for(int j = 0; j < columnFirst; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Storing elements of second matrix
    printf("\nEnter elements of matrix 2:\n");
    for(int i = 0; i < rowSecond; ++i) {
        for(int j = 0; j < columnSecond; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Multiplying two matrices
    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, columnFirst, rowSecond, columnSecond);

    // Displaying the result
    printf("\nFirst Matrix:\n");
    displayMatrix(firstMatrix, rowFirst, columnFirst);
    printf("\nSecond Matrix:\n");
    displayMatrix(secondMatrix, rowSecond, columnSecond);
    printf("\nResult Matrix:\n");
    displayMatrix(result, rowFirst, columnSecond);

    return 0;
} 