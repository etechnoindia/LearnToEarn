			     //COMPOUND INTREST//
	      /*           //OUTPUT//
		      Enter principle amount : 1000
		      Enter thr time : 1
		      Enter the rate of intrest of pa : 5
		      SI: 50
		      Total amount : 1050               	*/



#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int pa,t;
float r,amount,ci;
clrscr();


  printf("Enter principle amount :");
  scanf("%d",&pa);

  printf("Enter the time :");
  scanf("%d",&t);

  printf("Enter the rate of intrest of pa :");
  scanf("%f",&r);


  amount = pa*pow((1+r/100),t);
      ci = amount-pa;

  printf("SI:%7.2f",ci);
  printf("\nTotal amount : %7.2f",amount);
getch();
}