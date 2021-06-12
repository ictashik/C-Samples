#include "conio.h"
#include "iostream.h"
#include "stdio.h"
#include "string.h"
main()
{
char w[25];
int l,a,b,c;
clrscr();
cout<<"Enter a word"; cin>>w;
l=strlen(w);
for(c=0;c<6;c++)
{
  for(a=0;a<l;a++)
  {
    cout << w[a];
    for(b=0;b<c;b++)
      cout<<" ";
  }
  cout<<"\n";
}
getch();
}