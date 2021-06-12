#include "conio.h"
#include "iostream.h"
main()
{
int m;
clrscr();
cout << "Enter Mark : "; cin >> m;
cout << "Grade = ";
textcolor(2);
if(m>=90 && m<=100) cprintf("A+");
if(m>=80 && m<90) cprintf("A");
if(m>=70 && m<80) cprintf("B+");
if(m>=60 && m<70) cprintf("B");
if(m>=50 && m<60) cprintf("C+");
if(m>=40 && m<50) cprintf("C");
if(m>=30 && m<40) cprintf("D+");
if(m<30) {textcolor(4); cprintf("D");}
getch();
}