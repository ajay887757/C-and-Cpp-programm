//wap to check charcter is Alphabetic or not
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("\n Enter any charcter:");
scanf("%c",&ch);
if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
printf("\n Number is Alphabetic:");
else
printf("\n Number is not Alphabetic:");
}