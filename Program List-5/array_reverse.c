#include<stdio.h>  
int main()  
{  
    int n, arr[n], i;  
    printf("Enter the size of the array: ");  
    scanf("%d", &n);  
    printf("Enter the elements: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    int rev[n], j = 0;  
    for(i = n-1; i >= 0; i--)  
    {  
        rev[j] = arr[i];  
        j++;  
    }  
    printf("The Reversed array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", rev[i]);  
    }  
}

/*

output:

Enter the size of the array: 5
Enter the elements: 1
2
3
4
5
The Reversed array: 5 4 3 2 1

*/