//largest betwwn two numbers and return values accordingly.
#include<stdio.h>
int main()
{
	int num1[2],i;
	
	printf("enter two number's\n");
	for(i=0;i<2;i++)
		scanf("%d",&num1[i]);							//accepting two numbers 
	
	
	if(num1[0]!=num1[1])							//logic
	{
	
		if(num1[0]%7==num1[1]%7)					//if dividing after 7 equal then returning the smallest number
		{
			if(num1[0]>num1[1])
				printf("\nboth numbers are divisible by 7 and %d is smaller among them\nThank You!\n",num1[1]);
			else
				printf("\nboth numbers are divisible by 7 and %d is smaller among them\nThank You\n",num1[0]);
		}
		else
			printf("there's no relation between these numbers!\n try entering another numbers\nThank You!!");
	}
	else if(num1[0]==num1[1])					//if both the numbers are equal then retutning zero.
	{
			printf("\nNumbers entered are equal returning %d\nThank you!\n",0);
	}
	
return 0;
}
