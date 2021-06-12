#include "conio.h"
#include "iostream.h"
main()
{
int a[5],b;
clrscr();
a[0]=10;
a[1]=8;
a[2]=35;
a[3]=4;
a[4]=50;
cout << "Type a number : "; cin >> b;
cout << a[b-1];
getch();
}