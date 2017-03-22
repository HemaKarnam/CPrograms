#include<stdio.h>
void main()
{
  int a[50],n,i,j,pos,temp;//variable declaration
  printf("enter number of elements");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);//elements of array
  }
  for(i=0;i<(n-1);i++)
  {
    pos=i;//taking i value in pos
    for(j=i+1;j<n;j++)
    {
      if(a[pos]>a[j])//if position element(i) is greater than last element
      {
        pos=j;
      }
    }
    if(pos!=i)
      {
        temp=a[i];//swaping the element
        a[i]=a[pos];
        a[pos]=temp;
      }
    }
  printf("elements in sorted order are:");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);//sorted order
  }
}
