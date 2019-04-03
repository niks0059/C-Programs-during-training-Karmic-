//program for strcpy function
#include<stdio.h>
#define SIZE 20
void string_copy(char str1[],char *pointer1,char *pointer2) //strcpy function using pointers.
{
	int i=0;
	while(str1[i]!='\0')
	{
		*pointer2 = *pointer1;			 //logic for copying the string using pointers.
		pointer1++;							//address inc.
		pointer2++;
		i++;		
	}	
	str1[i]='\0';
}
int main()
{
	char str1[SIZE],str2[SIZE];
	char *pointer1,*pointer2;

	printf("enter first string\n");						//accepting a str to copy to destn.
	fgets(str1, SIZE, stdin); 
	
	pointer1=str1;										//assigning first location addr to pointer's.
	pointer2=str2;
	
	string_copy(str1,pointer1,pointer2);				//function call to copy str's.
		

	printf("copied str in str2 is:%s\n",str2);			//printing sucessfully copied str.
	
return 0;
}
