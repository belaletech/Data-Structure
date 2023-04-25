#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the stack

int stack[MAX_SIZE];
int top = -1; // Index of the top element in the stack

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        return;
    }
    top++;
    stack[top] = value;
    printf("Pushed %d onto the stack.\n", value);
}

int pop() {
    if (top == -1) {
        printf("Stack underflow!\n");
        return -1;
    }
    int value = stack[top];
    top--;
    printf("Popped %d from the stack.\n", value);
    return value;
}

int main() {
    int choice, value;
    while (1) {
        printf("Enter 1 to push, 2 to pop, or 0 to exit: ");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                printf("Exiting...\n");
                return 0;
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
        printf("Stack after pop:\n");
    for (int i = pop; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
    }
    return 0;
}
