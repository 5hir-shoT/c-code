#include <stdio.h>  
int main()  
{  
   int n;  
   int count=0;   
   printf("Enter any number=\n ");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
   printf("\nThe number of digits are: %d", count);  
    return 0;  
}

/*

output:

Enter any number=
 4

The number of digits are: 1

*/