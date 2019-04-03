#include<stdio.h>
int str_chr_scan(char *ptr,char ch)
{
	char *ptr1;
		while(*ptr!='\0')
		{
			if(*ptr==ch)
			{
				ptr1=ptr;
				break;
			}
			*ptr++;
		}
		printf("%s\n",ptr1);
}															
int main()
{
	char str[10];
	char *ptr,ch;
	

	printf("enter the string\n");
	scanf("%s",str);
	
	ptr=str;
	
	printf("enter the character you wish to check\n");
	scanf(" %c",&ch);

	str_chr_scan(ptr,ch);

return 0;
}
