#include<stdio.h>
int main ()
{
    int n;
    char ch;
    do
    {
        printf("\nenter a number= ");
        scanf("%d",&n);
        switch(n>0)
        {
            case 1 : printf("Positive number");
                     break;

            case 0: switch(n<0)
                    {
                        case 1: printf("Negative number");
                                break;
             
                        case 0: printf("Zero number");
                    }
                    break;
        }
        printf("\nDo you wish to continue? (Y/N)\n");
        scanf("%c",&ch);
        scanf("%c",&ch);
        printf("\n********************************");
    }while(ch=='Y' || ch=='y');
    return 0;
}

/*

output:

enter a number=
8
Positive number
---------------------------
enter a number=
-8
Negative number
---------------------------
enter a number=
0
Zero number

*/