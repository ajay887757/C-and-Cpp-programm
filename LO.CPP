#include<iostream.h>
#include<conio.h>
float main()
{

float r,si,p,n;        x
clrscr();
cout<<"Enter principal:";
cin>>p;
cout<<"Enter rate:";
cin>>r;
cout<<"Enter number of year:";
cin>>n;
si=p*r*n*12/100;
cout<<"Simple interest="<<si;
getch();
return 0;
}
