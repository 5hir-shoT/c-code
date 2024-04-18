#include <stdio.h>
int main()
{
    int x; // variable declaration.
    printf("Enter the data=");
    scanf("%d",&x);
    printf("\nsize of the variable x is= %d", sizeof(x));  // Displaying the size of ?x? variable.
    printf("\nsize of the integer data type is= %d",sizeof(int)); //Displaying the size of integer data type.
    printf("\nsize of the character data type is= %d",sizeof(char)); //Displaying the size of character data type.
    printf("\nsize of the floating data type is= %d",sizeof(float)); //Displaying the size of floating data type.
    return 0;
}

/*

output:

Enter the data=3.0

size of the variable x is= 4
size of the integer data type is= 4
size of the character data type is= 1
size of the floating data type is= 4

*/