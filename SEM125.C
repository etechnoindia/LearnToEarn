//TO FIND FACTORIAL NUMBER//

#include<stdio.h>
#include<conio.h>
void main()
{

int i,p=1,n;
clrscr();

printf("Enter the value : \n");
scanf("%d",&n);

for(i=1;i<=n;i++)

p = p * i;

printf("Factorial : %d",p);
getch();
}