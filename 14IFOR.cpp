#include "conio.h"
#include "iostream.h"
main()
{
int e,m;
clrscr();
cout<<"Enter Marks in English and Maths : ";
cin>>e>>m;
if(e<50 || m<50)
cout<<" Failed";
else
cout<<" Passed";
getch();
}