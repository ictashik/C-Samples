#include "conio.h"
#include "iostream.h"
main()
{
int m;
clrscr();
cout<<" Mark : "; cin>>m;
if(m<50)
{
textcolor(12);
gotoxy(30,10);
cprintf(" Failed");
}
else
{
textcolor(10);
gotoxy(20,20);
cprintf(" Passed");
gotoxy(20,21);
cprintf(" Very Good");
}
getch();
}