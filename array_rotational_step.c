//c program to do rotational shift od array elements
#include<stdio.h>
int main()
{
	int arr[5],i,j,step,temp;
	char ch;
	
	printf("enter the elements into array\n");
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);

	printf("enter r for right shift or l for left shift\n");
	scanf(" %c",&ch);

	printf("enter the step size \n");
	scanf("%d",&step);
	
	
	if(ch=='r')
	{
	//logic for right shift.	
		for(i=0;i<step;i++)
		{
		 	temp=arr[5-1];
			for(j=5-1;j>=0;j--)
			{
				arr[j]=arr[j-1];
			}
		arr[0]=temp;
		}
	}
	else if(ch =='l')
	{
	
		//logic for left shift.	
		for(i=0;i<step;i++)
		{
			temp=arr[0];
			for(j=0;j<5;j++)
			{
				arr[j]=arr[j+1];
				
			}
		arr[5-1]=temp;
		}
	}

	//printing the array here.
	for(i=0;i<5;i++)
	{
		printf(" %d ",arr[i]);
	}


}
