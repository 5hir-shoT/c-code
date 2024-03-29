#include<stdio.h>
int main()
{
    int i, j, rows, k;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows); // take a number  
    printf("\n");  
    for ( i =rows; i >= 1; i--)  
    {  
          
        for ( j = 1; j <= rows; j++)  
        {  
            if( j <= i)  
            printf ("*");   
            else  
            printf(" ");  
        }  
        for (j = rows; j >= 1; j--)  
        {  
            if(j <= i)  
            printf ("*");  
            else  
            printf(" ");  
        }  
        printf ("\n");  
    }  
}

/*

output: if rows=5

**********
****  ****
***    ***
**      **
*        *

*/