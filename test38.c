//Objective - Loops - Value Swap of 2 Variables
//Date - Oct. 31, 2018

#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN036\n\n");
	int x,y,z;
	printf("Enter 2 numbers ");
	scanf("%d%d",&x,&y);

	printf("\nBefore Swap, 1st Integer = %d and 2nd Integer = %d\n",x,y);
	z=x; x=y; y=z; //x=x+y; y=x-y; x=x-y;
	printf("After Swap, 1st Integer = %d and 2nd Integer = %d",x,y);

	getch();
}
