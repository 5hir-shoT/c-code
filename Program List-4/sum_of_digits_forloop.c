#include <stdio.h>

// Main body of the program
int main()
{
    // Declare the variables 
    int number, sum = 0;

    printf("Enter the number ");
    scanf("%d", &number);

    printf("The number is = %d\n", number);

    // Loop using a while statement 
    // The loop will run till the number is not equal to 0
    while (number != 0)
    {
        // Sum plus the number divided by 10 to skip a place
        sum = sum + number % 10;

        // Number is divided by 10
        number = number / 10;
    }

    // Print the sum of the number
    printf("Sum: %d\n", sum);

    return 0;
}