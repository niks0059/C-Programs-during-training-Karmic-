//a C program to toggle ser and reset a bit.
#include<stdio.h>

int binary_to_dec(int num)
{
   	int binary,n,p=1,n1;
	int dec=0,j=1,i,d;
	
	n1=num;
	for (i=n;i>0;i=i/10)
	{  
          d = i % 10;
            if(j==1)
                  p=p*1;
            else
                 p=p*2;

	   //dec=dec+(d*p);
	   i++;
	}
        printf("%d\n\n",n1);
}


int main()
{
	int num,pos,ch;

	printf("please enter a number\n");
	scanf("%d",&num);
	
	printf("THIS IS BIT OPERATION SOFT.\n");
	printf("SELECT WHICH OPERATION TO PERFORM\n");
	printf("1. SET A BIT\n");
	printf("2. CLEAR A BIT\n");
	printf("3. TOGGLE A BIT\n");
	printf("4. GET A  PERTICULAR BIT\n");
	
	printf("PLEASE ENTER YOUR CHOICE\n");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
	
	case 1:
		
		
		printf("enter position you wish to set\n");
		scanf("%d",&pos);
		printf("number before set operation was:\n %d",num);
		
		
		printf("number after set operation is:\n");
		num = num | (1 << pos);	//setting a bit
		printf("%d\n",num);
		break;
		
	case 2:
		
		printf("enter position you wish to clear/reset\n");
		scanf("%d",&pos);	
		printf("number before set operation was:%d\n",num);
		
		
		printf("number after set operation is:\n");
		num = num & ~(1 << pos);//clear a bit
		printf("%d\n",num);
		break;
		
		
	case 3:
		
		printf("enter position you wish to toggle\n");
		scanf("%d",&pos);
		printf("number before toggle operation was:\n");
		binary_to_dec(num);
		
		printf("number after toggling operation is:\n");
		num = num ^ (1 << pos);	//Toggle bit
		binary_to_dec(num);
		break;
		
		
	case 4:
		
		printf("enter position you wish to get\n");
		scanf("%d",&pos);
		printf("number before toggle operation was:\n");
		binary_to_dec(num);
		
		printf("number after toggling operation is:\n");
		num = (num >> pos) & 1;//Getting a bit:
		binary_to_dec(num);
		break;
		
	default:
	
		printf("enter a valid choice\n");
		
	}

return 0;
}
