#include<stdio.h>
int main()
{
    int x,y,prefix,postfix,choice;
    char ch; //variable declaration
    do
    {
        printf("Enter 2 same numbers=");
        scanf("%d%d",&x,&y);
        printf("\nChoose increment or decrement...\nIncrement= 1\nDecrement= 2\n");
        scanf("%d",&choice);
        switch(choice)
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
        printf("\nDo you want to continue (y/n): ");
        scanf("%c",&ch);
        scanf("%c",&ch);
        printf("***************************************\n");
    }while(ch=='y' || ch=='Y');
     
    printf("\nThank You.");
    return 0;
}

/*

output:

Enter 2 same numbers=4
4

Choose increment or decrement...
Increment= 1
Decrement= 2
1
Prefix Increment: 5
Postfix Increment: 4
Do you want to continue (y/n): y
***************************************
Enter 2 same numbers=5
5

Choose increment or decrement...
Increment= 1
Decrement= 2
2
Prefix Increment: 4
Postfix Increment: 5
Do you want to continue (y/n): Y
***************************************
Enter 2 same numbers=6
6

Choose increment or decrement...
Increment= 1
Decrement= 2
5
Wrong choice
Do you want to continue (y/n): n
***************************************

Thank You.

*/