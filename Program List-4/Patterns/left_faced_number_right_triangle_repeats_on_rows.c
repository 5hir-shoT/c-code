#include<stdio.h>
int main()
{
    int rows;
    printf("enter the number of rows in the pattern=\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
/* 

output: if rows=5
    1
    22
    333
    4444
    55555
    
*/