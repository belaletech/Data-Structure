#include<stdio.h>
int main()
{
  int arr[100],num,x,y,temp;
  printf("Please Enter the number of element you want in the array:");
  scanf("%d",&num);
  printf("Please Enter the value of Elements\n");
  for(x=0;x<num;x++)
  scanf("%d",&arr[x]);
  {
  for(x=0;x<num-1;x++)
  {
    for(y=0;y<num-x-1;y++)
    {
        if(arr[y]>arr[y+1])
      {
    
      temp=arr[y];
      arr[y]=arr[y+1];
      arr[y+1]=temp;
    
     }
  }
}
printf("Array after implementing bubble sort:");
for(x=0;x<num;x++)
{
  printf("%d  ",arr[x]);
}
return 0;
}

}