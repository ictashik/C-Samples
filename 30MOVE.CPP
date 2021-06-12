#include "conio.h"
#include "iostream.h"
main()
{
int x,s;
clrscr();
for(x=1;x<78;x++)
{
 gotoxy(x,12); cout << " ict";
 for(s=0; s<20000; s++)
  {gotoxy(1,1); cout<<" ";}
}
getch();
}