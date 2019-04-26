//Factorial of a number using Recursive Function (05-03-2019)

#include <stdio.h>
#include <conio.h>

int facto (int n){
	int f;
	if(n==1)
		return (1);
	else
		f = n * facto(n-1);
}
void main(){
	printf("18BCAN036\n\n");
	int n, f;
	printf("Enter a number: ");	scanf("%d", &n);
	f = facto(n);
	printf("Factorial of %d is %d", n, f);
	getch();
}
