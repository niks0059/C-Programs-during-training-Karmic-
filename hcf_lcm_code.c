#include<stdio.h>
int main()
{
	int a,b,n,d,r,gcd,lcm;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	n=b;
	d=a;
	r=a%b;
	
	while(r!=0)	
	{
		n=d;
		d=r;
		r=n%d;
	}
	
	gcd=d;
	lcm=(a*b)/gcd;

	printf("GCD is %d\n",gcd);
	printf("LCM is %d\n",lcm);
return 0;
}
