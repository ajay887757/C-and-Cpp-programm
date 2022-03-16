#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
clrscr();
printf("\n Enter a,b and c");
scanf("%d%d%d",&a,&b,&c);
printf("\n x1=%f",(-b+sqrt(b*b-4*a*c))/(2*a));
printf("\n x2=%f",(-b-sqrt(b*b-4*a*c))/(2*a));
getch();
}