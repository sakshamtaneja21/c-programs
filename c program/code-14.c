//Length of String (05-02-19) - Lab

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN036\n\n");
   char ch1[25],  ch2[25] = "Hello World!";
   int x, y;
   printf("Enter a string: ");
   gets(ch1);
   x = strlen (ch1);	y = strlen(ch2);
   printf("String 1: %s\n", ch1);
   printf("Length of string 1 is %d\n\n", x);
   printf("String 2: Hello World!\n");
   printf("Length of string 2 is %d", y);
	getch();
}
