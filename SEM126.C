//SWAPPING OF NUMBERS//



#include<stdio.h>
#include<conio.h>
void main()
{

int a,b,temp=0;
clrscr();


printf("Enter the values :\n");
scanf("%d%d",&a,&b);

 {
 temp = a;
 a = b;
 b = temp;
 }
 printf("%d%d",a,b);
 getch();
 }
