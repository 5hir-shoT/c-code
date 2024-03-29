#include<stdio.h>
int main()
{
    int num, i, j, m = 1; // declare local variables  
    printf (" Enter the number to define the columns: \n");  
    scanf ("%d", & num);  
    for (i = 1; i <= num; i=i+2)
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf( "%d",j);  
        }  
        printf("\n");  
    }  
    for (i = num-2; i >= 1; i=i-2)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf ("%d",j);  
        }  
        printf("\n");  
    }  
    return 0;
}

/*

output: if rows=5

1
123
12345
123
1

*/