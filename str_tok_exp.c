#include<stdio.h>
#define SIZE 50
#define SZ 5
static char *ptr[SZ],*ptr1;
static char str_tok_Fun(char *ptr[],char deli)
{	
	int i=0,j=0;
	while(*ptr1!='\0')
	{
		if(*ptr1 == deli)
		{
			j++;
			*ptr1='\0';
			ptr[j]=&ptr1[i+1];				//klpsh hlp. place '&' here<-------
			*ptr1++;
			return (char)*ptr1;
			break;								//without & not assigning properly.
		}*ptr1++;
	}
	
	for(i=0;i!=j;i++)
	{
		printf("%s\n",ptr[i]);				//printing indexes of array of ptr's. 
	}	
}
static char str_tok_Fun1(char *ptr2,char deli)
{
	int j=0,i=0;
		ptr1--;
		return (char)*ptr1;
	while(*ptr1!='\0')
	{
		//return (int)*ptr;
		break;
		if(*ptr1 == deli)
		{
			printf("entering in fun1 with deli found\n");
			j++;
			*ptr1='\0';
			ptr[j]=&ptr1[i+1];			//without & not assigning properly.
			*ptr1++;
			break;								
		}*ptr1++;
	}
	
	for(i=0;i!=j;i++)
	{
		printf("%s\n",ptr[i]);				//printing indexes of array of ptr's. 
	}	
	
}
int main()
{
	
	char str[SIZE],deli;
	char *ptr2='\0';
	
	printf("please Enter the string\n");
	fgets(str,SIZE,stdin);
	
	fflush(stdin);
	printf("please Enter the delimitor\n");
	scanf("%c",&deli);
	
	ptr1=str;						//assign the base address of array to ptr.
	
	ptr[0]=str;
	char d = str_tok_Fun(ptr,ptr1,deli);
	char f = str_tok_Fun1(ptr2,deli);
	
	printf("fun=%p  and fun1=%p\n",d,f);
	return 0;
}

