#include "conio.h"
#include "iostream.h"
void main()
{
int a,b;
clrscr();
cout<<("Enter the number; "); cin>>a;
for(b=a;b>0;b=b/10)
cout<<b%10;
getch();
}
