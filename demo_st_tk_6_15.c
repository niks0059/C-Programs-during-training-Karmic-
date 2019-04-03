#include<stdio.h>
#define SIZE 50
#define SZ 5
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
											//without & not assigning properly.
		}*ptr1++;
	}
	
	for(i=0;i!=j;i++)
	{
		printf("%s\n",ptr[i]);				//printing indexes of array of ptr's. 
	}	
}
	



int main()
{
	char *ptr[SZ],str[SIZE],deli,*ptr1='\0';
	
	printf("please Enter the string\n");
	fgets(str,SIZE,stdin);
	
	fflush(stdin);
	printf("please Enter the delimitor\n");
	scanf("%c",&deli);
	
	ptr1=str;						//assign the base address of array to ptr.
	
	ptr[0]=str;
	str_tok_Fun(ptr,ptr1,deli);
	
	*ptr1='\0';
	str_tok_Fun(ptr,ptr1,deli);
	
	*ptr1='\0';
	str_tok_Fun(ptr,ptr1,deli);
	
	*ptr1='\0';
	str_tok_Fun(ptr,ptr1,deli);
	
	
		*ptr1='\0';
	str_tok_Fun(ptr,ptr1,deli);
	
	
	return 0;
}

