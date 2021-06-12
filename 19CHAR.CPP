#include "conio.h"
#include "iostream.h"
main()
{
char s;
char n[20];
clrscr();
cout<<" Please type your sex (m/f) : "; cin>>s;
cout<<" Please type your name      : "; cin>>n;
cout<<"Hello ";
if(s=='m' || s=='M')
cout<<"Mr. ";
else
cout<<"Mrs. ";
cout<<n;
getch();
}