#include<stdio.h>
int main()
{
	int num,num1,num2,num3,num4;
	printf("enter the number to get higher nibble out of 8 bits from a 32-bit number\n");
	scanf("%x",&num);
	
	num1=num;
	num1=num1&0xf0;
	num1=num1>>4;
						//for last 2 digits
	

	num2=num;			//3 and 4 digit
	num2=num2>>8;
	num2=num2&0xf0; 
	num2=num2>>4;
	
	num3=num;
	num3=num3>>16;		//5 and 6th digit
	num3=num3&0xf0;
	num3=num3>>4;
	
	num4=num;
	num4=num4>>24;		//7 abd 8th digit.
	num4=num4&0xf0;
	num4=num4>>4;
	
	num=(1000*num4)+(100*num3)+(10*num2)+num1;
	printf("%d\n",num);
	
}
