#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character=");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("\nEntered character is Digit");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("\n Entered character is a capital letter");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\nEntered character is a small letter");
    }
    else
    {
        printf("\nEntered character is a special character");
    }
    return 0;
}

/*

output:

Enter any character=1

Entered character is Digit

*****************************************

Enter any character=q

Entered character is a small letter

*****************************************

Enter any character=Q

Entered character is a capital letter

*****************************************

Enter any character=/

Entered character is a special character

*/