#include<stdio.h>
#include "addition.h"

int main()
{
	int c,no1,no2;
	printf("enter first number\n");
	scanf("%d",&no1);
	
	printf("enter second number\n");
	scanf("%d",&no2);
	
	c=addition(no1,no2);
	
	printf("%d\n",c);
}
