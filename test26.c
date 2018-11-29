//Objective - Looping Statements - Prime or Not Prime
//Name - Vayu Dugar


#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN036\n");
	int i,n,f=0;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=2; i<n; i++){
		if(n%i==0){
				f=1;
				break;
		}
	}	
	if(f==1)
		printf("Not Prime");
	else
		printf("Prime");
	getch();
}
