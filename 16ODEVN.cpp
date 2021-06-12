#include "conio.h"
#include "iostream.h"
main()
{
int n;
clrscr();
cout<<" Please type a number:"; cin>>n;
if(n%2==0)
cout<<" Even";
else
cout<<" Odd";
getch();
}