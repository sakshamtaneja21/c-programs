/*Sorting an Array in Ascending Order (2-4-19)*/

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN036\n\n");
	int arr[50], tmp, i, j, n;
	printf("Enter the number of elements:\n");
	scanf("%d", &n);
	printf("Enter the elements:\n");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){
			if(arr[i] > arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	printf("Elements sorted in ascending order are:\n");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	getch();
}
