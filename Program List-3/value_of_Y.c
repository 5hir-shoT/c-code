#include<stdio.h>
int main ()
{
    int n,x,y;
    printf("enter x and n =\n");
    scanf("%d%d",&x,&n);
    switch(n)
    {
        case 1: y=1+(x*2);
                printf("answer is %d=", y);
                break;
        case 2: y=1+(x/n);
                printf("answer is %d=", y);
                break;
        case 3: y=1+(2*x);
                printf("answer is %d=", y);
                break;
        case 0:
        {        
            switch(n>0 || n<1)
            {
                case 1: y=1+(n*x);
                        break;
                case 0: printf("ERROR");
                        break;
            }
         break;
    }
}