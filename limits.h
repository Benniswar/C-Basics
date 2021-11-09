/*********************************************************************************
data types of short int,int,long int and long long int :-


                                           lower limit        upper limit
SHORT INT     - SIGNED   - %hd and %hi   - SHRT_MIN            SHRT_MAX
                UNSIGNED - %hu           -   0                 USHRT_MAX
                
INT           - SIGNED   - %d and %i     - INT_MIN             INT_MAX
                UNSIGNED - %u            -   0                 UINT_MAX
                
LONG INT      - SIGNED   - %ld and %li   - LONG_MIN            LONG_MAX
                UNSIGNED - %lu           -   0                 ULONG_MAX
                
LONG LONG INT - SIGNED   - %lld and %lli - LONG_LONG_MIN       LONG_LONG_MAX
                UNSIGNED - %llu          -   0                 ULONG_LONG_MAX

************************************************************************************/

#include<stdio.h>
#include<limits.h>
void main()
{
	
	
	printf("the short int: \n signed : %hi to %hd \n",SHRT_MIN,SHRT_MAX);
	printf(" signed : %hu to %hu \n",0,USHRT_MAX);
	
	printf("the int : \n signed : %d to %i",INT_MIN,INT_MAX);
	printf("\n unsigned : %u to %u \n",0,UINT_MAX);
	
	printf("\nthe long int : \n signed : %ld to %li \n",LONG_MIN,LONG_MAX);
	printf(" unsigned : %lu to %lu \n",0, ULONG_MAX);
	
	printf("the long long int : \n signed : %lld to %lli",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("\n unsigned : %llu to %llu", 0 , ULONG_LONG_MAX);

}
