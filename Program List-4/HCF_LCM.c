#include<stdio.h>
int main()
{
    int a,b,H,L;
    printf("enter 2 numbers=");
    scanf("%d%d",&a,&b);
    H=(a<b)?a:b;
    L=(a*b)/H;
    for(H;H>=1;H--)
    if(a%H==0 && b%H==0)
    break;
    printf("\nHCF of %d and %d is %d\n",a,b,H);
    printf("\nLCM of %d and %d is %d",a,b,L);
    return 0;
}