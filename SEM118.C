//TO CALCULATE AREA AND PARAMETER OF RECTANGLE AND COMPARE BOTH//
	     /*  //output//
	     Enter the value of l & b :
	     23
	     24
	     Area = 552
	     Parameter = 94
	     Not equal	     */

#include<stdio.h>
#include<conio.h>
void main()
{

int l,b,area,parameter;
clrscr();

printf("Enter the value of l & b : \n ");
scanf("%d%d",&l,&b);

area = l * b;
printf("\nArea = %d",area);

parameter = 2*(l+b);
printf("\nParameter = %d",parameter);

if(area == parameter)
 {
   printf("Both are equal\n ");
 }
 else
   {
    printf("\nNot equal");
   }

getch();
}