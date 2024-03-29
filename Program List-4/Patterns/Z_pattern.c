#include<stdio.h>
int main()
{
    int i,rows,j;
    printf("\t enter value of rows=");
    scanf("%d",&rows);
    printf("\n\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows;j++)
        {
            if(i==0||i+j==rows-1||i==rows-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}