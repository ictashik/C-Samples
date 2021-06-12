#include "conio.h"
#include "iostream.h"
main()
{
int n[5],a,b,c;
clrscr();
n[0]=10; n[1]=8; n[2]=50; n[3]=4; n[4]=35;
for(a=0;a<5;a++)
{
 for(b=a+1;b<5;b++)
  {
  if(n[a] > n[b])
   {c=n[a]; n[a]=n[b]; n[b]=c;}
  }
}
for(a=0;a<5;a++)
 cout<<(n[a]) << " ";
getch();
}