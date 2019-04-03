//program to check whether two numbers add up equal's of third.
#include<stdio.h>
int main()
{
	int arr1[3],i;
	
	printf("enter three numbers into an array ");
	for(i=0;i<3;i++)
		scanf("%d",&arr1[i]);
	

	if(arr1[0]+arr1[1]==arr1[2])
		printf("arr1{%d]+arr1[%d] = %d+%d=>%d",0,1,arr1[0],arr1[1],arr1[2]);			//logic to check sumation of 0+1=2
		
	else if(arr1[1]+arr1[2]==arr1[0])
		printf("arr1{%d]+arr1[%d] = %d+%d=>%d",1,2,arr1[1],arr1[2],arr1[0]);			//logic to check sumation of 1+2=0
	
	else if(arr1[0]+arr1[2]==arr1[1])
		printf("arr1{%d]+arr1[%d] = %d+%d=>%d",0,2,arr1[0],arr1[2],arr1[1]);			//logic to check sumation of 0+2=1
	else
		printf("no such two num's exist's which may add up to third num");				//if no such numbers exist's

return 0;
}
