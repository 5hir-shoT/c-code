#include<stdio.h>
int main()
{
   int i, j, rows, k;
   int ch=64;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows); // take a number  
    printf("\n");  
    for ( i = rows; i >= 1; i--)  
    {  
          
        for ( j = 1; j <= rows; j++)  
        {  
            if( j <= i)  
            printf ("%c",(char)j+ch);   
            else  
            printf(" ");  
        }  
        for (j = rows-1; j >= 1; j--)  
        {  
            if(j <= i)  
            printf ("%c",(char)j+ch);  
            else  
            printf(" ");  
        }  
        printf ("\n");  
    }
    return 0;   
}  


/*

output: if rows=7

ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A



*/