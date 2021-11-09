#include<stdio.h>
void main()
{
	int P,T;
    float R,S_I;
    printf("P = ");
    scanf("%d",&P);
    printf("T = ");
    scanf("%d",&T);
    printf("R = ");
    scanf("%f",&R);
    S_I = P*T*R/100;
    printf("\nS_I = %d * %d * %f /100 = %.0f",P,T,R,S_I);
    
    
    
}
