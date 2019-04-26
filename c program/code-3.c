/*15-1-19*/
/*Factorial of a number*/

#include <stdio.h>
#include <conio.h>

void main()
{
   printf("18BCAN036\n\n");
   int n, i, f=1, *ptr;
   printf("Enter a number ");
   scanf("%d", &n);
   ptr = &n;
   for (i=2; i <= *ptr; i++){
      f = f*i;
   }
   printf("Factorial of %d is %d", *ptr, f);
   getch();
}
