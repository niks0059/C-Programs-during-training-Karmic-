#include<stdio.h>
void str_char_check(char *ptr,char ch)
{
	int count=0;
		while(*ptr!='\0')
		{
			if(*ptr==ch)
			{
				count++;
			}
			*ptr++;
		}
		if(count>0)
			printf("%c appears %d times in the string\n",ch,count);
		else
			printf("%c is not present in the string\n");
}
int main()
{
	char str[10],*ptr;
	char ch;
	

	printf("enter the string\n");
	scanf("%s",str);
	
	ptr=str;
	
	printf("enter the character you wish to check\n");
	scanf(" %c",&ch);

	str_char_check(ptr,ch);

return 0;
}
