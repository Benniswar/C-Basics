#include<stdio.h>
void main()
{
	int n,N;
	printf("enter a number (from 1-26): ");
	scanf("%d",&n);
	printf("\nenter a number (from 1-26): ");
	scanf("%d",&N);
	n=n+96;
	N=N+64;
	printf("corresponding alphabet %d is %c",n,n);
	printf("\ncorresponding alphabet %d is %c",N,N);
 } 
