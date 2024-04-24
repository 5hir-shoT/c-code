#include<stdio.h>
int findMax(int a, int b);
int findMin(int a, int b);
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    int maximum=findMax(num1,num2);
    int minimum=findMin(num1,num2);
    printf("Maximum: %d\n",maximum);
    printf("Minimum: %d\n",minimum);
    return 0;
}
int findMax(int a, int b)
{
    return (a>b)?a:b;
}
int findMin(int a,int b)
{
    return (a<b)?a:b;
}

/*

output:

Enter two numbers: 2
3
Maximum: 3
Minimum: 2

*/