#include "conio.h"
#include "iostream.h"
main()
{
int e,s,m;
clrscr();
cout<<"Enter Marks in English, Science and Maths : ";
cin>>e>>s>>m;
if((e>=50 && s>=50) || (e>=50 && m>=50) || (s>=50) && (m>=50))
cout<<" Passed";
else
cout<<" Failed";
getch();
}
