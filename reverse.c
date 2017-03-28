#include<stdio.h>
void main()
{
  int n,rev=0,rem,i;//variable declaration
  printf("enter a number");
  scanf("%d",&n);
  while(n!=0)//terminates when n=0
  {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;//we get the last number as first
  }
  printf("reversed number is:%d",rev);//print reverse number
}
