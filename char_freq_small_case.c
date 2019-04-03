#include<stdio.h>
#define sz 30
#define alp 26
int main()
{
	int i;
	char str1[sz];
	int freq[alp]={0};			//initialize all elements to zero first.
	
	printf("enter the string\n");
	gets(str1);
	
	for(i=0;str1[i]!='\0';++i)
	{
		if(str1[i]>='a' || str1[i]<='z')
		{
			freq[str1[i]-'a']++;
		}
		else 
		{
			printf("please check your string!enter a string with all samll caps only\n");
		}
	}
	
	for(i=0;i<alp;i++)
	{
		if(freq[i]!=0)
		{
			printf("%c=%d\n",i+'a',freq[i]);
		}
		
	}
	
return 0;
	
}

