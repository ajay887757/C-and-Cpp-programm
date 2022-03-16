//WAP to Enter the marks of student (out of 100) and check student is pass or fail

#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
printf("Enter marks");
scanf("%d",&x);
if(x<30)
printf("fail");
else if(x>100)
printf(" not valid");
else
printf(" pass");
}
