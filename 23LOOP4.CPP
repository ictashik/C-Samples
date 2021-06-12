#include "conio.h"
#include "iostream.h"
main()
{
int a,n;
clrscr();
cout<<"Enter a number"; cin>>n;
clrscr();
for(a=1;a<11;a=a+1)
cout<<a<<"x"<<n<<"="<<a*n<<endl;
getch();
}