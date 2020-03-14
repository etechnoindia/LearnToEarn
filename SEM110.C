		     //  TO REVERS A NUMBER //
/*                       //OUTPUT//
		     Enter hte number :
		     3456
		     6543                  */


#include<stdio.h>
#include<conio.h>
void main()
{

 int i,r,t;
 clrscr();

 printf("Enter the number : \n");
 scanf("%d",&i);

  do
   {
     r = i%10;
     t = i/10;
     i = t;
     printf("%d",r);
   }
  while(i>0);
getch();
}
