#include<stdio.h>
#include<conio.h>
void main()
{int n,i,j;
clrscr();
printf("enternumber of row");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=n;j>=i;j--)
printf(" ");
for(j=1;j<=i;j++)
printf(" *");
printf("\n");
}
getch();
}

