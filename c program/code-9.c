/*Multiple Functions in Loop (22-01-19)*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void sum (int x, int y){
	printf("Sum = %d\n\n", x+y);
}
void diff (int x, int y){
	printf("Difference = %d\n\n", x-y);
}
void prod (int x, int y){
	printf("Product = %d\n\n", x*y);
}
void divi (int x, int y){
	printf("Quotient = %d\n\n", x/y);
}

void main(){
	printf("18BCAN036\n\n");
	int choice, n1, n2;
	printf("---------------------\n");
	printf("\tMENU\n");
	printf("---------------------\n");
	printf("1. ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n4. DIVISION\n5. EXIT \n\n");

	while(1){
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice){
			case 1:
				printf("Enter 2 numbers: ");	scanf("%d%d", &n1, &n2);	sum (n1, n2); break;
			case 2:
				printf("Enter 2 numbers: ");	scanf("%d%d", &n1, &n2);	diff (n1, n2); break;
			case 3:
				printf("Enter 2 numbers: ");	scanf("%d%d", &n1, &n2);	prod (n1, n2); break;
			case 4:
				printf("Enter 2 numbers: ");	scanf("%d%d", &n1, &n2);	divi (n1, n2); break;
			case 5:
				exit(0);
			default:
				printf("Try Again!\n\n");
		}
	}
	getch();
}
