#include<stdio.h>
int main()
{
    int n,num1=0,num2=1,nextnum;
    printf("Enter the number of Fibonacci numbers to generate=");
    scanf("%d",&n);
    printf("Fibonacci series:");
    for(int i=1;i<=n;++i)
    {
        printf("%d ",num1);
        nextnum=num1+num2;
        num1=num2;
        num2=nextnum;
    }
    return 0;
}