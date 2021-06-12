#include "conio.h"
#include "iostream.h"
main()
{
int h,m,s,k;
clrscr();
for(h=1;h<13;h++)
 for(m=0;m<60;m++)
  for(s=0;s<60;s++)
   {
    gotoxy(36,12);
    cout << h << " : " << m << " : " << s << " ";
    for(k=0;k<500;k++)
     {gotoxy(1,1); cout << " ";}
   }
getch();
}