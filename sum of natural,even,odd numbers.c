/*************************************************************************
the sum of first n natural numbers is n*(n+1)/2

the sum of first n even natural numbers is n*(n+1)

the sum of first n odd natural numbers is n*n
***************************************************************************/
#include<stdio.h>
void main()
{
	int n ;
	
	printf("enter the n value - ");
	scanf("%d",&n);
	
	printf("the sum of first %d natural numbers is %d \n",n,n*(n+1)/2);
	
	printf("the sum of first %d even natural numbers is %d\n",n,n*(n+1));
	
	printf("the sum of first %d odd natural numbers is %d ",n,n*n);	
}
