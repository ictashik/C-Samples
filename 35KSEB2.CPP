#include "conio.h"
#include "iostream.h"
main()
{
int un; float ch; clrscr();
cout << "Enter Units         : "; cin >> un;
if(un < 101) ch=un * 2.9;
else if(un<201) ch=(un-100)*3.4+290;
else if(un<301) ch=(un-200)*4.5+(290+340);
else if(un<401) ch=(un-300)*6.1+(290+340+450);
else if(un<501) ch=(un-400)*7.3+(290+340+450+610);
else if(un<601) ch=un*5.5;
else if(un<701) ch=un*6.2;
else if(un<801) ch=un*6.5;
else if(un<1001) ch=un*6.7;
else ch=un*7.5;
cout << "\n Charge = " << ch;
getch();
}
