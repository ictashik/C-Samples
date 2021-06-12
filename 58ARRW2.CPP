#include "conio.h"
#include "iostream.h"
main()
{
int n,a;
char w[5][30];
clrscr();
for(a=0;a<5;a++)
 {
 cout << "Enter Name - " << a+1; cin >> w[a];}
cout << (" Enter Class Number"); cin >> n;
cout << w[n-1];
getch();
}
