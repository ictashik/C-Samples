#include "conio.h"
#include "iostream.h"
#include "string.h"
main()
{
char p[20];
clrscr();
cout << "Enter Paswword"; cin >> p;
if(strcmp(p,"ict")==0)
 cout << "Yes";
else
 cout << "No";
getch();
}
