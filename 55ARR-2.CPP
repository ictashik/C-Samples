#include "conio.h"
#include "iostream.h"
main()
{
int a[6],b,t=0;
clrscr();
cout << "Please Enter Marks : \n";
for(b=0;b<5;b++)
{
 cout << "Mark (" << b+1 << ") ";
 cin >> a[b];
}
for(b=0;b<5;b++)
t=t+a[b];
cout << "\n\n Total = " << t;
getch();
}