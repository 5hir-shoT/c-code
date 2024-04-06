#include<stdio.h>
int main()
{
    int i,j,f=1,num;
    printf("enter a number=");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    f=f*i;
    printf("The factorial of %d is=%d",num,f);
    return 0;
}