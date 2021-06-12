#include "stdio.h"
#include "conio.h"
#include "iostream.h"
#include "string.h"
main()
{
char w[55];
int n,a,s=1;
clrscr();
cout << "Enter a sentence "; gets(w);
n=strlen(w);
for(a=0;a<n;a++)
if(w[a]==' ') s=s+1;
cout << s;
getch();
}
