//program to find match using struct.
#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 5

struct person
{
	char name[10];
	int height;
	char prof[10];
};
int main()
{	
	int i,j,temp,h,f,index;
	struct	person men[MAX],women,arr[MAX]={0};
	
	printf("ENTER 5 MEN'S DATA INTO DATABASE\n");
    for(i=1; i<=MAX; i++)
    {
        printf("\nEnter details of %d men\n\n",i);
 
        printf("Enter name:\n ");
        scanf("%s", &men[i].name);
 
        printf("Enter height in cm\n ");
        scanf("%d", &men[i].height);
 
        printf("Enter your profession\n ");
        scanf("%s", &men[i].prof);
    }

	printf("ENTER WOMEN'S DATA INTO DATABASE\n");
 
        printf("Enter name:\n ");
        scanf("%s",&women.name);
 
        printf("Enter height in cm\n ");
        scanf("%d", &women.height);
 
        printf("Enter your profession\n ");
        scanf("%s", &women.prof);


	for(i=1;i<=MAX;i++)
	{
			if(strcmp(men[i].prof,women.prof) == 0)
				printf("probable match between %s and %s\n",men[i].name,women.name);						
			else
			{
				
				if(men[i].height>women.height)
				{
					temp=fabsf(men[1].height-women.height);
					//printf("temp=%d",temp);
		
					if(temp>men[i+1].height-women.height)
					{
						temp=fabsf(men[i+1].height-women.height);
						//printf("%d",temp);
						index=i;
					}
					else if(temp<fabsf(men[i+1].height-women.height))
					{
						continue;
					}
				printf("%s is perfect match for you\n",men[index].name);
				}
			}
		
	}	
}


