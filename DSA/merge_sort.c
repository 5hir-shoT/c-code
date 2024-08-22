#include <stdio.h>

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    
    for (int curr_size = 1; curr_size < n; curr_size *= 2) 
    {
        for (int left_start = 0; left_start < n - 1; left_start += 2 * curr_size) 
        {
            int mid = left_start + curr_size - 1;
            int right_end = (left_start + 2 * curr_size - 1 < n - 1) ? (left_start + 2 * curr_size - 1) : (n - 1);

            // Merge process
            int n1 = mid - left_start + 1;
            int n2 = right_end - mid;

            int left[n1], right[n2];

            for (int i = 0; i < n1; i++)
                left[i] = arr[left_start + i];
            for (int j = 0; j < n2; j++)
                right[j] = arr[mid + 1 + j];

            int i = 0, j = 0, k = left_start;

            while (i < n1 && j < n2) 
            {
                if (left[i] <= right[j]) 
                {
                    arr[k] = left[i];
                    i++;
                } else 
                {
                    arr[k] = right[j];
                    j++;
                }
                k++;
            }

            while (i < n1) 
            {
                arr[k] = left[i];
                i++;
                k++;
            }

            while (j < n2) 
            {
                arr[k] = right[j];
                j++;
                k++;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

/*  
    output:
    
    Enter number of elements: 5
    Enter 5 elements: 11
    22
    85
    644
    97 
    Sorted array: 11 22 85 97 644
    
*/