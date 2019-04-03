//program to check whether a number is even or odd.
#include<stdio.h>
int main()
{

	int num;
	
	printf("enter e number to check whether it is EVEN OR ODD NUMBER\n");
	scanf("%d",&num);
	
	if(num==0)
		printf("not even nor odd\n");		
	else if(num%2==0 && num!=0)
		printf("number is even\n");
	else if((num%2)!=0)
		printf("number is odd\n");

return 0;	

}
