#include<stdio.h>
int main()
{
    int arr[20];
    int size,i,l,s;
    printf("enter the no. of element you want in array=");
    scanf("%d",&size);
    printf("enter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=arr[0];
    s=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>1)
        {
            l=arr[i];
        }
    }
    printf("The largest number in array is %d \n",l);
    for(i=0;i<size;i++)
    {
        if(arr[i]<s)
        {
            s=arr[i];
        }
    }
    printf("The smallest number in array is %d \n",s);
    return 0;
}

/*

output:
**********************************************

enter the no. of element you want in array=5
enter the elements of the array:
1
2
3
4
5
The largest number in array is 5 
The smallest number in array is 1

**********************************************

*/