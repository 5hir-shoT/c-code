#include <stdio.h>

// Structure to represent a company
struct company 
{
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main() 
{
    struct company c;

    // Read details of the company
    printf("Enter the name of the company: ");
    scanf("%s", c.name);
    printf("Enter the address of the company: ");
    scanf("%s", c.address);
    printf("Enter the phone number of the company: ");
    scanf("%s", c.phone);
    printf("Enter the number of employees in the company: ");
    scanf("%d", &c.noOfEmployee);

    // Display details of the company
    printf("\nDetails of the company:\n");
    printf("Name: %s\n", c.name);
    printf("Address: %s\n", c.address);
    printf("Phone: %s\n", c.phone);
    printf("Number of Employees: %d\n", c.noOfEmployee);

    return 0;
}

/*

output:

Enter the name of the company: Microsoft
Enter the address of the company: California
Enter the phone number of the company: 123456789
Enter the number of employees in the company: 23

Details of the company:
Name: Microsoft
Address: California
Phone: 123456789
Number of Employees: 23

*/