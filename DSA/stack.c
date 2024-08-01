#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5 
void push(int stack[], int *top, int element);
int pop(int stack[], int *top);
void printStack(int stack[], int top);
int main() {
    int stack[MAX_SIZE];
    int top = -1;
    int choice, element;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Push element\n");
        printf("2. Pop element\n");
        printf("3. Print stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &element);
                push(stack, &top, element);
                break;
            case 2:
                element = pop(stack, &top);
                if (element != -1) {
                    printf("Popped element: %d\n", element);
                }
                break;
            case 3:
                printStack(stack, top);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
void push(int stack[], int *top, int element) {
    if (*top >= MAX_SIZE - 1) {
        printf("Stack overflow, cannot push element.\n");
        return;
    }
    stack[++(*top)] = element;
}
int pop(int stack[], int *top) {
    if (*top == -1) {
        printf("Stack underflow, cannot pop element.\n");
        return -1;
    }
    return stack[(*top)--];
}
void printStack(int stack[], int top) {
	int i;
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements:\n");
    for (i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

/*

Menu:
1. Push element
2. Pop element
3. Print stack
4. Exit
Enter your choice: 1
Enter the element to push: 6

Menu:
1. Push element
2. Pop element
3. Print stack
4. Exit
Enter your choice: 3
Stack elements:
6 

Menu:
1. Push element
2. Pop element
3. Print stack
4. Exit
Enter your choice: 1
Enter the element to push: 1

Menu:
1. Push element
2. Pop element
3. Print stack
4. Exit
Enter your choice: 3
Stack elements:
6 1 

Menu:
1. Push element
2. Pop element
3. Print stack
4. Exit
Enter your choice: 1
Enter the element to push: 9

Menu:
1. Push element
2. Pop element
3. Print stack
4. Exit
Enter your choice: 3
Stack elements:
6 1 9

Menu:
1. Push element
2. Pop element
3. Print stack
4. Exit
Enter your choice: 2
Popped element: 9

Menu:
1. Push element
2. Pop element
3. Print stack
4. Exit
Enter your choice: 3
Stack elements:
6 1

Menu:
1. Push element
2. Pop element
3. Print stack
4. Exit
Enter your choice: 2
Popped element: 1

Menu:
1. Push element
2. Pop element
3. Print stack
4. Exit
Enter your choice: 3
Stack elements:
6

Menu:
1. Push element
2. Pop element
3. Print stack
4. Exit
Enter your choice: 1
Enter the element to push: 9

Menu:
1. Push element
2. Pop element
3. Print stack
4. Exit
Enter your choice: 3
Stack elements:
6 9

*/