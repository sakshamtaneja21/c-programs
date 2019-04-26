//String Concatenation (26-2-19) - Lab

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	printf("18BCAN036\n\n");
   char str1[16]="MAN ", str2[16]="UTD";
   strcat(str1, str2);
   printf("%s",str1);
	getch();
}
