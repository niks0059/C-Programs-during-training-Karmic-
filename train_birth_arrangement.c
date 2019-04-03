//program for train birth..
#include<stdio.h>
int main()
{
	int seat_no;
	printf("enter your seat number?\n");
	scanf("%d",&seat_no);

	if(seat_no>0 && seat_no<65)	
	{
		if((seat_no%8==1) ||(seat_no%4==0) || (seat_no==1))
			printf("lower birth(W)\n");
		
		else if((seat_no%8==5) || (seat_no%8==2) || (seat_no==2) || (seat_no==5))
			printf("middle birth\n");
	
		else if((seat_no%8==6) || (seat_no%8==3) || (seat_no==3) || (seat_no==6))
			printf("upper birth\n");
	
		else if(seat_no%8==7)
			printf("side lower birth\n");
	
		else if(seat_no%8==0)
			printf("side upper birth\n");
	}
	else
	{
		printf("Please! Enter valid seat number.\n\nThank You.");
	}
return 0;

}
