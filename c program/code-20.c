//Value swap using function call by reference (5-3-19 - Lab)

#include <stdio.h>
#include <conio.h>

void swap(int *n1, int *n2){
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void main(){
	printf("18BCAN036\n\n");
	int num1, num2;
	printf("Enter a number: ");
	scanf("%d", &num1);
	printf("Enter another number: ");
	scanf("%d", &num2);
	swap( &num1, &num2);
	printf("\nNew value of the first number is %d\n", num1);
	printf("New value of the second number is %d\n", num2);
	getch();
}
