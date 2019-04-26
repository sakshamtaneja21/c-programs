/*Structure within Functions using Call by Reference (9-4-19)*/
/*store height & width of 2 boxes using structure & swap them using call by address.*/

#include <stdio.h>
#include <conio.h>

struct box {
	int height;
	int width;
};

void swap (struct box *ptr1, struct box *ptr2){
	int t;
	t = ptr1 -> height;
	ptr1 -> height = ptr2 -> height;
	ptr2 -> height = t;
	t = ptr1 -> width;
	ptr1 -> width = ptr2 -> width;
	ptr2 -> width = t;
}

void main(){
	printf("18BCAN036\n\n");
   struct box b1, b2;
   printf("Enter height & width of 1st box:\n");
   scanf("%d%d", &b1.height, &b1.width);
   printf("Enter height & width of 2nd box:\n");
   scanf("%d%d", &b2.height, &b2.width);
   printf("\nHeight & width of 1st box before swapping:\n");
   printf("Height = %d, Width = %d\n", b1.height, b1.width);
   printf("\nHeight & width of 2nd box before swapping:\n");
   printf("Height = %d, Width = %d\n", b2.height, b2.width);
	swap (&b1, &b2);
	printf("\nHeight & width of 1st box after swapping:\n");
   printf("Height = %d, Width = %d\n", b1.height, b1.width);
   printf("\nHeight & width of 2nd box after swapping:\n");
   printf("Height = %d, Width = %d\n", b2.height, b2.width);
   getch();
}
