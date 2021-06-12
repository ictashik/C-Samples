#include "conio.h"
#include "iostream.h"
main()
{
long int inc;
float tax;
clrscr();
cout << "Enter Income : "; cin >> inc;

if(inc<=200000) tax=0;
if(inc>200000 && inc<=500000) tax=(inc-200000)*10/100;
if(inc>500000 && inc<=1000000) tax=(inc-500000)*20/100+30000;
if(inc>1000000) tax=(inc-1000000)*30/100+130000;

cout << "\nTax = " << tax;
getch();

}
