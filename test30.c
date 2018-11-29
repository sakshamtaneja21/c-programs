//Objective - Multiple Functions
//Date - Oct. 17, 2018

#include <stdio.h>
#include <conio.h>

int sum(){
	int n1,n2;
	printf("Enter 2 numbers ");
	scanf("%d%d",&n1,&n2);
	return (n1+n2);
}

void facto(int x)
{
	int i,f=1;
	for(i=2; i<=x; i++){
		f=f*i;
	}
	printf("Factorial is %d",f);
}

void main()
{
	int sum(void);
	void facto(int);
	int s,choice,n;
	printf("18BCAN036\n\n");
	printf("1 - Sum of 2 numbers\n");
	printf("2 - Factorial of a Number\n\n");
	printf("Enter your choice ");
	scanf("%d",&choice);
	switch(choice){
		case 1:{
			s=sum();
			printf("Sum is %d",s); break;
		}
		case 2:{
			printf("Enter a number ");
			scanf("%d",&n);
			facto(n); break;
		}
		default: printf("Error");
	}
	getch();
}
