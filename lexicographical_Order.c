//Program to Sort Strings in the Dictionary(lexicographical) Order
#include<stdio.h>
#include<string.h>
#define SIZE 5
void dictionary(char **ptr)	//sorting using bubble sort
{
	short i,j;	
	char *temp;	
	for(i=0;i<SIZE;i++)		 
	{
		for(j=0;j<SIZE-i-1;j++)	
		{
			if((strcmp(ptr[j],ptr[j+1])>0))	
			{
				temp=ptr[j];		
				ptr[j]=ptr[j+1];	
				ptr[j+1]=temp;		
			}
		}
	}
	for(i=0;i<SIZE;i++)	 //print the string
	{
		printf("%s\n",ptr[i]);
	}
}
int main()
{
	char i=0,*ptr[SIZE],arr[SIZE][10];	
	printf("Enter the SIZE string\n");
	
	for(i=0;i<SIZE;i++)
	{
		gets(arr[i]);		
		ptr[i]=arr[i];		
	}
	ptr[0]=arr[0];		//ptr re-initialise to zero
	dictionary(ptr);	//function calling 	
}

