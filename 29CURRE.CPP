#include "conio.h"
#include "iostream.h"
main()
{
int n;
clrscr();
cout<<" Enter an amount "; cin>>n;
cout<<"\n 1000 = " << n/1000;
n=n%1000;
cout<<"\n 500 = "<< n/500;
n=n%500;
cout<<"\n 100 = "<< n/100;
n=n%100;
cout<<"\n 50 = " << n/50;
n=n%50;
cout<<"\n 20 = "<< n/20;
n=n%20;
cout<<"\n 10 = "<< n/10;
n=n%10;
cout<<"\n 5 = " <<n/5;
n=n%5;
cout<<"\n 2 = " <<n/2;
n=n%2;
cout<<"\n 1 = " <<n;
getch();
}