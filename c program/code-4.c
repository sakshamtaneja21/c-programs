/*15-1-19*/
/*Swapping of Numbers*/

#include <stdio.h>
#include <conio.h>

void main() {
   printf("18BCAN036\n\n");
   int a, b, s, *p1, *p2;
   printf("Enter number A: ");
   scanf("%d", &a);
   printf("Enter number B: ");
   scanf("%d", &b);
   p1 = &a;   p2 = &b;
   s = *p1;   *p1 = *p2;   *p2 = s;
   printf("The Swapped value of A is %d\n", *p1);
   printf("The Swapped value of B is %d\n", *p2);
   getch();
}
