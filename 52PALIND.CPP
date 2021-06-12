#include "conio.h"
#include "iostream.h"
#include "string.h"
main()
{
char w[30]; int a,b;
clrscr();
cout << "Enter A Word   "; cin >> w;
a=strlen(w)-1;
for(b=0;b<strlen(w);b++)
{
 if(w[b] != w[a])
 {
 cout << "Not a Palindrome";
 break;
 }
 else if(a == 0) cout << "Palindrome";
 a--;
}
getch();
}