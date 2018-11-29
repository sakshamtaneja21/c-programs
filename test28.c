//Objective - Functions
//Date - Oct. 10, 2018


#include <stdio.h>
#include <conio.h>

void sum() //function declaration
{
	//function definition
	printf("18BCAN036\n\n");
	int n1,n2;
	printf("Enter 2 numbers ");
	scanf("%d%d",&n1,&n2);
	printf("Sum is %d",n1+n2);
}

void main(){
	sum(); //function calling
	getch();
}
