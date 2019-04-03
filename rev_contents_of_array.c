//program to reverse the contents of array
#include<stdio.h>
#define SIZE 10
int main()
{
	int i,j,arr[SIZE],arr1[SIZE];
	printf("please enter elements into the array\n");
	for(i=0;i<SIZE;i++)
		scanf("%d",&arr[i]);
	
	for(i=SIZE-1,j=0;i<SIZE,j<SIZE;i--,j++)
	{
		arr1[j]=arr[i];									//copying contents of array in diff array and printing.
	}
	for(j=0;j<SIZE;j++)
			printf(" %d ",arr1[j]);	
return 0;
}
