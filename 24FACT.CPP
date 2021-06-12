#include "conio.h"
#include "iostream.h"
main()
{
int a,n,s=1;
clrscr();
cout<<"Enter a number"; cin>>n;
clrscr();
for(a=1;a<=n;a=a+1)
//s=s*a;
s*=a;
cout<<"The factorial of "<<n<<" is "<<s;
getch();
}