#include <stdio.h>

// Structure to represent employee details
struct Employee 
{
    char name[50];
    int employeeID;
    float salary;
};

int main() 
{
    struct Employee emp;

    // Read details of the employee
    printf("Enter employee details:\n");
    fflush(stdin);
    printf("Name: ");
    scanf("%s", emp.name);
    printf("Employee ID: ");
    scanf("%d", &emp.employeeID);
    printf("Salary: ");
    scanf("%f", &emp.salary);

    // Display details of the employee
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.employeeID);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}

/*

output:

Enter employee details:
Name: Lazarus
Employee ID: 123456789
Salary: 5000

Employee Details:
Name: Lazarus
Employee ID: 123456789
Salary: 5000.00

*/