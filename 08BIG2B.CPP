#include "conio.h"
#include "iostream.h"
main()
{
int a,b,h;
clrscr();
cout<<"Enter 2 Numbers : ";
cin>>a>>b;
if(a>b)
h=a;
else
h=b;
cout<<h;
getch();
}