#include<stdio.h>
void main()
{
  int n,x,y,sp;//declaring variables n for rows,x for stars,y for lines and sp for spaces before triangle
  printf("enter number of rows");
  scanf("%d",&n);
  for(y=1;y<=n;y++)//for printing rows
  {
    for(sp=1;sp<=(n-y);sp++)//for printing spaces before stars
    {
      printf(" ");
    }
    for(x=1;x<=y;x++)//for printing stars
    {
      printf("* ");
    }
    printf("\n");//move to next line
  }
}
