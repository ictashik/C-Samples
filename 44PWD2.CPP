#include "conio.h"
#include "iostream.h"
#include "string.h"
main()
{
char pwd[20];
int k;
clrscr();
for(k=0;k<3;k++)
   {
      gotoxy(1,1); cout << "Enter Password"; cin >> pwd;
      if(strcmp(pwd,"ict")==0)
	 k=3;
      else
      {
	 gotoxy(1,20); cout << "Invalid Password";
	 gotoxy(15,1); cout << "                ";
      }
   }
if(k!=4)
  {clrscr(); cout << "Access Denied";}
else
  {clrscr(); gotoxy(35,12); cout << "Welcome";}
getch();
}
