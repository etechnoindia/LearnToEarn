// TO FIND A CHARACTER IS A VOWEL OR CONSONANT //


#include<stdio.h>
#include<conio.h>
void main()
{
char n;
clrscr();

printf("Enter a character : \n");
scanf("%c",&n);

if (n == 'A' || n == 'a' || n == 'E' || n == 'e' || n == 'I' || n == 'i' || n == 'O' || n == 'o' || n == 'U' || n == 'u')

{
printf("%c : vowel.",n);
}

else
{
printf("%c : consonant.",n);
}
getch();
}
