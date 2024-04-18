#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,a,ci;
    printf("Enter Principal,rate and time=\n");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    a=p*((pow((1.0+r/100.0),t)));
    ci=a-p;
    printf("Simple interest is=%f\n",si);
    printf("Compound interest is=%f\n",ci);
    return 0;
}

/*

output:

Enter Principal,rate and time=
8  
2
2
Simple interest is=0.320000
Compound interest is=0.323200

*/