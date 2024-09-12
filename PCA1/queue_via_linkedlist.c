#include <stdio.h>
#include <stdlib.h>

int memoryLimit = 3; 

struct Node 
{
    int data;
    struct Node* next;
};

struct Node* createNode(int data) 
{
    if (memoryLimit-- == 0) 
    {  
        printf("Queue Overflow\n");
        return NULL;
    }
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) 
    {
        printf("Queue Overflow\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int isQueueEmpty(struct Node* front) 
{
    return front == NULL;
}

void enqueue(struct Node** front, struct Node** rear, int data) 
{
    struct Node* newNode = createNode(data);
    if (!newNode) return;  
    
    if (*rear == NULL) 
    {
        *front = *rear = newNode;
        return;
    }
    
    (*rear)->next = newNode;
    *rear = newNode;
}


int dequeue(struct Node** front, struct Node** rear) 
{
    if (isQueueEmpty(*front)) 
    {
        printf("Queue Underflow\n");
        return -1;
    }
    
    struct Node* temp = *front;
    int data = temp->data;
    *front = (*front)->next;
    
    if (*front == NULL)
        *rear = NULL;
    
    free(temp);
    return data;
}

void display(struct Node* front) 
{
    if (isQueueEmpty(front)) 
    {
        printf("Queue is empty\n");
        return;
    }
    
    struct Node* temp = front;
    while (temp) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() 
{
    struct Node* front = NULL;
    struct Node* rear = NULL;
    int choice, value;

    while (1) 
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&front, &rear, value);
                break;
            case 2:
                value = dequeue(&front, &rear);
                if (value != -1)
                    printf("Dequeued value: %d\n", value);
                break;
            case 3:
                display(front);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}