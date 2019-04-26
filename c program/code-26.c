/*Nested Structures (9-4-19)*/

#include <stdio.h>
#include <conio.h>

struct address {
	int pin;
	char city[10];
	char state[10];
};
struct employee{
	char name[16];
	int sal;
	struct address add;
};

void main(){
   printf("18BCAN036\n\n");
   struct employee e1;
   printf("Enter information regarding employee 1 - Name, Salary, City, State & PIN:\n");
   scanf("%s%d%s%s%d", e1.name, &e1.sal, e1.add.city, e1.add.state, &e1.add.pin);
	printf("\nEntered Information about employee:\n");
	printf("Name: %s\nSalary: %d\nCity: %s\nState: %s\nPIN: %d", e1.name, e1.sal, e1.add.city, e1.add.state, e1.add.pin);
   getch();
}
