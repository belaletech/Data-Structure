#include<stdio.h>
int main()
{
  void push(int value)
  {
    if(top==SIZE-1)
    printf("Overflow. Stack is full");
  }
  else
  {
    top++;
    stack[top]=value;
    printf("Insertion was sucessful");
  }
}