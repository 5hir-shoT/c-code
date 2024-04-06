#include<stdio.h>
#include<math.h>
int main ()
{
    int n;
    float x,y;
    printf("enter x and n =\n");
    scanf("%f%d",&x,&n);
    switch(n)
    {
        case 1: y=1.0+pow(x,2.0);
                break;
        case 2: y=1.0+(x/n);
                break;
        case 3: y=1.0+(2.0*x);
                break;
        default:y = 1 + n * x;
                break;
    }
    printf("\n Value of y(x,n) = %f",y);
    return 0;
}