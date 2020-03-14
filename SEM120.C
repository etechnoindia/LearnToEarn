// TO FIND PRIME NUMBERS BETWEEN 1 TO 100 //

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();

printf("\nPrime numbers between 1 to 100 : \n\n\n");
for(i=1;i<100;i++)
{
   for(j=2;j<i;j++)
   {
     if(i%j==0)
       break;
   }
   if(i == j)
   printf("%2d\t",i);
}
getch();
}