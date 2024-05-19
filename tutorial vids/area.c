#include<stdio.h>
int main()
{
    int r;
    float pi,ar;
    printf("Enter radius=");
    scanf("%d",&r);
    pi=3.14;
    ar= pi*(r*r);
    printf("Area of the circle having radius %d is: %f",r,ar);
    return 0;
}