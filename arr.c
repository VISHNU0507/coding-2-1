#include<stdio.h>
int main()
{
  int arr[3];
  int i;
  for(i=0;i<3;i++)
  {
    printf("enter array elements:");
    scanf("%d",&arr[i]);
  }
  
  for(i=0;i<3;i++)
  {
    printf("%d\n",arr[i]);
  }
return 0;
}