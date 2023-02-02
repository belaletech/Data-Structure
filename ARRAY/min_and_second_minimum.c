#include<stdio.h>
int main()
{
  int arr[1000],n,minimum,second_minimum;
  printf("Enter how many number you want to store\n");
  scanf("%d",&n);
  printf("Enter %d number one by one\n",n);
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  minimum=arr[0];
  second_minimum=arr[1];
  for(int i=0;i<n;i++)
  {
    if(arr[i]<minimum)
    {
      second_minimum=minimum;
      minimum=arr[i];
    }
    else if(arr[i]<second_minimum && arr[i]!=minimum)
    {
      second_minimum=arr[i];
    }
  }
  printf("minimum value =%d and Second minum value =%d",minimum,second_minimum);
}