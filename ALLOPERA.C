#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
clrscr();
printf("Enter two numbe for sum:-");
scanf("%d%d",&x,&y);
z=x+y;
printf("sum= %d",z);
printf("\n Enter two numbers for sub:-");
scanf("%d%d",&x,&y);
z=x-y;
printf("\nsub= %d" ,z);
printf("\n Enter two numbers for multiply:-");
scanf("%d%d",&x,&y);
z=x*y;
printf("\n multiply=%d",z);
printf ("\n Enter two numbers for divide:-");
scanf("%d%d",&x,&y);
z=x/y;
printf("\n divide=%d",z);
getch();
}