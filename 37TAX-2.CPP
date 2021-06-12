#include "conio.h"
#include "iostream.h"
main()
{
int age;
long int inc;
float tax;
clrscr();
cout <<  "Enter Income: "; cin >> inc;
cout <<  "Enter Age   : "; cin >> age;

if(age<61)
{
if(inc<=200000)tax=0;
if(inc>200000 && inc<=500000) tax=(inc-200000)*10/100;
if(inc>500000 && inc<=1000000) tax=(inc-500000)*20/100+30000;
if(inc>1000000) tax=(inc-1000000)*30/100+130000;
}

if(age>60 && age<81)
{
if(inc<=250000)tax=0;
if(inc>250000 && inc<=500000) tax=(inc-250000)*10/100;
if(inc>500000 && inc<=1000000) tax=(inc-500000)*20/100+25000;
if(inc>1000000) tax=(inc-1000000)*30/100+125000;
}

if(age>80)
{
if(inc<=500000)tax=0;
if(inc>500000 && inc<=1000000) tax=(inc-500000)*20/100;
if(inc>1000000) tax=(inc-1000000)*30/100+100000;
}

cout << "\nIncome = " << inc;
cout << "\nTax    = " << tax;
getch();

}
