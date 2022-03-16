#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;

clrscr();
printf("Enter three numbers:");
scanf("%d%d%d",&x,&y,&z);

printf("\n Avg of three number= %f",(x+y+z)/3.0);


getch();
}