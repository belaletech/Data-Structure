#include<stdio.h>
void create();
void display();

struct Node
{
  int info;
  struct Node *next;
};

struct Node *Start=NULL;
int main()
{
  int choice;
  while (1)
  {
    printf("\n 1.Create \n");
    printf("\n 2.Display \n");
    printf("\n 3.Exit \n");
    printf("Enter your Choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    create();
      break;
      case 2:
      display();
      break;
      case 3:
      exit();
      break;
    
    default:
    printf("Wrong Choice\n");
      break;
    }
    
  }
  return 0;
  
}
void create()
{
  struct node *temp,*ptr;
  {
    /* data */
  };
  
}


