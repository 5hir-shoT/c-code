#include<stdio.h>
int main()
{
    
    int rows;
    printf("enter the number of rows in pattern to be print=\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows+4;i+=2)
    {
        for(int j=1;j<=(rows+4)-i;j+=2)
        {
           printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");       
    }
    return 0;    
}

/*

output: if rows=5

    *
   ***
  *****
 *******
*********

*/