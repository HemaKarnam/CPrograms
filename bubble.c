#include<stdio.h>
void main()
{
  int a[100],n,i,j,temp;//declaring variables
  printf("enter the number of elements");
  scanf("%d",&n);//entering no of elements
  printf("enter the elements");
  for(i=0;i<n;i++)//to enter the elements
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<(n-1);i++)
  {
    for(j=0;j<(n-i-1);j++)//n-i-1 because it goes overboard if n-1
    {
      if(a[j]>a[j+1])//for swaping the elements
      {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
    }
  }
  printf("sorted list in ascending order:");//to display the ascending order
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}
