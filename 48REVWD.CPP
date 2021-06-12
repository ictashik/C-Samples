#include "conio.h"
#include "iostream.h"
#include "string.h"
main()
{
char w[25];
int n,a;
clrscr();
cout << "Enter a word "; cin >> w;









n=strlen(w);
for(a=n-1;a>=0;a--)
cout << w[a];
getch();
}
