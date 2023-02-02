#include<stdio.h>
int main()
{
  int arr[1000],n,max,second_max;
  printf("Enter how many number you want to store\n");
  scanf("%d",&n);
  printf("Now enter %d number one by one\n",n);
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  max=arr[0];
  second_max=arr[1];
  for(int i=0;i<n;i++)
  {
    if(arr[i]>max)
    {
      second_max=max;
      max=arr[i];
    }
    else if(arr[i]>second_max && arr[i]!=second_max)
    {
      second_max=arr[i];
    }
  }
  printf("maximum value =%d and Second maximum value =%d",max,second_max);
}