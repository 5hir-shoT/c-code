#include <stdio.h>
void printAlternateElements(int rows, int cols, int matrix[rows][cols]) 
{
    for (int row = 0; row < rows; row++) 
    {
        for (int col = 0; col < cols; col++) 
        {
            if ((row + col) % 2 == 0) 
            {
                printf("%d ", matrix[row][col]);
            }
        }
    }
}

int main() 
{
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int row = 0; row < rows; row++) 
    {
        for (int col = 0; col < cols; col++) 
        {
            scanf("%d", &matrix[row][col]);
        }
    }
    printf("Alternate elements of the matrix are: ");
    printAlternateElements(rows, cols, matrix);
    return 0;
}

/*

output:

Enter the number of rows and columns of the matrix: 4
4
Enter elements of the matrix:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
Alternate elements of the matrix are: 1 3 6 8 9 11 14 16

*/