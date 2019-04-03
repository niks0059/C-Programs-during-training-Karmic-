//program to find count of even,odd num and num divisible by 3.
#include<stdio.h>
#define SIZE 10
int main()
{
	int arr[SIZE],i,even=0,odd=0,div_by_three=0;	
	printf("enter 10 elements into array\n");
	for(i=0;i<SIZE;i++)
		scanf("%d",&arr[i]);						//accepting array elements from user.
	
	for(i=0;i<SIZE;i++)
	{
		if(arr[i]%2==0)								//logic to count even numbers
			even++;
		
		else if(arr[i]%2!=0)					//logic to count odd numbers.
			odd++;
	}
	for(i=0;i<SIZE;i++)
	{
		if(arr[i]%3==0)									//logic to see if numbers are divisible by 3.
			div_by_three++;
	}
	printf("even=%d odd=%d divisible by 3=%d\n",even,odd,div_by_three);				//printing their respective counts.

return 0;
}
