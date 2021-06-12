#include "conio.h"
#include "iostream.h"
main()
{
int a,b;
clrscr();
cout << "Enter 2 Numbers : ";
cin >> a >> b;
cout << "The biggest number is ";
if(a>b) cout << a;
else cout << b;
getch();
}