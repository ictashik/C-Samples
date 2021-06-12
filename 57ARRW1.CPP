#include "conio.h"
#include "iostream.h"
main()
{
int n; clrscr();
char w[5][25]={"Basheer","Babu","John","Akbar","Suresh"};
cout << "Enter Class Number"; cin >> n;
cout << w[n-1];
getch();
}
