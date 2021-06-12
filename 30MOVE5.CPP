#include "conio.h"
#include "iostream.h"
#include "string.h"
main()
{
int x,s,l;
char w[20];
clrscr();
cout<<"Enter a word "; cin>>w;
clrscr();
l=strlen(w);
for(x=1;x<80-l;x++)
{
gotoxy(x,12); cout<<" "<<w;
gotoxy((80-x)-l,12); cout<<w<<" ";
for(s=0;s<15000;s++)
{gotoxy(1,1);cout<<" ";}
}
getch();
}