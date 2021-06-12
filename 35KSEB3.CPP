#include "conio.h"
#include "iostream.h"
main()
{
int un,ph,wt,k=0;
float ch;
clrscr();
cout <<  "Enter units : "; cin >> un;

if (un<228)
{
  abc:
  cout <<  "Enter Phase (1 or 3) : "; cin >> ph;
  if(ph!=1 && ph!=3) goto abc;
}

if(un<=80) ch=un*1.15;
if(un>80 && un<=160) ch=(un-80)*1.9+92;
if(un>160 && un<=240) ch=(un-160)*2.4+244;
if(un>240 && un<=300) ch=(un-240)*3+436;
if(un>300 && un<=400) ch=(un-300)*3.65+616;
if(un>400 && un<=600) ch=(un-400)*4.3+981;
if(un>600 && un<=1000) ch=(un-600)*5.3+1841;
if(un>1000) ch=(un-1000)*5.45+3961;

if (ph==1 && ch<85) ch=85;
if (ph==3 && ch<405) ch=405;

if (un<41 && ph==1)
{
  cout <<  "Enter Connected Load (Watts) : "; cin >> wt;
  if (wt<=500) ch=0;
}

cout << "\ncharge = " << ch;

getch();
}