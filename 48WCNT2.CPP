#include "conio.h"
#include "iostream.h"
#include "stdio.h"
#include "string.h"
main()
{
char w[25];
int n,a,s=1;
clrscr();
cout << "Enter a word " ; gets(w);
n=strlen(w);
for(a=0;a<n;a++)
if(w[a]==' ' && w[a+1]!=' ') s=s+1;
cout << s;
getch();
}
