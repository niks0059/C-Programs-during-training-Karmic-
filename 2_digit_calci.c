#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	char a[5],b[5],c[5];
	//scanf("%s",&a);
	//count=0;


	do{
			int i,count=0,op=0,num1=0,num2=0;
			system("cls");
			printf("CALCULATOR\n");
	

			printf("Press 'e' to exit\n");
			scanf("%s",a);
	
		
		

	
			if(a[0]=='e')
			{
				return 0;
			}
			else
			{		
	
				for(i=0;a[i]!='\0';i++)
				{
					if(count==1)
					{
						c[i]=a[i];
						printf("c[i]=%c\n",c[i]);
					}
				
					else if(a[i]=='+' || a[i]=='-' || a[i]=='/' ||a[i]=='*')
					{
						op=a[i];
						count++;
					}
					else  
					{
						b[i]=a[i];
						printf("b[i]=%c\n",b[i]);
					}
				}
				printf("%s\n",b);
				printf("%c\n",op);
				printf("%s\n",c);
			
	num1=atoi(c);
	printf("num 1=%d\n",num1);
	num2=atoi(b);
	printf("num2=%d\n",num2);
	}
		
		
		
		
	
	switch(op)
	{
		case '+':		system("cls");
						printf("CALCULATOR\n");
						printf("Press 'e' to exit\n");
						printf("%s=%d\n",a,num1+num2);
						sleep(2);
						break;
		case '-':
						system("cls");
						printf("CALCULATOR\n");
						printf("Press 'e' to exit\n");
						printf("%s=%d\n",a,num1-num2);
						sleep(2);						
						break;
		case '*':		system("cls");
						printf("CALCULATOR\n");
						printf("Press 'e' to exit\n");
						printf("%s=%d\n",a,num1*num2);
						sleep(2);
						break;
		case '/':		system("cls");
						printf("CALCULATOR\n");
						printf("Press 'e' to exit\n");
						printf("%s=%f\n",a,(float)num1/num2);
						sleep(2);
						break;
		case '%':		system("cls");
						printf("CALCULATOR\n");
						printf("Press 'e' to exit\n");
						printf("%s=%d\n",a,num1%num2);
						sleep(2);
						break;
		default:		
						system("cls");
						printf("CALCULATOR\n");
						printf("Press 'e' to exit\n");
						printf("Operator entered is invalid!\n");
						sleep(2);
	}
   }while(1);

}
