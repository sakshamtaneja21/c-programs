//Sum & Average of Array (18-1-19)
#include <stdio.h>
#include <conio.h>

void main() {
	printf("18BCAN036\n\n");
	int i, mrks[5], sum=0;
	float avg;
	printf("Enter marks of 5 students out of 100\n"); //max marks 100
	for (i = 0; i<5; i++){
		scanf("%d", &mrks[i]);
	}
	for (i = 0; i<5; i++){
		sum = sum + mrks[i];
	}
	avg = sum/5.0; //(float)sum/10
	printf("\nThe average marks of students are %f", avg);
	getch();
}
