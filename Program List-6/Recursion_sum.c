#include<stdio.h>
int sumOfDigits(int num)
{
    if (num==0)
    return 0;
    return(num%10)+sumOfDigits(num/10);
}
int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    int sum=sumOfDigits(num);
    printf("Sum of digits of %d is: %d\n",num,sum);
    return 0;
}

/*

output:

Enter an integer number: 24
Sum of digits of 24 is: 6

*/