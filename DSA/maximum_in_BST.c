#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insertNode(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;
}


int findMax(struct Node* root) {
    struct Node* current = root;
    while (current && current->right != NULL) {
        current = current->right;
    }
    return current->data;
}

int main() {
    struct Node* root = NULL;
    int n, data;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the node values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insertNode(root, data);
    }

    printf("The maximum value in the BST is: %d\n", findMax(root));

    return 0;
}

/*  
    Output:
    Enter the number of nodes: 5
    Enter the node values:
    20 10 30 5 15
    The maximum value in the BST is: 30
*/
