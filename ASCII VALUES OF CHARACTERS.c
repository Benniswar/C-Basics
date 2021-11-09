/****************************************************
initialising the character datatype :-

	char a ;

	a = 'j' ;

****************************************************/
#include<stdio.h>
void main()
{
	char c ;
	
	printf("enter any alphabet from a-z or A-Z \n");
	
	scanf("%c",&c);
	
	printf("\n");
	
	printf("the ASCII number for %c is %d",c,c);
	
}
