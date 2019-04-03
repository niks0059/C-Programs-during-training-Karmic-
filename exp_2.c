#include<stdio.h>
#define SZ 25
int main()
{
	int i,j=0,res,op,no1,no2,count=0;
	char arr[SZ],num1[SZ],num2[SZ];
	
	printf("enter the expression\n");
	scanf("%s",arr);
	
	for(i=0;arr[i]!='\0';i++)
	{
			if(count==1)
			{
				num2[j]=arr[i];
			
				printf("num2[i]=%c\n",num2[j]);
					j++;
			}
				
			else if(arr[i]=='+' || arr[i]=='-' || arr[i]=='/' ||arr[i]=='*')
			{
				op=arr[i];
				count=count+1;
			}
			else   
			{
				num1[i]=arr[i];
				printf("num1[i]=%c\n",num1[i]);
			}
	}	
	
	no1=atoi(num1);
	printf("no1 is %d\n",no1);
	no2=atoi(num2);
	printf("no2 is %d\n",no2);
	
	
	switch(op)
	{
		case '+':
			
			res=no1+no2;
			printf("no1=%d no2=%d sum=%d \n",no1,no2,res);
			break;
			
		case '-':
			
			res=no1-no2;
			printf("no1=%d no2=%d sub=%d",no1,no2,res);
			break;
		case '*':
			
			res=no1*no2;
			printf("no1=%d no2=%d mul=%d",no1,no2,res);
			break;
			
		case '/':
			
			res=no1/no2;
			printf("no1=%d no2=%d div=%d",no1,no2,res);
			break;
			
			
		case '%':
			
			res=no1%no2;
			printf("no1=%d no2=%d mod=%d",no1,no2,res);
		
		default:
			printf("enter valid expression\n");
			break;
	}
	
	

return 0;
}

