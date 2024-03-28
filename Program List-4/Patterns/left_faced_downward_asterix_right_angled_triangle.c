#include<stdio.h>
int main()
{
    int rows;
    printf("enter the number of rows in the pattern=\n");
    scanf("%d",&rows);
    for(int i=rows;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*

output: if rows=5

*****
****
***
**
*

*/