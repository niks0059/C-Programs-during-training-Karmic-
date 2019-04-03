#include<stdio.h>
#include<math.h>

int main()
{
	int num[4];
	int num1,temp=0,temp1=0,i,j,len,res,no=0,no1=0,no3=0;
	
	printf("enter a number");
	for(i=0;i<4;i++)
		scanf("%d",&num[i]);
	
		
	for(i=0;i<4;i++)
	{
		temp=temp+num[i];
		no=temp;
		
	}
	printf("%d\n",no);
	
	
	
	for(i=0,j=1000; i<4,j<=1; i++,j=j/10)				//number
    {
   		    temp1=num[i]*j;
   		    no3 = no3+temp1;
   		    
    }
    printf("this is result no3 %d\n",no3);
	
	
	
	   
	
    for(i=4-1,j=1000;i>=0,j>=1; i--,j=j/10)				//number to get the reverse.
    {
   		    temp1=num[i]*j;
   		    no1 = no1+temp1;
    }
    printf("this is result no1 %d\n",no1);

}
