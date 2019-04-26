/*Structures (9-4-19)*/
/*store following info. of 2 students by using structure - Name/Roll No/Percentage*/

#include <stdio.h>
#include <conio.h>

struct student{
	int roll_no;
	char name [16];
	float percentage;
};

void main(){
	printf("18BCAN036\n\n");
	struct student s1, s2;
	printf("Enter roll no of Student 1: ");
	scanf("%d", &s1.roll_no);
	printf("Enter name of Student 1: ");
	scanf("%s", s1.name);
	printf("Enter percentage of Student 1: ");
	scanf("%f", &s1.percentage);
	printf("\nEnter roll no of Student 2: ");
	scanf("%d", &s2.roll_no);
	printf("Enter name of Student 2: ");
	scanf("%s", s2.name);
	printf("Enter percentage of Student 2: ");
	scanf("%f", &s2.percentage);
	printf("\nRoll No of Student 1: %d", s1.roll_no);
	printf("\nName of Student 1: %s", s1.name);
	printf("\nPercentage of Student 1: %f", s1.percentage);
	printf("\n\n");
	printf("Roll No of Student 2: %d", s2.roll_no);
	printf("\nName of Student 2: %s", s2.name);
	printf("\nPercentage of Student 2: %f", s2.percentage);
	getch();
}
