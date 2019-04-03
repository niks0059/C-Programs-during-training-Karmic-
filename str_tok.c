#include<stdio.h>
#define SIZE 50
void str_tok_Fun(char *ptr[],char arr[],char deli)
{	
	int i=0,j=0;
	while(arr[i]!='\0')
	{
		if(arr[i] == deli)
		{
			j++;
			arr[i]='\0';
			ptr[j]=&arr[i+1];
			
		}i++;
	}
	
	for(i=0;i<=j;i++)
	{
		printf("%s\n",ptr[i]);
	}	
}
int main()
{
	char i,j=0,*ptr[5],arr[SIZE],deli;
	printf("Enter The string\n");
	gets(arr);
	
	printf("Enter the delimitor\n");
	scanf("%c",&deli);
	
	ptr[0]=arr;
	str_tok_Fun(ptr,arr,deli);
	return 0;
}

