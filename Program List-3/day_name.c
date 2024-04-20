#include<stdio.h>
int main()
{
    int d;
    printf("enter day number=\n");
    scanf("%d",&d);
    switch(d)
    {
        case 1: printf("Monday");
                break;
        case 2: printf("Tuesday");
                break;
        case 3: printf("Wednesday");
                break;
        case 4: printf("Thursday");
                break;
        case 5: printf("Friday");
                break;
        case 6: printf("Saturday");
                break;
        case 7: printf("Sunday");
                break;
        
        default: printf("Wrong choice");
                 break;
    }
    return 0;
}

/*

output:

enter day number=
1
Monday

*******************

enter day number=
8
Wrong choice

*/