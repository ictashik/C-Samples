#include "conio.h"
#include "iostream.h"
main()
{
char a;
int k;
clrscr();
for(k=1;k<2;k++)
{
clrscr();
cout << "Type a small letter : " ; cin >> a;
if (a<'a' || a>'z')
k=k-1;
}
cprintf("%c",a-32);
getch();
}
