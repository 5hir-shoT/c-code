#include <stdio.h>

// Define a structure for student details
struct Student 
{
    int rollNo;
    char name[50];
    float totalMarks;
};

int main() 
{
    // Declare a variable of type struct Student to store the student details
    struct Student student;

    // Read details of the student
    printf("Enter details of the student:\n");
    printf("Roll No: ");
    scanf("%d", &student.rollNo);
    printf("Name: ");
    scanf("%s", student.name);
    printf("Total Marks: ");
    scanf("%f", &student.totalMarks);

    // Display details of the student
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Total Marks: %.2f\n", student.totalMarks);

    return 0;
}

/*

output:

Enter details of the student:
Roll No: 35
Name: Shiro
Total Marks: 100

Student Details:
Roll No: 35
Name: Shiro
Total Marks: 100.00

*/