#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter 3 numbers=\n");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b && a>c)?a:(b>c?b:c);
    if (max%2==0)
    {
        printf("max number %d is EVEN",max);
    }
    else
    {
        printf("max number is %d is NOT even or is ODD",max);
    }
    return 0;
}

/*

output:

Enter 3 numbers=
3
6
8
max number 8 is EVEN

*/