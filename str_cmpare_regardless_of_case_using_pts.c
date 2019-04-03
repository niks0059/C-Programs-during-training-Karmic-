//program for strcpy function
#include<stdio.h>
#define SIZE 10
int i=0;
void string_to_lower(char *ptr)
{
	while(*ptr!='\0')
	{
		if(*ptr>65 && *ptr<90)
		{
			if((*ptr>='A') || (*ptr<='Z'))
				*ptr=*ptr+32;
		}
	*ptr++;
	}
}

void string_cmp(char *pointer1,char *pointer2) //strcpy function using pointers.
{
	int count=0;
	while(*pointer1!='\0')
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
	scanf("%s",str1);
	//fgets(str1, SIZE, stdin);
	
	printf("enter second string\n");						//accepting a str2.
	scanf("%s",str2);
	//fflush(stdin);
	//fgets(str2, SIZE, stdin);
	
	
	pointer1=str1;										//assigning first location addr to pointer's.
	pointer2=str2;
	
	len1=string_len(str1);
	len2=string_len(str2);
	
	
	string_to_lower(pointer1);
	string_to_lower(pointer2);
	
	if(len1==len2)
		string_cmp(pointer1,pointer2);	
	else
		printf("strings are not equal\n");


return 0;
}
