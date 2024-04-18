#include<stdio.h>
int main()
{
    int x,y,t,choice;
    char ch; //variable declaration
    do
    {
        printf("Enter 2 numbers to be swapped=\n");
        scanf("%d%d",&x,&y);
        printf("Before swapping...\nFirst value=%d\nSecond value=%d\n",x,y);
        printf("\nHow do you want to swap it?\n1= with variable\n2= without variable\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: t=x;
                    x=y;
                    y=t;    
                    printf("\nAfter swapping...\nFirst value:%d\nSecond value:%d\n",x,y);
                    break;

            case 2: x=x+y;
                    y=x-y;
                    x=x-y;
                    printf("\nAfter swapping...\nFirst value:%d\nSecond value:%d\n",x,y);
                    break;

            default:printf("\nWrong choice");
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

Enter 2 numbers to be swapped=
2
3
Before swapping...
First value=2
Second value=3

How do you want to swap it?
1= with variable
2= without variable
1

After swapping...
First value:3
Second value:2

Do you want to continue (y/n): y
***************************************
Enter 2 numbers to be swapped=
2
3
Before swapping...
First value=2
Second value=3

How do you want to swap it?
1= with variable
2= without variable
2

After swapping...
First value:3
Second value:2

Do you want to continue (y/n): Y
***************************************
Enter 2 numbers to be swapped=
2
3
Before swapping...
First value=2
Second value=3

How do you want to swap it?
1= with variable
2= without variable
5

Wrong choice
Do you want to continue (y/n): N
***************************************

Thank You.

*/