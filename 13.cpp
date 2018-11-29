#include <stdio.h>
#include <conio.h>

void main()
{
int d;
printf("18BCAN036");
printf("enter a number");
scanf("%d",&d);
switch(d)
{  case 1:printf("sunday");break;
   case 2:printf("monday");break;
   case 3:printf("tuesday");break;
   case 4:printf("wednesday");break;
   case 5:printf("thursday");break;
   case 6:printf("friday");break;
   case 7:printf("saterday");break;
   default:printf("please enter correct number");
}
return 0;

}
