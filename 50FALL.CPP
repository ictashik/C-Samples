#include "conio.h"
#include "iostream.h"
#include "string.h"
#include "stdio.h"
main()
{
char w[20];
int y=0,x,l,a,b,s;
clrscr();
cout<<"Enter a word : "; gets(w);
clrscr();
l=strlen(w);
x=40-(l/2);
for(a=0;a<l;a++)
  {
    for(y=2;y<26;y++)
    {
      gotoxy(x,y); cout<<w[a];
      gotoxy(x,y-1); cout<<" ";
      for (s=0;s<21000;s++)
	{gotoxy(1,1); cout<<"";}
    }
    x++;
  }
getch();
}
