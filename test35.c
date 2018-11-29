//Objective - Arrays
//Date - Oct. 24, 2018


#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN036\n\n");
	int n[5],i,sum=0;
	float avg;
	printf("Enter 5 numbers ");
	for(i=0; i<5; i++){
		scanf("%d",&n[i]);
	}
	for(i=0; i<=5; i++){
		sum=sum+n[i];
	}
	avg=sum/5.0;
	printf("The sum is %d\n",sum);
	printf("The average is %f", avg);
	getch();
}
