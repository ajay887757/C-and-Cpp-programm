#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;

clrscr();
printf("Enter the value of x and y:");
scanf("%d%d",&x,&y);

printf("\n Before swapping %d,%d",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("\n After swapping %d,%d",x,y);
getch();
}