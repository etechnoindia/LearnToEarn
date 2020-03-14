// TO FIND AVERAGE OF 5 NUMBERS//


#include<stdio.h>
#include<conio.h>
void main()
{

int a,s,d,f,g,h,average;
clrscr();

printf("Enter the values : \n");
scanf("%d%d%d%d%d%d",&a,&s,&d,&f,&g,&h);

average = (a + s + d + f + g + h)/6;

printf("Average : %d",average);
getch();
}