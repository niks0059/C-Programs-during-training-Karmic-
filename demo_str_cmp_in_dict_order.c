//dict. order demo code
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	
	scanf("%s",str1);
	scanf("%s",str2);
	scanf("%s",str1);
	scanf("%s",str2);
	
	
	int a=strcmp(str1,str2);
	if(a==-1)													//try error here.
	{
		printf("%s",str1);
	}
	else
		printf("%s",str2);
	
	
	
	
	a=strcmp(str1,str2);
	printf("%d\n",a);
return 0;
	
}
