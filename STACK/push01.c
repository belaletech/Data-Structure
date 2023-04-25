#include <stdio.h>
#define MAX_SIZE 20

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack[top] = value;
}

int main() {
    int n, value;
    printf("Enter the number of values you want to push: ");
    scanf("%d", &n);
    printf("Enter %d values to push:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        push(value);
    }
    printf("Stack after pushing:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
    return 0;
}
