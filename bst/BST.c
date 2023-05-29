#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the binary search tree
typedef struct Node {
    int key;
    struct Node* left;
    struct Node* right;
} Node;

// Function to create a new node
Node* createNode(int key) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a key into the binary search tree
Node* insert(Node* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }
    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }
    return root;
}

// Function to search for a key in the binary search tree
Node* search(Node* root, int key) {
    if (root == NULL || root->key == key) {
        return root;
    }
    if (key < root->key) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

// Function to perform inorder traversal of the binary search tree
void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->key);
        inorderTraversal(root->right);
    }
}

int main() {
    Node* root = NULL;

    // Inserting keys into the binary search tree
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Searching for a key in the binary search tree
    Node* searchResult = search(root, 40);
    if (searchResult != NULL) {
        printf("Key 40 found in the binary search tree.\n");
    } else {
        printf("Key 40 not found in the binary search tree.\n");
    }

    // Performing inorder traversal of the binary search tree
    printf("Inorder traversal of the binary search tree: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
