#include<stdio.h>
int main()
{

    int i, j, num;

    printf("Enter number: ");
    scanf("%d",&num);

    for(i=num; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        {
        	
            printf("\t * ");
        }
        printf("\n");
    }

    return 0;
}
