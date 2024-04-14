#include<stdio.h>
int add(int x, int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
int pro(int x, int y)
{
    return x*y;
}
int div(int x, int y)
{
    return x/y;
}
int main()
{
    int a,b,ad,s,p,d;
    printf("Enter 2 nos.:\n");
    scanf("%d%d",&a,&b);
    ad=add(a,b);
    s=sub(a,b);
    p=pro(a,b);
    d=div(a,b);
    printf("\nSum is=%d",ad);
    printf("\nDifference is=%d",s);
    printf("\nProduct is=%d",p);
    printf("\nQuotient is=%d",d);
    return 0;
}

/*
    output:
    Enter 2 nos.:
    3
    2

    Sum is=5
    Difference is=1
    Product is=6
    Quotient is=1
    
*/