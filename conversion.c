#include<stdio.h>//conversion of celsius to fahrenheit
void main()
{
  float c,f;//declaring variables with datatype
  printf("enter celsius temperature");
  scanf("%f",&c);
  f=(1.8*c)+32;//formula to covert celsius to fahrenheit
  printf("temperatute in fahrenheit is:%f",f);//print fahrenheit temperature
}
