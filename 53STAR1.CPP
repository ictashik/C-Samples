#include "conio.h"
#include "iostream.h"
#include "stdio.h"
main()
{
char w;
int a,b;
clrscr();
cout<<(" Type a Letter : ");w=getch();
for(a=1;a<10;a++)
{
  for(b=1;b<=a;b++)
  {
  cprintf("%c",w);
  }
  printf("\n");
  textcolor(a);
}
getch();
}