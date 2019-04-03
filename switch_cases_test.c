#include<stdio.h>
int main()
{
		int num;
		printf("enter any no. below\n");
		scanf("%d",&num);
		
		
		switch(num)									//10/0 compiles with warming and programs exits after sometime with close switch failed!
		{
			default:
				printf("this is default case\n");
				break;
			
			/*case 1:
				printf("this is case 1\n");
				break;
			*/
			
			case 1:
				printf("this is case 1\n");
				continue;						//continue stmts are used only within loops.
									
				
			case 2:
				printf("this is case 2\n");
				break;
			
			case 3:
				printf("this is case 3\n");
				break;
						
							
		}



}

