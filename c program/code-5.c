/*15-1-19*/
/*Output Determination*/

#include <stdio.h>
#include <conio.h>

void main() {
   printf("18BCAN036\n\n");
   int a=5, b=4, *p1, *p2, r1, r2;
   p1 = &a;
   p2 = &b;
   r1 = 6 + *p1;
   r2 = *p2 - *p1 + r1;
   *p1 = r2;
   *p2 = r1 + *p1;
   printf("%d\t%d\t%d\t%d\n", r1,r2,a,b);
   printf("%d\t%d", *p1, *p2);
   getch();
}
