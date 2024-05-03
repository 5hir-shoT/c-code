#include <stdio.h>

// Function to count the number of even and odd elements in an array
void countEvenOdd(int arr[], int size, int *evenCount, int *oddCount) 
{
    *evenCount = 0;
    *oddCount = 0;

    // Iterate through the array and count even and odd numbers
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            (*evenCount)++;
        } else 
        {
            (*oddCount)++;
        }
    }
}

int main() 
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int evenCount, oddCount;

    // Call the countEvenOdd function passing the array and its size
    countEvenOdd(arr, size, &evenCount, &oddCount);

    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);

    return 0;
}

/*

output:

Enter the size of the array: 10
Enter the elements of the array:
7
5
1
6
8
9
1
2
10
3 
Number of even elements: 4
Number of odd elements: 6

*/