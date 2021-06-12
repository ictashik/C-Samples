#include "conio.h"
#include "iostream.h"
main()
{
int a,n,s=0;
clrscr();
cout<<"Enter a number"; cin>>n;
clrscr();
for(a=1;a<=n;a=a+1)
s=s+a;
cout<<"The sum of numbers up to "<<n<<" is "<<s;
getch();
}