#include<stdio.h>
int main()
{
	int num,i,j,num1=0,sum;
	
	scanf("%d",&num);
	
	int temp=num;
	
	for(i=10,j=10 ; i>0,j<100000000001 ; i--,j*10)
	{
	    if(i>100000000001)
	        break;
	    else
	    {
	        temp=temp/j;
		    sum= +temp*i;
	    }
	}
	if(sum%11==0)
		printf("Legal ISBN\n");
	else
		printf("Illegal ISBN");
return 0;
}
