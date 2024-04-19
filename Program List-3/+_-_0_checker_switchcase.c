#include<stdio.h>
int main ()
{
    int n;
    printf("enter a number=\n");
    scanf("%d",&n);
    switch(n>0)
    {
        case 1 :
        printf("Positive number ");
        break;
        case 0:
        switch(n<0)
        {
            case 1:
            printf("Negative number ");
            break;
             
             case 0:
             printf("Zero number  ");
            
        }
         break;
    }
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