/* condition for leap year: -->
	      (a) Leap year:-->
		  year%4==0
		  year%100==0
		  year%400==0
	      (b) Not leap year:-->
		  year%4==0
		  year%100==0
		  year%400!=0 */

#include<stdio.h>
#include<conio.h>
void main()
{
  int year;
  clrscr();
  printf(" Enter the year to check year is leap year or not : \n ");
  scanf("%d",&year);

  if(year%4 == 0)
  {
    if(year%100 == 0)

      {
	if(year%400 == 0)

	    printf("%d year is leap year ",year);

	  else

	  printf("%d year is not leap year ",year);
      }

    else

      printf("%d year is leap year",year);
  }
  else

      printf("%d year is not leap year ",year);


getch();
}
