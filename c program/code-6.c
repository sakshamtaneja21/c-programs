/*15-1-19*/
/*Output Determination*/

#include <stdio.h>
#include <conio.h>

void main() {
   printf("18BCAN036\n\n");
   int a=-8, b=32, *p1, *p2, r1, r2;
   p1 = &a;   p2 = &a;
   r1 = *p1 * *p2/10 + 6; // (-8 x -8 )/10 + 6 = 12
   *p2 = *p1 - 2 * *p1;
   p2 = &b;
   *p2 = *p1 + r1;
   r2 = 5 && *p2;
   printf("%d\t%d\t%d\t%d\n", r1,r2,a,b);
   printf("%d\t%d", *p1, *p2);
   getch();
}
