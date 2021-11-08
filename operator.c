#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a value");
	scanf("%d",&a);
	printf("enter b value");
	scanf("%d",&b);
	printf("%d > %d --> %d\n", a,b, a>b);
    printf("%d >= %d --> %d\n", a,b, a>=b);
	printf("%d < %d --> %d\n", a,b, a<b);
	printf("%d <= %d --> %d\n", a,b, a<=b);
	printf("%d == %d --> %d\n", a,b, a==b);
	printf("%d != %d --> %d\n", a,b, a!=b);

}
