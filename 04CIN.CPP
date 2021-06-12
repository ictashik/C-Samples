#include "conio.h"
#include "iostream.h"
main()
{
float a,b,c,d,e,f;
clrscr();
cout << " Please type first No.  : ";
cin >> a;
cout << " Please type second No. : ";
cin >> b;
c = a+b;
d = a-b;
e = a*b;
f = a/b;
cout << "\n Addition Result       = " << c;
cout << "\n Subtraction Result    = " << d;
cout << "\n Multiplication Result = " << e;
cout << "\n Division Result       = " << f;
getch();
}
