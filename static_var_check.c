#include<stdio.h>
fun()
{
	static int b;
	b++;
	printf("%d\n",b);
}
int main()
{
	fun();
	fun();
	fun();
	
}
