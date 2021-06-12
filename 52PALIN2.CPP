#include "conio.h"
#include "iostream.h"
#include "string.h"
main()
{
char w[30]; int a,b,c;
clrscr();
cout << "Enter A Word   "; cin >> w;
a=strlen(w)-1;
b=strlen(w)/2;
for(c=0;c<=b;c++)
{
 if(w[a] != w[c])
 {
 cout << "Not a Palindrome";
 break;
 }
 else if(a == b) cout << "Palindrome";
 a--;
}
getch();
}