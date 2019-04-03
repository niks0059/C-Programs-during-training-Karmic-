#include<stdio.h>
#define SZ 10

int main()
{
	int arr1[SZ],i;
	
	printf("enter the elements into the array\n");
	for(i=0;i<SZ;i++)
		scanf("%d",&arr1[i]);						//accepting numbers sequence from user.
		
	for(i=0;i<SZ;i++)													
	{
		if(arr1[i]>0)
		{	
			if(arr1[i]<arr1[i+1] && arr1[i+1]<arr1[i+2])										//logic to check the adjacent increasing sequence.
			{	
				if((arr1[i+1]==arr1[i]+1) && (arr1[i+2]==arr1[i+1]+1))
					printf("increasing adjacent triplet exists at position %d %d %d of num=%d %d %d\n",i+1,i+2,i+3,arr1[i],arr1[i+1],arr1[i+2]);
			}
		}	
		
		else if(arr1[i]<0)
		{
			if(arr1[i]<arr1[i+1] && arr1[i+1]<arr1[i+2])										//logic to check the adjacent increasing sequence.
			{	
				if((arr1[i+1]==arr1[i]+1) && (arr1[i+2]==arr1[i+1]+1))
					printf("increasing adjacent triplet exists at position %d %d %d of num=%d %d %d\n",i+1,i+2,i+3,arr1[i],arr1[i+1],arr1[i+2]);
			}
		}
	}
	
		
return 0;
}
