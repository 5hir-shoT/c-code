#include<stdio.h>
int main()
{
    int n,t,sum=0,r;
    printf("enter a number=");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(t==sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    return 0;
}

/*

output:

enter a number=153
Armstrong number

*******************

enter a number=351
Not Armstrong Number

*/