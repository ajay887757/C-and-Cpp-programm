//WAP to Enter the marks of student (out of 100) and check student is pass or fail

#include<stdio.h>
#include<conio.h>
void main()
{
char x;
clrscr();
printf("Choose head(H)or tail(T):");
scanf("%c",&x);
if(x=='H')
printf("You won the toss");
else if(x=='T')
printf(" You loss the toss");
else
printf(" Worng selection");
}
