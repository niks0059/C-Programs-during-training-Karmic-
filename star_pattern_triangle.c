//program to print star pattern as follows
#include <stdio.h>
int main()
{
	int i, j, num, temp;
 
  	printf("Enter the number of rows in pyramid of stars you wish to see\n");
  	scanf("%d", &num);
 
  	temp = num;
 
  	for (i = 1; i <= num; i++)  
  	{
    	for (j = 1; j < temp; j++)  // Loop to print spaces in line
    	{
	  		printf(" ");
 		}
    
 
    	for (j = 1; j <= 2*i - 1; j++) // Loop to print stars in line
    	{
	  		printf("*");
 		}
     printf("\n");
     temp--;
  	}
 
return 0;

}
