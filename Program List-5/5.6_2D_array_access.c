#include<stdio.h>
int main()
{
    int arr[20][30];
    int row,column,i,j;
    printf("enter the row of 2D array=");
    scanf("%d",&row);
    printf("\nenter the column of 2D array=");
    scanf("%d",&column);
    printf("\n enter the element of array:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%2d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;   
}

/*

output:

enter the row of 2D array=3

enter the column of 2D array=3

 enter the element of array:
1
0
0
0
1
0
0
0
1
 1 0 0
 0 1 0
 0 0 1



*/