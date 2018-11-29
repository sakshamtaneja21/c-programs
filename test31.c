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

int sub(){
	int n1,n2;
	printf("Enter 2 numbers ");
	scanf("%d%d",&n1,&n2);
	return (n1-n2);
}

int prod(){
	int n1,n2;
	printf("Enter 2 numbers ");
	scanf("%d%d",&n1,&n2);
	return (n1*n2);
}

int div(){
	int n1,n2;
	printf("Enter 2 numbers ");
	scanf("%d%d",&n1,&n2);
	return (n1/n2);
}

void main()
{
	int sum(void);
	int sub(void);
	int prod(void);
	int div(void);
	int sm,sb,pro,divi,choice,n;
	printf("18BCAN036\n\n");
	printf("1 - Sum of 2 numbers\n");
	printf("2 - Difference of 2 numbers\n");
	printf("3 - Product of 2 numbers\n");
	printf("4 - Division of 2 numbers\n\n");
	printf("Enter your choice ");
	scanf("%d",&choice);
	switch(choice){
		case 1:{
			sm=sum();
			printf("Sum is %d",sm); break;
		}
		case 2:{
			sb=sub();
			printf("Difference is %d",sb); break;
		}
		case 3:{
			pro=prod();
			printf("Product is %d",pro); break;
		}
		case 4:{
			divi=div();
			printf("Quotient is %d",divi); break;
		}
		default: printf("Error");
	}
	getch();
}
