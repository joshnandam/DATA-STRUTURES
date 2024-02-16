#include<stdio.h>
int main()
{
  int arr[100],n;
  printf("enter the sixe of the array:");
  scanf("%d",&n);
  printf("enter the array:");
  for(int i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  }
  printf("the reversed array:");
  for(int i=n-1;i>=0;i--)
  {
  printf("%d",arr[i]);
  }
}
