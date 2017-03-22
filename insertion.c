#include<stdio.h>
void main()
{
  int n,a[100],i,j,temp;//declaring variables
  printf("enter number of elements");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);//entering elements
  }
  for(i=1;i<=n-1;i++)//giving the last number as max
  {
    j=i;
    while(j>0&&a[j]<a[j-1])//comparing with the before element
    {
      temp=a[j];//for swaping the elements
      a[j]=a[j-1];
      a[j-1]=temp;
      j--;
    }
  }
  printf("soretd elements are:");
  for(i=0;i<=n-1;i++)
  {
    printf("%d\n",a[i]);//sorted list order
  }
}
