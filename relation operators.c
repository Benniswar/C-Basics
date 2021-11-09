/*************************************************************************************************************************
RELATIONAL OPERATORS :-

>  - GREATER THAN
>= - GREATER THAN OR EQUAL TO
<  - LESS THAN
<= - LESS THAN OR EQUAL TO
== - EQUAL TO 
!= - NOT EQUAL TO

LOGICAL OPERATORS :-
                SYNTAX                                                              TRUE  O/P            FALSE O/P
                
&& -  (RELATIONAL OPERATOR EXPRESSION) && (RELATIONAL OPERATOR EXPRESSION)              1                     0

|| -  (RELATIONAL OPERATOR EXPRESSION) && (RELATIONAL OPERATOR EXPRESSION)              1                     0

***************************************************************************************************************************/
#include<stdio.h>
void main()
{
	int  a,b;
	
	printf("enter the values of a and b");
	scanf("%d %d",&a,&b);
	
	printf("%d > %d ----- %d\n",a,b,a>b);
	
	printf("%d >= %d ----- %d\n",a,b,a>=b);
	
	printf("%d < %d ----- %d\n",a,b,a<b);
	
	printf("%d <= %d ----- %d\n",a,b,a<=b);
	
	printf("%d == %d ----- %d\n",a,b,a==b);
	
	printf("%d != %d ----- %d",a,b,a!=b);
	
}
