    //TO CALCULATE TOTAL MARKS,PERCENTAGE AND DIVISION OF ANY STUDENT//
/*
		       //OUTPUT//

	  Enter the marks for all subjects :
	  44
	  55
	  66
	  77
	  88

	  Total = 300
	  Percentage = 60.0000
	  1st Division                   */


#include<stdio.h>
#include<conio.h>
void main()
{
 int maths,physics,chemistry,biology,hindi,sum = 0;
 float percentage=0;
 clrscr();
 printf("Enter the marks for all subjects : \n");
 scanf("%d%d%d%d%d",&maths,&physics,&chemistry,&biology,&hindi);

  sum = maths + physics + chemistry + biology + hindi;
  printf("\nTotal = %d",sum);

  percentage = ((float)sum*100)/500;
  printf("\nPercentage = %f\n",percentage);

  if(percentage >= 60)
  {
  printf("1st Division");
  }
  else if(percentage >= 50 && percentage < 60)
  {
  printf("2nd Division");
  }
  else if(percentage >= 30 && percentage < 50)
  {
  printf("3rd Division");
  }
  else if(percentage < 30)
  {
  printf("FAIL!");
  }

getch();
}
