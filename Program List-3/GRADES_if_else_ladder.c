#include<stdio.h>
int main()
{
    int m;
    printf("Input marks=");
    scanf("%d",&m);
    if(m>=90 && m<=100)
    {
        printf("Grade A+\n");
    }
    else if(m>=80 && m<90)
    {
        printf("Grade A\n");
    }
    else if(m>=70 && m<80)
    {
        printf("Grade B+\n");
    }
    else if(m>=60 && m<70)
    {
        printf("Grade B\n");
    }
    else if(m>=50 && m<60)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade F\n");
    }
    return 0;
}

/*

output:

Input marks=80
Grade A

*/