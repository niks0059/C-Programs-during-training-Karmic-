//main program demo to implement functions
#include<stdio.h>
#include"addition.h"
int main()
{
	int no1,no2,abc;
	
	printf("enter two numbers\n");
	scanf("%d",&no1);
	scanf("%d",&no2);
	
	abc=sum(no1,no2);
	printf("%d\n",abc);
}

