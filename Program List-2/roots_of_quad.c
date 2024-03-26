#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,disc,root1,root2;
    printf("enter coefficients a,b and c=\n");
    scanf("%f%f%f",&a,&b,&c);
    disc=(b*b)-(4.0*a*c);
    root1=(-b+sqrt(disc))/(2.0*a);
    root2=(-b-sqrt(disc))/(2.0*a);
    printf("roots are %f and %f",root1,root2);
    return 0;
}