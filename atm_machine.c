//program for atm machine to print notes
#include<stdio.h>
int main()
{
	int amt,f_notes,two_th_notes,h_notes,total;	
	printf("enter amout to be dispensed\n");
	scanf("%d",&amt);
	if(amt%100==0 && amt>99)
	{
		if(amt<500) 
		printf("%d notes of 100\n",amt/100);
	
		else if(amt>500 && amt<2000)
		{
			f_notes=amt/500;
			printf("500 notes=%d and 100=%d\n",f_notes,(amt-(f_notes*500))/100);
		}	
		else if(amt>2000)
		{
			two_th_notes=amt/2000;
			f_notes=(amt-(two_th_notes*2000))/500;
			total=(two_th_notes*2000)+(f_notes*500);
			if(total!=amt)
			{
				h_notes=amt-((two_th_notes*2000)+((f_notes)*(500))/100);
			}
			printf("2000 notes=%d and 500=%d and 100=%d\n",two_th_notes,f_notes,h_notes);
		}
		
	}
	else
		printf("enter valid amount in multiples of 100\n");

}
