#include<stdio.h>
#include<string.h>
void main()
{
 char str[10];//initializing the range of string
 int i;
 printf("enter the string");
 scanf("%s",str);
 printf("the entered string is %s",str);
 for(i=0;i<=strlen(str);i++)
 {
   if(str[i]>=65&&str[i]<=90)//ASCII value of strings is compared
   {
     str[i]=str[i]+32;//to convert upper case to lower case
   }
 }
 printf("\nthe string in lower case is %s",str);
}
