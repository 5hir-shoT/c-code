#include<stdio.h>
void checkEvenOdd(int num)
{
    if(num%2==0)
        printf("%d is even.\n",num);
    else
        printf("%d is odd.\n",num);
}
int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    checkEvenOdd(num);
    return 0;
}

/*

output:

Enter an integer number: 78
78 is even.

*/