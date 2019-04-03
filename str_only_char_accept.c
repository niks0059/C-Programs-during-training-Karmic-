//program to remove characters except alphabet.
#include<stdio.h>
#define SZ 20
void str_remove_char_except_alph(char *ptr1,char *ptr2)
{
	while(*ptr1!='\0')
	{
		if((*ptr1>='a' && *ptr1<='z') || (*ptr1>='A' && *ptr1<='Z'))
		{
			*ptr2=*ptr1;
			*ptr2++;
		}
		*ptr1++;
	}
	
}
int main()
{
	char str1[SZ],str2[SZ],*ptr1,*ptr2;
	
	printf("enter the string\n");
	scanf("%s",str1);
	
	
	ptr1=str1;
	ptr2=str2;
	
	str_remove_char_except_alph(ptr1,ptr2);
	
	printf("%s",ptr2);
	
}
