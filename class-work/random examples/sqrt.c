#include<stdio.h>
int square(int x)
{
    return x*x;
}

int main()
{
    int a;
    printf("Enter a no.:\n");
    scanf("%d",&a);
    int p=square(a);
    printf("Square is= %d",p);
    return 0;
}