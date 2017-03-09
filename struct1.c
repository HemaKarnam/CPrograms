#include<stdio.h>
#include<string.h>
struct student
{//declaring different datatypes with its variables
  int rollno;
  char name[5];
  float percentage;
};
void main()
{
  struct student student1;
  struct student student2;
  //details of student1
  student1.rollno=1;
  strcpy(student1.name,"lexi");
  student1.percentage=9.5;
  //details of student2
  student2.rollno=2;
  strcpy(student2.name,"maxi");
  student2.percentage=9.0;
  //printing the information
  printf("rollno of student1 is:%d\n",student1.rollno);
  printf("name of student1 is:%s\n",student1.name);
  printf("percentage of student1 is:%f\n",student1.percentage);
  printf("rollno of student2 is:%d\n",student2.rollno);
  printf("name of student2 is:%s\n",student2.name);
  printf("percentage of student2 is:%f\n",student2.percentage);
}
