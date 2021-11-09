#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g;
	printf("what is the value of a?");
	scanf("%d",&a);
	printf("what is the value of b?");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("Sum of %d and %d is %d",a,b,c);
	printf("\nDifference of %d and %d is %d",a,b,d);
	printf("\nProduct of %d and %d is %d",a,b,e);
	printf("\nQuotient when %d is divided by %d is %d",a,b,f);
	printf("\nRemainder when %d is divided by %d is %d",a,b,g);
	printf("\nSum of all arithmetic operations is %d",c+d+e+f+g);
}
