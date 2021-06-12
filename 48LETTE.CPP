#include "conio.h"
#include "iostream.h"
main()
{
char w[25];
int a;
clrscr();
cout << "Enter a word   "; cin >> w;
cout << "Enter a number "; cin >> a;
cout << w[a-1];
getch();
}
