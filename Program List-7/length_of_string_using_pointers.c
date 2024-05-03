#include <stdio.h>

// Function to find the length of a string using pointers
int stringLength(char *str) 
{
    int length = 0;

    // Loop through the characters of the string until the null character is encountered
    while (*str != '\0') 
    {
        length++;
        str++; // Move to the next character
    }

    return length;
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str); // Read the input string with spaces

    // Call the stringLength function passing the string
    int length = stringLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}

/*

output:

Enter a string: My name is Shirsho
Length of the string: 18

*/