#include "conio.h"
#include "iostream.h"
main()
{
int a,b,c;
clrscr();
cout<<"Enter 3 Numbers : ";
cin>>a>>b>>c;

if(a>b && a>c)
cout<<a;

if(b>a && b>c)
cout<<b;

if(c>a && c>b)
cout<<c;

getch();
}