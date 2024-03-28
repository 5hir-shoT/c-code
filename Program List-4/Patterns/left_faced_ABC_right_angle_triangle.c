#include<stdio.h>
int main()
{
    int i,j,rows;
    char ch;
    printf("enter the number of rows=\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}

/*

output: if rows=5

A
AB
ABC
ABCD
ABCDE

*/