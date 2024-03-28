#include<stdio.h>
int main()
{
    int rows;
    printf("enter the number of rows in pattern to be print=\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows-i;j++)
        
            printf(" ");
            for(int k=1;k<=i;k++)
            {
                printf("%d",k);
            }
            printf("\n");
    }
    return 0;
}

/*

output: if rows=5
    1
   12
  123
 1234
12345

*/