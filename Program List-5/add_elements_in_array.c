#include<stdio.h>
int main()
{
    int arr[20];
    int size,i,sum=0;
    printf("Enter the number of elements you want in an array=");
    scanf("%d",&size);
    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    printf("The sum of all element of array is =%d",sum);
    return 0;
}

/*

output:

Enter the number of elements you want in an array=5
Enter the elements of the array:
1
2
3
4
5
The sum of all element of array is =15

*/