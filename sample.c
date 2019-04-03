#include<stdio.h>

static int i=10;
void pri(int i)
{
	printf("%d",i);
	i=20;
}
void main()
{
	pri(i);
	printf("%d",i);
}
