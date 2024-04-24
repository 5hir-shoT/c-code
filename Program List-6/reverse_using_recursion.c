#include<stdio.h>
void printReverse(int num)
{
    if(num==0)
    return;
    printf("%d",num%10);
    printReverse(num/10);
}
int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    printf("Reverse of %d is: ", num);
    printReverse(num);
    printf("\n");
    return 0;
}