#include<stdio.h>
#define SIZE 50
static char *ptr[5],arr[SIZE];
static char temp;
void strtokFunction(char *ptr[],char arr[],char ch)
{	
	int i,j=0;
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i] == ch)
		{
			j++;
			arr[i]='\0';
			ptr[j]=&arr[i+1];
			temp=arr[i+1];
			break;
		}
	}
	for(i=0;i<1;i++)
	{
		printf("\n-->strtokfunction(p) is printing -------%s \n",ptr[i]);
	}	
}
void strtokFun(void *pointer,char ch)
{	
	int i,j=0;
	arr[0]=(int)temp;
	
	printf("%c a[0]\n",arr[0]);
	
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i] == ch)
		{
			printf("%d\n\n",i);
			j++;
			arr[i]='\0';
			ptr[j]=&arr[i+1];
			temp=arr[i+1];
			break;
		}
	}
	
	for(i=0;i<1;i++)
	{
		printf("strfun is printing(c)---->\n%s \n",ptr[i]);
	}	
}

int main()
{
	char i,j=0,ch;
	static char *ptr[5],arr[SIZE];
	int *pointer='\0';
	
	printf("Enter The string\n");
	gets(arr);
	printf("Enter the delimitor\n");
	scanf("%c",&ch);
	ptr[0]=arr;
	strtokFunction(ptr,arr,ch);
	ptr[1]=arr;
	strtokFun(pointer,ch);
	return 0;
}

