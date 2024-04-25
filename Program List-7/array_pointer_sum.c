#include<stdio.h>
int sumArray(int *arr,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=*(arr+i);
    }
    return sum;
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements of the array: \n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int totalSum=sumArray(arr,size);
    printf("The sum of all the elements of the array is: %d\n",totalSum);
    return 0;
}

/*

output:

Enter the size of the array: 5
Enter 5 elements of the array:
1
2
3
4
5
The sum of all the elements of the array is: 15

*/