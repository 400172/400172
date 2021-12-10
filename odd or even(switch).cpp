#include<stdio.h>
main()
{
	int a,k;
	printf("enter value a");
	scanf("%d", &a);
	k=a%2;
    switch(k) 

{
	case 0:printf("even number");
	break;
	case 1:printf("odd number");
	break;
	default:
}
