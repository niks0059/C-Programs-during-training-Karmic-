#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	char ch;
	char arr[3];
	do
	{
	system("cls");
	printf("CALCULATOR\n");
	printf("Press 'e' to exit\n");
	scanf("%s",arr);
	if(arr[0]=='e')
	{
		return 0;
	}
	else
	{
	switch(arr[1])
	{
		case '+':		system("cls");
						printf("CALCULATOR\n");
						printf("Press 'e' to exit\n");
						printf("%s=%d\n",arr,(arr[0]-'0')+(arr[2]-'0'));
						sleep(2);
						break;
		case '-':
						system("cls");
						printf("CALCULATOR\n");
						printf("Press 'e' to exit\n");
						printf("%s=%d\n",arr,(int)(arr[0]-'0')-(int)(arr[2]-'0'));
						sleep(2);						
						break;
		case '*':		system("cls");
						printf("CALCULATOR\n");
						printf("Press 'e' to exit\n");
						printf("%s=%d\n",arr,(int)(arr[0]-'0')*(int)(arr[2]-'0'));
						sleep(2);
						break;
		case '/':		system("cls");
						printf("CALCULATOR\n");
						printf("Press 'e' to exit\n");
						printf("%s=%f\n",arr,(float)(arr[0]-'0')/(arr[2]-'0'));
						sleep(2);
						break;
		case '%':		system("cls");
						printf("CALCULATOR\n");
						printf("Press 'e' to exit\n");
						printf("%s=%d\n",arr,(int)(arr[0]-'0')%(int)(arr[2]-'0'));
						sleep(2);
						break;
		default:		
						system("cls");
						printf("CALCULATOR\n");
						printf("Press 'e' to exit\n");
						printf("Operator enterd is invalid!\n");
						sleep(2);
	}
	}
	}while(1);
	
}

