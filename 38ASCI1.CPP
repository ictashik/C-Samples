#include "conio.h"
#include "iostream.h"
main()
{
char a;
clrscr();
cout << "Type a letter ";
a=getch();
cprintf ("\n\rASCII Code of %c is %d",a,a);
getch();
}
