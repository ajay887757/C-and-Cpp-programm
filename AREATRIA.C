#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
float area;
clrscr();
printf("Enter side of triangle ");
scanf("%d%d",&a,&b);
area =0.5*a*b;
printf("Area of triangle =%f", area);
getch();
}