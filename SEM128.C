
    // TO PRINT FACTORIAL OF ANY NUMBER USING FUNCTIO //


#include<stdio.h>
#include<conio.h>

void factorial()
{
int n,i,p=1;
printf("Enter the value : \n");
scanf("%d",&n);

for(i=1;i<=n;i++)
p = p*i;
printf("Factorial : %d",p);
}
void main()
{
clrscr();
factorial();
getch();
}
