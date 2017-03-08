#include<stdio.h>
void main()
{
  int n,i,fact=1;//declaring the datatype with its variables
  printf("enter a number");//number for which factorial is needed
  scanf("%d",&n);//for storing the number given
  for(i=1;i<=n;i++)//incrementing from 1 to given no
  {
    fact=fact*i;
  }
  printf("factorial is %d",fact);//final factorial
}
