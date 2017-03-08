#include<stdio.h>
void main()
{
  int x=0,y=1,n,p=0;//the first two values
  printf("enter a number");//number till which it needs to be continued
  scanf("%d",&n);
  printf("fibonacci series is %d, %d",x,y);//print first two numbers
  p=x+y;//add first two numbers
  while(p<=n)
  {
    printf("%d",p);
    x=y;//x is replaced by y value
    y=p;//p value occupies y
    p=x+y;//the next sequence is add of before y(i.e,,p and x )
  }
}
