#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,sum,per;
    printf("enter the marks of 4 subjects out of 40=\n");
    scanf("%f%f%f%f",&s1,&s2,&s3,&s4);
    sum=s1+s2+s3+s4;
    per=((sum)/160)*100;
    printf("percentage is: %f",per);
    return 0;
}