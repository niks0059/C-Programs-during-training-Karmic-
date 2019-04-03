//program to print floor numbers while going through a 9 floor building.
#include<stdio.h>
#include<stdlib.h>
static int floor;							
static int dest_floor;
int lift_number()													//function to take status of current lift numbers.
{
	int i,dest_floor;
	printf("floor->%d<-\n",dest_floor);

	
	while(1)
	{
	
	scanf("%d",&dest_floor);										//taking input from user for destinationn floor
	if((dest_floor>=floor) && (floor<=9))
	{
		
		for(floor;((floor<=dest_floor) && (floor<=9));)				//logic for pressing upwards button
		{
			
			printf("current floor---->%d\n",floor);
			sleep(1);
			floor++;
			
		}//if(floor!=1)
			floor--;
	}
	else if(dest_floor<=floor && floor>=0)							//logic for downwards button.
	{
			for(floor;((floor>=dest_floor) && (floor>=0));)
		{
			
			printf("current floor----->%d\n",floor);
			if(floor==0)
				break;
			sleep(1);
				floor--;
			if(floor<0)
				floor++;
		}
		if(floor!=0)
			floor--;
					
	}
	
	}
}
int main()
{
	
	lift_number();					//calling function for lift.
return 0;
}
