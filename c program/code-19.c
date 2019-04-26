//Fibonacci Series up to n (05-03-2019 - Lab)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN036\n\n");
	int i, n, t1 = 0, t2 = 1, nxttrm;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	printf("The Fibonacci Series is: ");
	for (i = 1; i <= n; ++i){
		printf("%d ", t1);
		nxttrm = t1 + t2;
		t1 = t2;
		t2 = nxttrm;
	}
	getch();
}
