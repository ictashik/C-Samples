#include "conio.h"
#include "iostream.h"
main()
{
int a,n,x=1,y=1;
clrscr();
cout<<"Enter a number";cin>>n;
clrscr();
for(a=1;a<=n;a=a+1)
 {
  gotoxy(x,y); cout<<a;
  y=y+1;
  if(y==26) {y=1; x=x+4;}
 }
getch();
}