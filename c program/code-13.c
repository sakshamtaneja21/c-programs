//Addition & Subtraction of 2 matrices (05-02-19) - Lab

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN036\n\n");
	int mt1[3][3], mt2[3][3], sum[3][3], diff[3][3], i, j;
	printf("Enter 9 numbers:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &mt1[i][j]);
		}
	}
	printf("\nEnter 9 numbers:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &mt2[i][j]);
		}
	}

	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			sum[i][j] = mt1[i][j] + mt2[i][j];
			diff[i][j] = mt1[i][j] - mt2[i][j];
		}
	}
	printf("\nSum of 2 matrices is:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
	printf("\nDifference of 2 matrices is:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d\t", diff[i][j]);
		}
		printf("\n");
	}
	getch();
}
