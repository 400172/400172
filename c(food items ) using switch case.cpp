#include<stdio.h>
main()
{
	int quantity,total;
	char k;
	printf("Burger- b, Pizza- p, FrenchFries- f, sandwich- s");
	scanf("%c",&k);
	switch(k)
	{
		case'b':printf("user has selected burger");
		printf("enter the quantity");
		scanf("%d",&quantity);
		total=quantity*200;
		break;
		case'f':printf("User has selected french fries");
		printf("enter the quality");
		scanf("%d",&quantity);
		total=quantity*50;
		break;
		case'p':printf("user has selected pizza");
		printf("enter the quantity");
		scanf("%d",&quantity);
		total=quantity*500;
		break;
		case's':printf("user has selected sandwich");
		printf("enter the quantity");
		scanf("%d",&quantity);
		total=quantity*150;
		break;
		default:printf("entered food item is incorrect");
	}
	printf("enter total %d", total);
}
		
			

