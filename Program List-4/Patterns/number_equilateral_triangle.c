#include<stdio.h>
int main()
{
    int i, j, rows, k, m;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
    printf("\n");  
    // outer loop define the total rows and i should be less than equal to rows  
    for ( i = 1; i <= rows; i++)  
    {  
        // inner loop define j should be less than equal to rows- i  
        for ( j = 1; j <= rows-i; j++)  
        {     
            printf (" ");   
        }  
        // use for loop where k is less than equal to i  
        for ( k = 1; k <= i; k++)  
        {  
            printf ("%d", k); // print the number  
        }  
        for (m = i-1; m >=1; m--)  
        {  
            printf("%d", m); // print the number  
        }  
        printf ("\n");  
    }
    return 0; 
}

/*

output: if rows=5
    1
   121
  12321
 1234321
123454321

*/