#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int no,r,sum=0,c=0;
clrscr();
printf("\n Enter any no");
scanf("%d",&no);
if(no<0)
printf("-");
while(no!=0)
{
r=no%10;
printf("%d",abs(r));
sum=sum+r;
c++;
no=no/10;
}
printf("\n sum of digits =%d",sum);
printf("\n No of digits =%d",c);
}