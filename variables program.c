#include<stdio.h>
void main()
{
 // variable declaration
 int age;
 float CGPA;
 char initial;
  
  // initialization
  printf("what is the age of student? ");
  scanf("%d",&age);
  printf("what is the CGPA of student ?");
  scanf("%f",&CGPA);
  printf("what is the initial of student?");
  scanf("%c\n",&initial);
  
  // output
  
  printf("the age of student is %d\n", age);
  printf("the CGPA 	of student is %f\n", CGPA);
  printf("the initial of student is %c\n", initial);
  
}
