//Objective - Loops - Sum of Digits
//Date - Oct. 31, 2018

#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN036\n\n");
	int n,t,rem,sum=0;
	printf("Enter a number ");
	scanf("%d",&n);
	t=n;

	while(t!=0){
		rem=t%10;
		sum=sum+rem;
		t=t/10;
	}

	printf("Sum of digits of %d is %d",n,sum);
	getch();
}
