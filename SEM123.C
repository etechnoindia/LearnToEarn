		 // TO PRINT FOLLOWING PATTERN//
	/*       //OUTPUT//
	      Pattern :
	       *
	       **
	       ***
	       ****       */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,rows=6;
clrscr();


printf("Pattern : \n");
for(i=2;i<rows;i++)
{
for(j=i;j<rows;j++)
{
printf("");
}
for(j=1;j<i;j++)
{
printf("*");
}
printf("\n\n");
}
getch();
}