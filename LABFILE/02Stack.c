#include <stdio.h>

// Define the stack data structure
struct stack {
  int data;
  struct stack *next;
};

// Function to create a new stack node
struct stack *createNode(int data) {
  struct stack *newNode = (struct stack *)malloc(sizeof(struct stack));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

// Function to push an element onto the stack
void push(struct stack **top, int data) {
  struct stack *newNode = createNode(data);
  newNode->next = *top;
  *top = newNode;
}

// Function to pop an element from the stack
int pop(struct stack **top) {
  if (*top == NULL) {
    printf("Stack is empty\n");
    return -1;
  }

  int data = (*top)->data;
  struct stack *temp = *top;
  *top = (*top)->next;
  free(temp);
  return data;
}

// Function to print the stack elements
void printStack(struct stack *top) {
  while (top != NULL) {
    printf("%d ", top->data);
    top = top->next;
  }
  printf("\n");
}
