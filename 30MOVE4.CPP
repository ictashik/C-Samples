#include "conio.h"
#include "iostream.h"
#include "string.h"
main()
{
int l,x,y,s;
char w[75];
clrscr();
cout << "Enter a word "; cin >> w;
clrscr();
l=strlen(w);
x=40-(l/2);
for(y=1;y<26;y++)
 {
 gotoxy(x,y); cout << w;
 gotoxy(x,y-1); cout << "                                          ";
 for(s=0;s<9000;s++)
  {gotoxy(1,1);cout << "";}
 }
getch();
}