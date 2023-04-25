#include<stdio.h>
int top,stack;
int main()
{
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
void pop()
{
  if(top==-1)
  {
    printf("Underflow. Stack is empty");
  }
  else
  {
    printf("Delete: %d",stack[top])
    top--;
  }
}