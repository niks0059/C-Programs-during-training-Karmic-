#include<stdio.h>
#define sz 10
int main()
{
	char str[sz],*pointer;
	int length=0;
	printf("enter the str\n");
	scanf("%s",str);
	
	while(*pointer!='\0')
	{
		pointer++;
		length++;	
	}
	printf("length=%d",length);
	
}

