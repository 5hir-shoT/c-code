#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    int x = floor(log10(n))+1;
    
    printf("No. of digits = %d", x);

}