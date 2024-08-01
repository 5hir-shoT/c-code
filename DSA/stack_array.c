#include <stdio.h>
#define MAX_SIZE 100 
void insertElement(int arr[], int *n, int element, int index);
void deleteElement(int arr[], int *n, int index);
void printArray(int arr[], int n);
int main() {
    int arr[MAX_SIZE];
    int n, choice, element, index,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Print array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the index to insert the element at: ");
                scanf("%d", &index);
                insertElement(arr, &n, element, index);
                break;
            case 2:
                printf("Enter the index of the element to delete: ");
                scanf("%d", &index);
                deleteElement(arr, &n, index);
                break;
            case 3:
                printArray(arr, n);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
void insertElement(int arr[], int *n, int element, int index) {
	int i;
    if (*n >= MAX_SIZE) {
        printf("Array is full, cannot insert element.\n");
        return;
    }
    if (index < 0 || index > *n) {
        printf("Invalid index.\n");
        return;
    }
    for (i = *n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    (*n)++;
}
void deleteElement(int arr[], int *n, int index) {
	int i;
    if (index < 0 || index >= *n) {
        printf("Invalid index.\n");
        return;
    }
    for ( i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}
void printArray(int arr[], int n) {
	int i;
    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
Enter the number of elements in the array: 3
Enter the elements of the array:
1
2
3

Menu:
1. Insert element
2. Delete element
3. Print array
4. Exit
Enter your choice: 3
Array elements:
1 2 3 

Menu:
1. Insert element
2. Delete element
3. Print array
4. Exit
Enter your choice: 1
Enter the element to insert: 4
Enter the index to insert the element at: 3

Menu:
1. Insert element
2. Delete element
3. Print array
4. Exit
Enter your choice: 3
Array elements:
1 2 3 4 

Menu:
1. Insert element
2. Delete element
3. Print array
4. Exit
Enter your choice: 2
Enter the index of the element to delete: 0

Menu:
1. Insert element
2. Delete element
3. Print array
4. Exit
Enter your choice: 3
Array elements:
2 3 4

Menu:
1. Insert element
2. Delete element
3. Print array
4. Exit
Enter your choice: 4
*/