		       //SIMPLE INTREST//
		  /*
		       // OUTPUT //


		  Enter the value of amount,time and rate :
		  1000
		  1
		  5
		  The value of SI : 50		     */



#include<stdio.h>
#include<conio.h>
void main()
{
  int amount,time,rate,SI;
  clrscr();

  printf("Enter the value of amount,time and rate : \n");
  scanf("%d%d%d",&amount,&time,&rate);

     SI = (amount * rate * time)/100;   // Equation of simple intrest


  printf("The value of SI : %d",SI);

  getch();
  }