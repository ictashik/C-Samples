#include <conio.h>
#include <iostream.h>
#include <fstream.h>
void main ()
{
char nm[30],s,fn[30],hn[30],pl[30];
long int ph;
ofstream a;
a.open ("d:\\ict.txt");
clrscr();
cout << "Enter Name          : "; cin >> nm;
cout << "Enter Sex [m/f]     : "; cin >> s;
cout << "Enter Father's Name : "; cin >> fn;
cout << "Enter House Name    : "; cin >> hn;
cout << "Enter Post          : "; cin >> pl;
cout << "Enter Phone         : "; cin >> ph;
a << nm << "\n";
if (s=='m') a << "S/o. " << fn << "\n";
else a<< "D/o. " << fn << "\n";
a << hn << " House\n";
a << "P.O. " << pl << "\n";
a << "Ph: " << ph;
a.close();
}