//program to swap two numbers using pointers.
#include<stdio.h>
void swap_fun(int* ptr1,int* ptr2)		//accepting two int pointers
{
	*ptr1=((*ptr1)^(*ptr2));
	*ptr2=((*ptr1)^(*ptr2));			//logic for swaping two numbers using pointers
	*ptr1=((*ptr1)^(*ptr2));
	
}
int main()
{
	int a,b,*ptr1,*ptr2;;			//declaration of int variables and pointer variables

	
	printf("enter values for a and b respectively\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	
	ptr1 = &a;				//assigning address of variables to pointers.
	ptr2 = &b;


	printf("before SWAP-> a=%d b=%d\n",a,b);

	swap_fun(ptr1,ptr2);							//calling swap function.
	printf("after SWAP-> a=%d b=%d\n",a,b);
	
	
}
