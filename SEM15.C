	     // TO CHECK NUMBER IN EVEN OR ODD //
	 /*               //OUTPUT//

		       Enter the value :
		       45
		       45: Number is odd	          */


#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i;
  clrscr();

  printf("Enter the value : \n");
  scanf("%d",&n);
   if(n%2==0)
   {
     printf("%d: Number is even ");
   }
   else
   printf("%d: Number is odd ");

getch();
}