#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter 3 numbers=\n");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b && a>c)?a:(b>c?b:c);
    printf("\nThe largest number between %d, %d and %d is= %d",a,b,c,max);
    return 0;
}