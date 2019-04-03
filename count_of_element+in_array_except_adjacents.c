//program to count number of occurence of a digit.(if encountered no is same as adcacent no then exit)
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int i;
int array_input()			//accepting elements into array according to size given by user.
{
	
	int i,arr[SIZE];
	printf("enter elements into the array\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int num_accept()
{
	int number;
	printf("enter the number you want to check in array\n");
	scanf("%d",&number);
	return number;
}
int ele_count(int arr[],int num)
{
	int count=0;
	for(i=0;i<SIZE;i++)
	{
		if( ((arr[i]==num ) && (arr[i+1]==num)) || ((arr[i+1]==num) && (arr[i+2]==num)) || (arr[i]==num) && (arr[i-1]==num) )
		{
				exit(0);
		}
		else
		{
			if(arr[i]==num)
				count++;
		}

	}	return count;
	
}
int main()
{	
	int arr,count;

	arr=array_input();
	int num=num_accept();
	count=ele_count(arr,num);
	printf("%d\n",count);
	if(count>0)
		printf(" %d appeared %d times\n",num,count);
return 0;
	
}
