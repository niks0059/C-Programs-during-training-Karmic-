#include<stdio.h>
void string_to_lower(char *ptr)
{
	while(*ptr!='\0')
	{
	if((*ptr>='A') || (*ptr<='Z'))
		{
			*ptr=*ptr+32;
		}
			*ptr++;
	}
}
void string_to_upper(char *ptr)
{
		while(*ptr!='\0')
		{
		if((*ptr>='a') || (*ptr<='z'))
		{
			*ptr=*ptr-32;
		}
			*ptr++;
		}
}
int main()
{
	char str[10],*ptr;
	

	printf("enter the string\n");
	scanf("%s",str);
	
	ptr=str;
	
	string_to_upper(ptr);
	printf("string after to upper-case is %s\n",str);
	
	string_to_lower(ptr);	
	printf("string after to lower-case is %s",str);
	
return 0;
}
