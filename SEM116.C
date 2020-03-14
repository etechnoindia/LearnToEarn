			    //USING NESTED LOOP//

		       /*    // OUTPUT//

			  1
			  1 2
			  1 2 3
			  1 2 3 4
			  1 2 3 4 5
			  1 2 3 4 5 6   */


#include<stdio.h>
#include<conio.h>
void main()
{

int i=1,j;
clrscr();

while(i<=6)
{
 j=1;
 while(j<=i)
 {
   printf("\t%d",j);
   j++;
 }
 printf("\n\n");
 i++;
}
getch();
}

