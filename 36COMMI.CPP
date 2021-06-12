#include "conio.h"
#include "iostream.h"
main()
{
float s,c;
clrscr();
cout << "Enter Sales : "; cin >> s;
if(s<=10000) c=s*10/100;
else c=(s-10000)*11/100+1000;
cout << "\nCommission = " << c;
getch();

}
