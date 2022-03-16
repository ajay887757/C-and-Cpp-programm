#include<stdio.h>
#include<conio.h>
void main()
{int n,x=1,y=0,t;
int i=1;
clrscr();
printf("\n Enter no of terms");
scanf("%d",&n);
while(i<=n)
{
t=x+y;
printf("%d",t);
x=y;
y=t;
i++;
}
}