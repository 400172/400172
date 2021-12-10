
#include<stdio.h>
main()
{
	int l,b,a,p;
	printf("enter the value of length of a rectangle: ");
	scanf("%d", &l);
	printf("enter the value of breadth of a rectangle: ");
	scanf("%d", &b);
	p=2*(l+b);
	a=l*b;
	printf("the perimeter of rectangle is: %d", p);
	printf("\n the area of a rectangle is: %d", a);
}
