#include<stdio.h>
#define SIZE 20
#define SZ 5
static char *ptr1,*ptr[SZ],str[SIZE],*temp;
void str_tok_Fun(char *ptr[],char *ptr1,char deli)
{	
	int i=0,j=0;
	while(*ptr1!='\0')
	{
		if(*ptr1 == deli)
		{
			j++;
			*ptr1='\0';
			ptr[j]=&ptr1[i+1];				//klpsh hlp. place '&' here<-------
			ptr1=ptr[j];
			break;								//without & not assigning properly.
		}*ptr1++;
	}
	
	for(i=0;i!=1;i++)
	{
		printf("%s\n",ptr[i]);				//printing indexes of array of ptr's. 
	}	
}
void str_tok_fun2(char *temp,char deli)
{	
	int i=0,j=0;
	while(*ptr1!='\0')
	{
		if(*ptr1 == deli)
		{
			j++;
			*ptr1='\0';
			ptr[j]=&ptr1[i+1];				//klpsh hlp. place '&' here<-------
			ptr1=ptr[j];
			break;								//without & not assigning properly.
		}*ptr1++;
	}
	printf("%s",*ptr1);
	for(i=0;i!=5;i++)
	{
		printf("%s\n",ptr1);				//printing indexes of array of ptr's. 
	}	
}





int main()
{
	char deli;

	
	printf("please Enter the string\n");
	fgets(str,SIZE,stdin);
	
	fflush(stdin);
	printf("please Enter the delimitor\n");
	scanf("%c",&deli);
	
	ptr1=str;						//assign the base address of array to ptr.
	
	ptr[0]=str;
	str_tok_Fun(ptr,ptr1,deli);
	str_tok_fun2(temp,deli);
	return 0;
}

