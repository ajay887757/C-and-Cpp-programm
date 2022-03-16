#include<stdio.h>
void main()
{
int no, i=1;
int sume=0,sumo=0;
printf("\n Enter 10 no:");
while(i<=10)
{
scanf("%d",&no);
if(no%2==0)
{sume=sume+no;}
else
{sumo=sumo+no;}
i++;
}
printf("Sumo=%d",sumo);

printf("Sume=%d", sume);
}