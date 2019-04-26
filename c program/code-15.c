//String Comparison (05-02-19) - Lab

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN036\n\n");
   char ch[25], ch1[25] = "Hello World!";
   int c;
   printf("Enter a string: ");
   gets(ch);
   c = strcmp(ch, ch1);
   if (c == 0)
		printf("The strings are same");
   else
		printf("The strings are different");
   getch();
}
