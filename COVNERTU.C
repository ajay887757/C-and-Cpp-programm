#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter any character in upper case: ");
scanf("%c",&ch);
ch=ch+32;
printf("\n lower case character =%c",ch);
getch();

}
