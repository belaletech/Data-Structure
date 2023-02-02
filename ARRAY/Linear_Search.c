#include<stdio.h>
int main()
{
  int roll_no[10]={10,20,30,40,50,60,70,80,90,100};
  int r,m;
  printf("Roll Number is given below\n");
  for(int i=0;i<=9;i++)
  printf("%d ",roll_no[i]);
  printf("\nEnter your roll number to search\n");
  scanf("%d",&r);
  for(int j=1;j<=9;j++)
  {
    if(r==roll_no[j])
    {
      printf("Roll number is found at position =%d",j+1);
      m=1;
    }
  }
  if(m==0)
  printf("Not found");
}