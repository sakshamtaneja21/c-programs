//Sum & Average of 2 different Arrays (29-1-19)
#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN036\n\n");
	int i, mt1[5], mt2[5];
	float mrks[5];
	printf("Enter marks of 5 students out of 250 for Mid-term 1\n"); //max marks 500
	for (i=0; i<5; i++){
		scanf("%d", &mt1[i]);
	}
	printf("\nEnter marks of 5 students out of 250 for Mid-term 2\n"); //max marks 500
	for (i=0; i<5; i++){
		scanf("%d", &mt2[i]);
	}
	for (i=0; i<5; i++){
		mrks[i] = mt1[i] + mt2[i];
	}

	printf("\nThe sum of marks of 5 students for Mid-term 1 & Mid-term 2 is\n");
	for(i=0; i<5; i++){
		printf("%d ", (int)mrks[i]);
	}
	for(i=0; i <5; i++){
		mrks[i] = mrks[i] / 2;
	}
	printf("\n\nAverage of marks of 5 students for Mid-term 1 & Mid-term 2 is\n");
	for(i=0; i<5; i++){
		printf("%f\n", mrks[i]);
	}
	getch();
}
