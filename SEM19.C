    //TO COUNT NUMBER OF DIGIT USING 'do-while' LOOP //
/*                   //OUTPUT//

		     Enter the number :
		     3456
		     The number of digits : 4         */






#include<stdio.h>
#include<conio.h>
void main()
{
 int i,r=0,t=0;
 clrscr();

 printf("Enter the number: ");
 scanf("%d",&i);
 do
  {
     r=i/10;
     i=r;
     t++;
  }
  while(i>0);

   printf("The number of digits : %d",t);
getch();
}





