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

/*

output:

enter 3 numbers=
3
4
5

The largest number between 3, 4 and 5 is= 5

*/