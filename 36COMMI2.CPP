#include "conio.h"
#include "iostream.h"
main()
{
float s,c;
clrscr();
cout << "Enter Sales : "; cin >> s;
if(s<=10000) c=s*10/100;
else if (s<=20000) c=(s-10000)*11/100+1000;
else c=(s-20000)*12/100+2100;
cout << "\nCommission = " << c;
getch();

}
