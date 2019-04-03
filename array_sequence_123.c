//program to find a sequence of 123 appears in array or not.
#include<stdio.h>
#define SZ 10
int main()
{
	int arr1[SZ],i;
	
	printf("enter the elements into array structure\n");
	
	for(i=0;i<SZ;i++)
		scanf("%d",&arr1[i]);
								//accepting elements into array from users
		
	for(i=0;i<SZ;i++)
	{
		if(arr1[i]==1)
		{
			if(arr1[i+1]==2 && arr1[i+2]==3)
			{
				printf("sequence of 123 exit's at position %d %d %d\n",i+1,i+2,i+3);
			}
		}
	}
return 0;
	
	
}
