#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[10];
    float totalMarks = 0;

    // Input details for 10 students
    for (int i = 0; i < 10; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);

        totalMarks += students[i].marks;
    }

    float averageMarks = totalMarks / 10;

    // Print student records and average marks
    printf("\nStudent Records:\n");
    printf("--------------------------------------------------\n");
    printf("Name\t\tRoll Number\tMarks\n");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\t\t%d\t\t%.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    printf("--------------------------------------------------\n");
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
