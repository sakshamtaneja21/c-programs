//Objective - Looping Statements
//Date - Sept 12, 2018


#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN036\n");
	int i,sum=0,f=1,sign=-1,a;
	printf("enter a number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sign=(-1)*sign;
		sum=sum+sign*i;
	}
	printf("Sum of series %d",sum);
	getch();
}
