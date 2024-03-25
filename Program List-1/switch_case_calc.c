#include<stdio.h>
int main()
{
    float a,b,res;
    int t;
    printf("Enter the 2 values:\n");
    scanf("%f%f", &a,&b);
    printf("Press:\n 1= addition\n2=subtraction\n3=multiplication\n4=division\n");
    scanf("%d",&t);
    switch(t)
    {
        case 1: res=a+b;
                printf("Sum is= %f",res);
                break;
        case 2: res=a-b;
                printf("Difference is= %f",res);
                break;
        case 3: res=a*b;
                printf("Product is= %f",res);
                break;
        case 4: res=a/b;
                printf("Division is= %f",res);
                break;
        default: printf("Wrong choice");
    }
    return 0;
}