	   //TO PRINT TABLE OF ANY NUMBER//
      /*          //OUTPUT//
	       Enter the number :
	       2

	       Table of 2 :


			  2
			  4
			  6
			  8
			  10
			  12
			  14
			  16
			  18
			  20          */




#include<stdio.h>
#include<conio.h>
void main()
{

int n,i;
clrscr();
printf("Enter the number : \n\n");
scanf("%d",&n);

printf("Table of 2 : \n\n");

for(i=1;i<=10;i++)
{
printf("\n\t%d",n*i);
}
getch();
}