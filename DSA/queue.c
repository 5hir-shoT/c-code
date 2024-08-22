#include <stdio.h>

#define MAX 5
int queue[MAX], front = -1, rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = x;
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return -1;
    }
    return queue[front++];
}

int main() {
    int choice, value;
    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                printf("Dequeued: %d\n", dequeue());
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

/*  1. Enqueue
    2. Dequeue
    3. Exit
    Enter choice: 1
    Enter value to enqueue: 1

    1. Enqueue
    2. Dequeue
    3. Exit
    Enter choice: 1
    Enter value to enqueue: 2

    1. Enqueue
    2. Dequeue
    3. Exit
    Enter choice: 2
    Dequeued: 1

    1. Enqueue
    2. Dequeue
    3. Exit
    Enter choice: 2
    Dequeued: 2

    1. Enqueue
    2. Dequeue
    3. Exit
    Enter choice: 2
    Queue Underflow
    Dequeued: -1

    1. Enqueue
    2. Dequeue
    3. Exit
    Enter choice: 1
    Enter value to enqueue: 1

    1. Enqueue
    2. Dequeue
    3. Exit
    Enter choice: 1
    Enter value to enqueue: 2

    1. Enqueue
    2. Dequeue
    3. Exit
    Enter choice: 1
    Enter value to enqueue: 3

    1. Enqueue
    2. Dequeue
    3. Exit
    Enter choice: 1
    Enter value to enqueue: 4
    Queue Overflow
*/