//WAP to Enter the marks of student (out of 100) and check student is pass or fail
//Cheack leap year or not leap year
#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
printf("Enter year:");
scanf("%x",&x);
if(x%4)
printf("Not leap year");
else
printf("Leap year");
}
