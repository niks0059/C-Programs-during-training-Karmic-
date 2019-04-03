#include<stdio.h>

int main()
{
	int num[4],no=0,temp=0,i;
	
	printf("enter a number");
	for(i=0;i<4;i++)
		scanf("%d",&num[i]);
		
	for(i=0;i<4;i)
	{
		temp=temp+num[i];
		no=temp;
		
	}
	printf("%d\n",no);
}
