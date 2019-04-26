#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN036\n\n");
	char  ch = 'A' , *ptr;
	ptr = &ch;
	printf("%d\n%c", *ptr, *ptr);
	getch();
}
