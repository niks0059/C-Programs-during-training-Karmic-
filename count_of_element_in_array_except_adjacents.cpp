//program to count number of occurence of a digit.(if encountered no is same as adcacent no then exit)
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int ele_count(int arr[],int num)

int main()
{	
	int arr,num;
	
	
	
	int i,arr[SIZE];
	printf("enter elements into the array\n");
	for(i=0;i<SIZE;i++)
		scanf("%d",&arr[i]);
		
	int number;
	printf("enter the number you want to check in array\n");
	scanf("%d",&number);
	return number;

	
	for(i=0;i<SIZE;i++)
	{
		if( (arr[i]==num) && (arr[i+1]==num) ) 
		{
				exit(0);
		}
		else if(arr[i]==num)
			count++;

	}printf("count=> %d\n",count);	
}
	
	
	
	
	
	arr=array_input();
	num=num_accept();
	count=ele_count(&arr,num);
	printf("count=> %d\n",count);
	
return 0;
	
}
