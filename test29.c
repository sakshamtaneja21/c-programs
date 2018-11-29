//Objective - Functions
//Date - Oct. 10, 2018

				
#include <stdio.h>
#include <conio.h>

void main(){
	void facto(void); //function declaration (prototype)
	facto(); //function calling
	getch();
}

void facto() //function definition
{
	printf("18BCAN013\n\n");
	int i,n,f=1;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=2; i<=n; i++){
		f=f*i;
	}
	printf("Factorial is %d",f);
}

/*
	#include <stdio.h>
	#include <conio.h>
	
	void facto() //function declaration
	{
		//function definition
		printf("18BCAN024\n\n");
		int n,i,f=1;
		printf("Enter a number ");
		scanf("%d",&n);
		for(i=2; i<=n; i++){
			f=f*i;
		}
		printf("Factorial is %d",f);
	}
	
	void main(){
		facto(); //function calling
		getch();
	}
*/
