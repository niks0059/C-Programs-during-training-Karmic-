//program for strcpy function
#include<stdio.h>
#define SIZE 10
int i=0;
void string_cmp(char str1[],char *pointer1,char *pointer2) //strcpy function using pointers.
{
	int count=0;
	
	while(str1[i]!='\0')
	{
		if(*pointer1==*pointer2)
		{
			pointer1++;							//address inc.
			pointer2++;	
			count=count+((*pointer1)-(*pointer2));
		}
		i++;
	}
	if(count==0)
		printf("strings are equal\n");	
}

int string_len(char str1[])
{
	int count=0;
	for(i=0;str1[i]!='\0';i++)
	{
		count++;
	}
	return count;
}

int main()
{
	char str1[SIZE],str2[SIZE],len1,len2;
	char *pointer1,*pointer2;

	printf("enter first string\n");						//accepting a str1.
	fgets(str1, SIZE, stdin);
	
	printf("enter second string\n");						//accepting a str2.
	fflush(stdin);
	fgets(str2, SIZE, stdin);
	
	
	pointer1=str1;										//assigning first location addr to pointer's.
	pointer2=str2;
	
	len1=string_len(str1);
	len2=string_len(str2);
	
	if(len1==len2)
		string_cmp(str1,pointer1,pointer2);	
	else
		printf("strings are not equal\n");


return 0;
}
