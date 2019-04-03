//program to count users stpe's distence
#include<stdio.h>
int main()
{	
	float step_walked,total_dist,step_len;
	
	printf("enter the steps walked\n");
	scanf("%f",&step_walked);

	printf("enter step length\n");
	scanf("%f",&step_len);
	
	total_dist=step_walked*step_len;
	
	printf("%f",total_dist);

	if(total_dist<1000)
	{
		printf("Total Distance in mtrs is:\n");
		total_dist=total_dist/1000.0;
		printf("%f\n",total_dist);
	}
	else if(total_dist>1000)
	{
		printf("Diatance in KM is:\n");
		total_dist=total_dist*1000.0;
		printf("%d",total_dist);	
	}
return 0;
}
