#include "conio.h"
#include "iostream.h"
#include "math.h"
main()
{
float p,n,r,i,ai;
clrscr();
cout << "Please type amount           : "; cin >> p;
cout << "Please type no. of years     : "; cin >> n;
cout << "Please type rate of Interest : "; cin >> r;
i=p*n*r/100;
ai=p*(pow(1+r/100,n));
cout << "Simple Interest              = " << i;
cout << "\nAmount + Compound Interest   = " << ai;
cout << "\nCompound Interest            = " << ai-p;
getch();
}