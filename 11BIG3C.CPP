#include "conio.h"
#include "iostream.h"
main()
{
int a,b,c,h;
clrscr();
cout<<"Enter 3 Numbers : ";
cin>>a>>b>>c;
if(a>b)
h=a;
else
h=b;

if(h>c)
cout<<h;
else
cout<<c;

getch();
}