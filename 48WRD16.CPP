#include "conio.h"
#include "iostream.h"
#include "stdio.h"

main()
{
char w[25];
int clr;
clrscr();
cout<<"Enter a word"; cin>>w;
for(clr=1;clr<17;clr++)
{
 textcolor(clr);
 textbackground(clr+2);
 cprintf(" %s\r\n",w);
}
getch();
}