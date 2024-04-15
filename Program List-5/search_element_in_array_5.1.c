#include<stdio.h>
int main()
{
    int arr[50];
    int size,i,num,t=0;
    printf("Enter the size of array:\n ");
    scanf("%d",&size);
    printf("Enter the element in array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search in array:\n");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            t++;
            printf("The entered number is %d in the index of %d in array\n",num,i);            
        }
    }
    if(t==0)
    {
        printf("Entered number is not available");
    }
    return 0;
}

/*

output:

Enter the size of array:
 5
Enter the element in array:
1
2
3
4
5
Enter the number you want to search in array:
3
The entered number is 3 in the index of 2 in array


*/