#include <stdio.h>
#include <string.h>

// Define a union with integer, string, and float members
union Data 
{
    int integer;
    char string[20];
    float floating_point;
};

int main() 
{
    union Data data;

    // Using integer member
    data.integer = 10;
    printf("Integer value: %d\n", data.integer);

    // Using string member
    strcpy(data.string, "Hello");
    printf("String value: %s\n", data.string);

    // Using floating_point member
    data.floating_point = 3.14;
    printf("Float value: %.2f\n", data.floating_point);

    return 0;
}

/*

output:

Integer value: 10
String value: Hello
Float value: 3.14

*/