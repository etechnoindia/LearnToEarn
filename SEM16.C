			    // PROFIT & LOSS //

		  /*        //OUTPUT//

			Enter selling price & cost price :
			50
			40
			10: profit          */


#include<stdio.h>
#include<conio.h>
void main()
{
 int sp,cp,loss,profit;
 clrscr();
 printf("Enter selling price & cost price : \n ");
 scanf("%d%d",&sp,&cp);

 if(sp<cp)

 {
   loss = cp - sp;
   printf("%d: Loss",loss);
 }
 else
 {
   profit = sp - cp;
   printf("%d: Profit",profit);
 }

getch();
}



