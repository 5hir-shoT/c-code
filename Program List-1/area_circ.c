#include<stdio.h>
int main()
{
    float pi,r,ar,ci; //variable declaration
    printf("Steps:\n1.Enter the preffered value of pi\n 2.Enter the radius\n");
    scanf("%f%f",&pi,&r);
    ar=pi*(r*r);
    ci=2.0*pi*r;
    printf("Area is=%f\n",ar);
    printf("Circumference is=%f\n",ci);
    return 0;
}