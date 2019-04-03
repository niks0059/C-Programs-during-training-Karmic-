//program to find the closet number in an array of number's

#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
	int i,arr[10];
	
	printf("enter the elements into the array\n");
	for(i=0;i<10;i++)
	{					//loop to accept numbers into the loop
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(arr[i]>100)
		{
			arr[i]=arr[i]-100;
		}
		else if(arr[i]<100)
		{
			arr[i]=100-arr[i];
		}
		else if(arr[i]==100)
		{
			printf("val closest to 100 is 100 itself\n");
			exit(0);
		}
		else if(arr[i]<0)
		{
			arr[i]=100+arr[i];		//think about the sign manipulations
		}
	}qsort(arr, 5, sizeof(int), cmpfunc);

	printf("val closest to 100 is %d",arr[0]+100);
	
return 0;
	
}
