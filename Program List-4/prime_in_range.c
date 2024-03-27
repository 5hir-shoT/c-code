#include<stdio.h>
int main()
{
    int n,i,count,j;
    printf("Enter the range=");
    scanf("%d",&n);
    printf("\nPrime number are:\n");
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && i!=1)
        printf(" %d",i);
    }
    return 0;
}