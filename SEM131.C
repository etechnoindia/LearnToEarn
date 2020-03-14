// TO CHECK NUMBER IS POSITIVE OR NOT //


#include<stdio.h>
#include<conio.h>
void main()
{

int n;
clrscr();

printf("Enter the number : \n");
scanf("%d",&n);

if(n>0)
{
printf("Number is positive ");
}
else
{
printf("Number is negetive ");
}
getch();
}