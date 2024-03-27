#include<stdio.h>  
int main()    
{    
    int n,r,sum=0,temp;    
    printf("enter the number=");    
    scanf("%d",&n);
    for(temp=n;n!=0;n=n/10)    
    {    
        r=n%10;    
        sum=(sum*10)+r;  
    }    
    if(temp==sum)    
    printf("palindrome number ");    
    else    
    printf("not palindrome");   
    return 0;  
}