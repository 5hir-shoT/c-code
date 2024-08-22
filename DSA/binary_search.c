#include <stdio.h>

int binary_search(int arr[], int n, int x) 
{
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() 
{
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    int result = binary_search(arr, n, x);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}

/*  output:

    Enter number of elements: 5
    Enter 5 elements in sorted order: 1
    2
    3
    4
    5
    Enter element to search: 3
    Element found at index 2
*/