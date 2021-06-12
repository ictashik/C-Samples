#include "conio.h"
#include "iostream.h"
main()
{
int m;
clrscr();
cout<<"Enter Marks : "; cin >> m;
if(m<50)
{
  gotoxy(37,12); cout << "Failed";
}
else
{
 gotoxy(37,12); cout << "Passed";
 gotoxy(32,13); cout << "Congratulations";
}
getch();
}