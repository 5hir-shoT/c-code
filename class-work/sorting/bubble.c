#include <stdio.h>
#define size 20
void bubblesort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1]){
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[size], i, n,count;
    printf("Enter the element num that you want to put in array ");
    scanf("%d", &n);
    printf("The elements are:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    bubblesort(arr, n);
    printf("\nThe sorted array:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    if (arr[i]=arr[i+1]) {
    	count++;
    	printf("%d is %d times", arr[i], count);
	}
    return 0;
}