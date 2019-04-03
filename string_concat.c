//program for str concat function
#include<stdio.h>
#define SIZE 20
void string_concat(char *pointer1,char *pointer2) //strcpy function using pointers.
{
	while(*pointer1!='\0')
		*pointer1++;						//logic to concat str1 with str2.
	while(*pointer2!='\0')
	{
		*pointer1=*pointer2;
		pointer1++;
		pointer2++;
	}
	
}
int main()
{
	char string1[SIZE],string2[SIZE];
	static char *pointer1,*pointer2;

	printf("enter first string\n");						//accepting a 1st str.
	scanf("%s",string1);
	//fgets(str1, SIZE, stdin); 
	
	printf("enter second string\n");						//accepting a 2nd str 
	scanf("%s",string2);
	//fflush(stdin);
	//fgets(str2, SIZE, stdin); 
	
	pointer1=string1;										//assigning first location addr to pointer's.
	pointer2=string2;
	
	string_concat(pointer1,pointer2);				//function call to concat the str's.
		

	printf("concatinated str in str is:%s\n",string1);			//printing sucessfully concatinated str.
	
return 0;
}

/*--------------------output----------------------------------------

enter first string
nikhil

enter second string
patil

concatinated str in str is:
nikhilpatil

--------------------------------------------------------------------/*
