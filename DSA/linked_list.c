/*#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

void print(struct node *ptr1)
{
    while (ptr1!=NULL)
    printf("%d",ptr→ data);
    ptr1=ptr1→ next;
}

void CreateLinkedList(void)
{
    struct node *root, *head;
    root=newnode();
    root→ data=item;
    root→ next=NULL;
}

void insertlist()
{
    while (n--!=0)
    ptr=head
    head=head → next
    ptr→ next=node5
    node5=next-node
} */


/*#include <stdio.h>
#include <stdlib.h>

// structure
struct node 
{
    int data;
    struct node *next;
};

// Function to print the linked list
void print(struct node *ptr1) 
{
    while (ptr1 != NULL) 
    {
        printf("%d -> ", ptr1->data);
        ptr1 = ptr1->next;
    }
    printf("NULL\n");
}

// Function to create a new node
struct node* newnode(int item) 
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;
    return temp;
}

// Function to create a linked list with a single node
struct node* CreateLinkedList(int item) 
{
    struct node* root = newnode(item);
    return root;
}

// Function to insert a new node at the end of the list
void insertlist(struct node** head, int item) 
{
    struct node* temp = *head;
    struct node* new_node = newnode(item);
    
    if (*head == NULL) 
    {
        *head = new_node;
        return;
    }
    
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

int main() {
    struct node* head = NULL;
    
    // Creating a linked list with the first node
    head = CreateLinkedList(10);
    
    // Inserting more nodes into the list
    insertlist(&head, 20);
    insertlist(&head, 30);
    insertlist(&head, 40);
    
    // Printing the linked list
    printf("Linked List: ");
    print(head);
    
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct node {
    int data;
    struct node *next;
};

// Function to create a new node
struct node* newnode(int item) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;
    return temp;
}

// Function to insert a new node at the end of the list
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

// Function to print the linked list
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

    // Taking the number of nodes as input
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Taking node data as input and inserting into the list
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &item);
        insertlist(&head, item);
    }

    // Printing the linked list
    printf("Linked List: ");
    print(head);
    
    return 0;
}

