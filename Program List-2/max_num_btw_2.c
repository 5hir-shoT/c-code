#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers=\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("\nThe first number is MAXimum");
    }
    else
    {
        printf("\nThe first number is MINimum");
    }
    return 0;
}

/*

output:

Enter 2 numbers=
5
4

The first number is MAXimum

*/