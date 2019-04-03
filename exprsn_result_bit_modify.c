#include<stdio.h>
int print_flag(int flag1)
{
	int i;
	for(i=7;i>=0;i--)
	{
	
		printf("%d ",flag1>>i&1);
	}
}


int main()
{
  while(1)
  {
	
	int a,b,d,res,i;
	static char flag = 0b01101011;
	printf("enter he value foe a \n");
	scanf("%d",&a);
	
	printf("enter he value foe b\n");
	scanf("%d",&b);
	
	printf("enter he value foe d \n");
	scanf("%d",&d);		
	
	res=((a*b)/d);
	
	
	if(res<=500)
	{
	
		for(i=3;i>=0;i--)
		{
			flag= flag | (1<<i);
		}
	
		printf("RESULT after Setting all bits of lower nibble to 1\n");
		flag=print_flag(flag);
	}
	else if(res>500 && res<=2000)
	{
		for(i=7;i>=0;i--)
		{
			flag = flag ^ (1 << i);
		}
		printf("RESULT after Toggling all the bits %d\n");
		flag=print_flag(flag);
	}
	else if(res>2000 && res<=10000)
	{
			for(i=7;i>=0;i--)
			{
				if(i>4)
				{
					flag = flag ^ (1 << i);
				}
			}printf("RESULT after Toggling all the bits of upper nibble\n");
			flag=print_flag(flag);
	}
	else if(res >10000)
	{
		for(i=7;i>=0;i--)
		{
			flag = flag & ~(1 << i);
		}printf("RESULT after  Clearing all the bits.\n");
		flag=print_flag(flag);
	}
  
  }	//end of while
}//end of main()
