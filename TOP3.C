#include<stdio.h>
#include<conio.h>
void main()
{int i=1,n,b1=-32768,b2=-32768,b3=-32768;
clrscr();
printf("enter 10 number");
while(i<=10)
{scanf("%d",&n);
if(n>b1)
{b3=b2;b2=b1;b1=n;}
else if(n>b2)
{b3=b2;b2=n;}
else if(n>b3)
b3=n;
i++;
}
printf("b1=%d,b2=%d,b3=%d",b1,b2,b3);
getch();
}






