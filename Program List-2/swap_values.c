#include<stdio.h>
int main()
{
    int x,y,t,ch; //variable declaration
    printf("Enter 2 numbers to be swapped=\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping...\nFirst value=%d\nSecond value=%d\n",x,y);
    printf("How do you want to swap it?\n1= with variable\n2= without variable\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: t=x;
                x=y;
                y=t;    
                printf("After swapping...\nFirst value:%d\nSecond value:%d\n",x,y);
                break;

        case 2: x=x+y;
                y=x-y;
                x=x-y;
                printf("After swapping...\nFirst value:%d\nSecond value:%d\n",x,y);
                break;

        default:printf("Wrong choice");
    }    
    return 0;
}