/*User-defined 2D Array (2-4-19)*/

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN036\n\n");
	int arr[50][50], m, n, i, j;
	printf("Enter No. of Rows & Columns: ");
	scanf("%d%d", &m, &n);
	printf("Enter %d numbers:\n", m*n);
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	printf("The Array is:\n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	getch();
}
