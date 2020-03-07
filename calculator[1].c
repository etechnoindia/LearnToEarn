#include<stdio.h>
#include<conio.h>

int main()
{
	long int a,b;
	char ch;
	clrscr();
	cal:
	printf("\nEnter two operand\n\n");
	scanf("%ld%ld",&a,&b);
	printf("what do you want to do ? ");
	printf("\n\npress\t'+' for addition\n\t'-' for subtraction\n\t'*' for multiplicatiin\n\t'/' for division\n");
	scanf("\n\t%c",&ch);
	
	switch (ch)
	{
		case '+' : printf("\naddition is = %ld",a+b);
		break;
		case '-' : printf("\nsubtraction is = %ld",a-b);
		break;
		case '*' : printf("\nmultiplition is = %ld",a*b);
		break;
		case '/' : printf("\ndivision is = %ld",a/b);
		break;
		default : printf("\ninvalid choice try again\n\n");
	}
	printf("\nDo you want to exit ?\n\n[1] yes\t\t[2] no\n\n");
	scanf("%ld",&a);
	if (a!=1)
	goto cal;
	getch();
	return 0;
}
