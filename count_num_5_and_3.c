// program to check numbers of 3's and 5's and return which is greater
#include<stdio.h>
#define SIZE 10
int main()
{
	int arr[SIZE],three,five,i;
	
	printf("enter the elements into array\n");
	for(i=0;i<SIZE;i++)		
		scanf("%d",&arr[i]);						//entering elements into array
	
	for(i=0;i<SIZE;i++)
	{
		if(arr[i]==3)							//logic to count num of 3's in array.
			three++;
		else if(arr[i]==5)						//logic to count num of 5's in array.  
		)
			five++;
	}
	
	if(three>five)
		printf("num of 3's are greater in array and it appears-%d times\n",three);
	else																						//printing 3's or 5's which ever is greater.
		printf("num of 5's are greater in array and it appears-%d times\n",five);
	
return 0;	
	
}
