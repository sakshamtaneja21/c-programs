//Base converter (29-1-19)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN036\n\n");
	int x[20], base, n, i=-1, j;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Enter the base (2 - 16) for conversion: ");
	scanf("%d", &base);
	while (n != 0){
		x[++i] = n%base;
		n = n/base;
	}
	printf("Converted number is: ");
	for (j=i; j>=0; j--){
		switch(x[j]){
			case 10: printf("A"); break;
			case 11: printf("B"); break;
			case 12: printf("C"); break;
			case 13: printf("D"); break;
			case 14: printf("E"); break;
			case 15: printf("F"); break;
			default: printf("%d", x[j]);
		}
	}
	getch();
}
