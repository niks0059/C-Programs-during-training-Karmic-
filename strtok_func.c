#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *my_strtok(char *s1, const char *s2)		
{
	int i,j,*ptr;
	int k = strlen(s1);
	int l = strlen(s2);
	*ptr=*s1;

	for( i = 0; i < l; i++)
	{
		for( j = 0; j < k; j++)
		{
			if( *(s2+i) == *(s1+j) )
			{
				*(s1+j) = '\0';
				*ptr++;
				*ptr--;
				continue;
			}
		}
	}
	printf("----->%c<------",*ptr);
	for( j = 0; j < k; j++)
	{
		if( *(s1+j) != '\0' )
		{
			putchar(*(s1+j));
		}
		else if( *(s1+j) == '\0' )
		{
				printf("\n");
		}
	}
}

int main()
{
		char *s1, *s2;
		s1 = (char*)malloc(20);
		s2 = (char*)malloc(20);
		printf("enter the  string\n");
		fgets(s1,100,stdin);
		puts("enter the token");
		fgets(s2,100,stdin);
		my_strtok(s1,s2);				
}



			


