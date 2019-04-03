//program to reverse a string using gpointers 
#include<stdio.h>
#define SIZE 20

int main()
{
	int length=0,i,j;
	char string[SIZE],string1[SIZE],*pointer,*pointer1,temp;
	
	printf("enter the first string\n");
	scanf("%s",string);

	pointer=string;
	pointer1=string;

	
	while(*pointer!='\0')
	{
		pointer++;
		length++;	
	}
	printf("length=%d\n",length);
	
	while(*pointer!='\0')
	{	
		for(i=length-1,j=0;i>=0,j<length-1;i--,j++)
		{
			pointer1[j]=pointer[i];
			pointer--;
			pointer1++;
		}
	*pointer++;
	}



	printf("%s\n",pointer1);
}
