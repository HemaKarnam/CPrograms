#include<stdio.h>
int rev(int );//function declaration
int main()
{
 int n,rev;//declsre variables
 printf("Enter any number");
 scanf("%d", &n);
 rev = reverse(n);//use of functions
 printf("Reversed number is:%d",rev);
 return 0;
}
int reverse(int n)//function carrying out procedure
{
 int r=0;//intialize rem as 0
 for(; n>=1; n=n/10)
   r = r*10 + n%10;//to get last digit as first
 return r;
}
