#include <stdio.h>

// Structure to represent distance
struct Distance 
{
    int feet;
    int inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) 
{
    struct Distance result;

    // Add inches
    result.inches = d1.inches + d2.inches;

    // Convert extra inches to feet
    result.feet = d1.feet + d2.feet + result.inches / 12;
    result.inches %= 12;

    return result;
}

int main() 
{
    struct Distance d1, d2, sum;

    // Read first distance
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);

    // Read second distance
    printf("\nEnter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);

    // Add the distances
    sum = addDistances(d1, d2);

    // Display the sum
    printf("\nSum of distances: %d feet %d inches\n", sum.feet, sum.inches);

    return 0;
}

/*

output:

Enter first distance:
Feet: 6
Inches: 4

Enter second distance:
Feet: 5
Inches: 7

Sum of distances: 11 feet 11 inches

*/