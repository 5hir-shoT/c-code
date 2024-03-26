#include<stdio.h>
int main()
{
    int x,y,prefix,postfix,ch; //variable declaration
    printf("Enter 2 same numbers=");
    scanf("%d%d",&x,&y);
    printf("\nChoose increment or decrement...\nIncrement= 1\nDecrement= 2\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:     prefix = ++x;
                    postfix = y++;
                    printf("Prefix Increment: %d", prefix);
                    printf("\nPostfix Increment: %d",postfix);
                    break;

        case 2:     prefix = --x;
                    postfix = y--;
                    printf("Prefix Increment: %d", prefix);
                    printf("\nPostfix Increment: %d",postfix);
                    break;

        default:    printf("Wrong choice");
    }
    return 0;
}