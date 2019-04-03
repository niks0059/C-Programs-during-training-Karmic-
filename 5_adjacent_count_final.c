//program to find adjacent 5's and count number of five's.
#include<stdio.h>
#define SIZE 10
int main()
{
	int arr[SIZE],i,count=0;
	
	printf("enter the elements into the array\n");
	for(i=0;i<SIZE;i++)
		scanf("%d",&arr[i]);

	for(i=0;i<SIZE;i++)
	{
		if((arr[i]==5) && (arr[i+1]==5))
		{
			return 0;
		}
		else if((arr[i]==5) &&(arr[i+1]!=5))
		{
			count++;
		}
	}
	if(count==5)
		printf("TRUE!count of 5=%d\n",count);
	else
		return 0;

}
