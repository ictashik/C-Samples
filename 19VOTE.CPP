#include "conio.h"
#include "iostream.h"
#include "stdio.h"
main()
{
int a;
char nm[10], s, *ss, *e="";
//char nm[10], s, *ss="Mr. ", *e="";
clrscr();
cout << "Enter your name      "; cin >> nm;
ch1:
 //cout << "Enter your sex [M/F] "; cin >> s;
 cout << "Enter your sex [M/F] "; s=getch(); cout << s << "\n";
 if(s!='m' && s!='M' && s!='f' && s!='F') goto ch1;
ch2:
 cout << "Enter your age       "; cin >> a;
 if(a<1 || a>125) goto ch2;
if(s=='m' || s=='M') ss="Mr. "; else ss="Mrs. ";
//if(s=='f' || s=='F') ss="Mrs. ";
if(a<18) e=" not";
cout << ss << nm << ", You are" << e << " Eligible to vote";
getch();
}