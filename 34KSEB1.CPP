#include "conio.h"
#include "iostream.h"
#include "stdio.h"
// KSEB BILLING PROGRAM
main()
{
float un, cpu, ch;
clrscr();
cout << "Enter Units:" ; cin >> un;
if(un <=100) cpu = 6;
else if(un <= 200) cpu = 6.7;
else if(un <= 300) cpu = 7.4;
else if(un <= 500) cpu = 8;
else cpu=9.3;
ch = cpu * un;
cout << "\nUnits           = " << un;
cout << "\nCharge Per Unit = " << cpu;
cout << "\nCharge          = " << ch;
getch();
}
