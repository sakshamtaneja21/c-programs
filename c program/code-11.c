/*Largest & Smallest number in an Array (29-1-19)*/

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN036\n\n");
	int ar[10], i, large, small;
	printf("Enter 10 Numbers\n");
	for (i=0; i<10; i++){
		scanf("%d",&ar[i]);
	}
	large = ar[0];	small = ar[0];

	for (i=0; i<10; i++){
		if (ar[i] > large){
			large = ar[i];
		}
		if(ar[i] < small){
			small = ar[i];
		}
	}
	printf("Largest number is %d", large);
	printf("\nSmallest number is %d", small);
	getch();
}
