		// TO FIND EVEN NUMBERS BETWEEN 1 TO 100 //


#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
 clrscr();

  printf("Even numbers :\n\n \n");

  for(i=1;i<=100;i++)
  {
    if(i%2==0)
      {
	printf("%d\t\t",i);
      }
  }
getch();
}