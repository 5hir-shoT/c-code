#include<stdio.h>
int factorial(int x)
{
    int i,fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n,r,nr,nfact,rfact,nrfact,combination;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter the value of r:\n");
    scanf("%d",&r);
    nfact=factorial(n);
    rfact=factorial(r);
    nrfact=factorial((n-r));
    combination=(nfact)/((rfact)*(nrfact));
    printf("%dC%d is=%d",n,r,combination);
    return 0;
}

/*

output:

Enter the value of n:
7
Enter the value of r:
3
7C3 is=35


*/