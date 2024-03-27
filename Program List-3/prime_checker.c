#include<stdio.h>
int main()
{
    int n,i,temp_num=0;
    printf("enter a positive integer=\n");
    scanf("%d",&n);
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                temp_num++;
                break;
            }
        }
        if(temp_num==0 && temp_num!=1)
        {
            printf("%d is a prime number",n);
        }
        else
        {
            printf("%d is NOT a prime number",n);
        }
        return 0;
    }
}