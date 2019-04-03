//program for magic number or not.
#include<stdio.h>
#include<math.h>

int sum=0,rem;
reverse_function(int num)
{
	int sum=0,rem;
	
   if(num)
   {
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   else
      return sum;
   return sum;
}




int main()
{
	int num[4];
	int digit,no,temp,rev,i,j;
	
	printf("enter a number");
	for(i=0;i<4;i++)
		scanf("%d",&num[i]);
	
		
	for(i=0;i<4;i++)
	{
		temp=temp+num[i];
		no=temp;
		
	}
	printf("this is adding the digits %d\n",no);		//sumation of digits.
	
	
	
	temp=0;
	for(i=0,j=1000;i<4,j>=1;i++,j=j/10)
	{
		
		temp=num[i]*j;
		digit=digit+temp;
		
		
	}printf(" digit's are:%d\n",digit);
	
	rev=reverse_function(digit);
	printf("%d",rev);
	
	if(rev*digit==no)
	{
		printf("%d is magic number",digit);
	}
	else
	{
		printf("not a magic number\n");
	}
	
	
	
}
