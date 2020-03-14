		  //USING 'while'LOOP PRINT 1 TO 10 //
       /*             //OUTPUT//
		  The numbers :
			   1
			   2
			   3
			   4
			   5
			   6
			   7
			   8
			   9
			   10               */
#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1;
 clrscr();

  printf("The numbers : \n\n");

  while(i<=10)
  {
  printf("\n\t%d",i);
  i++;
  }
  getch();
}

