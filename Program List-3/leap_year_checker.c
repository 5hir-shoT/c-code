#include<stdio.h>
int main()
{
    int y;
    printf("Enter a year=\n");
    scanf("%d",&y);
    if((y%4==0) && (y%400))
    {
        printf("Leap year");
    }
    else
    {
        printf("Not Leap year");
    }
    return 0;
}

/*

output:

Enter a year=
2020
Leap year

*/