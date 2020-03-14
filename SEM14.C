	      //ADD TWO NUMBERS USING 'scanf'FUNCTION //
/*
		      //OUTPUT//
	       Enter the values :
	       45
	       55
	       The value of c : 100     */


#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter the values : \n");
  scanf("%d%d",&a,&b);   //Taking valu from user

  c = a + b;

  printf("The value of c : %d",c);
getch();
}