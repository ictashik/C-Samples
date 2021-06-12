#include "conio.h"
#include "iostream.h"
main()
{
int m,k=0;
clrscr();

while (k==0)
{
cout << "Enter Marks [1-100]" ; cin >> m;
if (m>0 && m<101) k=1;
}

cout << m;

getch();
}
