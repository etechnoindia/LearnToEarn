		       //  TO FIND SUM OF ALL DIGITS//

	 /*               //OUTPUT//

	      Enter the numbers :
	      345
	      sum : 12              */



#include<stdio.h>
#include<conio.h>
void main()
{

int a,b=0,c;
clrscr();

printf("Enter the numbers :\n");
scanf("%d",&a);


do {
    c = a%10;
    a = a/10;
    b = b+c;
   }
while(a!=0);

printf("\n sum : %d",b);

getch();
}
