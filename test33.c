//Objective - Arrays
//Date - Oct. 24, 2018


#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN036\n\n");
	int n[10],i,max;
	printf("Enter 10 numbers ");
	for(i=0; i<10; i++){
		scanf("%d",&n[i]);
	}
	max=n[0];
	for(i=1; i<10; i++){
		if(max<n[i]){
			max=n[i];
		}
	}
	printf("Largest number is %d",max);
	getch();
}
