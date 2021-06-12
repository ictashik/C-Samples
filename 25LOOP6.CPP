#include "conio.h"
#include "iostream.h"
main()
{
int a,n;
clrscr();
cout<<"Enter a number"; cin>>n;
clrscr();
for(a=1;a<=n;a=a+1)
{
 cout << endl << a;
 if(a%25==0) getch();
}
getch();
}