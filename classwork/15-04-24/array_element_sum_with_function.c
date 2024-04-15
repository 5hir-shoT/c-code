#include<stdio.h>
int add(int a[],int m)
{
    int s=0,i;
    for(i=0;i<m;i++)
    {
        s=s+a[i];
    }
    return s;
}
int main()
{
    int arr[20];
    int size,i,sum;
    printf("Enter the number of elements you want in an array=");
    scanf("%d",&size);
    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=add(arr,size);
    printf("Sum of array elements=%d",sum);
    return 0;
}

/*

output:

Enter the number of elements you want in an array=5
Enter the elements of the array:
1
1
1
1
1
Sum of array elements=5

*/