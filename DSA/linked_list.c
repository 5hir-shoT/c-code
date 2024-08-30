#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* newnode(int item) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;
    return temp;
}

void insertlist(struct node** head, int item) {
    struct node* temp = *head;
    struct node* new_node = newnode(item);
    
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void print(struct node *ptr1) {
    while (ptr1 != NULL) {
        printf("%d -> ", ptr1->data);
        ptr1 = ptr1->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;
    int n, item;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &item);
        insertlist(&head, item);
    }

    printf("Linked List: ");
    print(head);
    
    return 0;
}


/*
    Output:
    Enter the number of nodes: 5
    Enter data for node 1: -5
    Enter data for node 2: 8
    Enter data for node 3: 9
    Enter data for node 4: 7
    Enter data for node 5: -22
    Linked List: -5 -> 8 -> 9 -> 7 -> -22 -> NULL
*/