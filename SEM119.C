	  //TO FIND GREATER NUMBER BETWEEN TWO NUMBERS //
   /*          //OUTPUT//

	 Enter the numbers :
	 34
	 43
	 Greater between both numbers : 43   */




#include<stdio.h>
#include<conio.h>
void main()
{

int a,b,g;
clrscr();

printf("Enter the numbers : \n ");
scanf("%d%d",&a,&b);

if(a>b)
{
g = a;
}
else
{
g = b;
}
 printf("Greater between both number : %d ",g);

getch();
}
