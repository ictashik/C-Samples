#include "conio.h"
#include "iostream.h"
#include "stdio.h"
main()
{
char a;
FILE *f;
f=fopen("e:\\student.txt","r");
clrscr();

while(a!=EOF) //End of File
{
 a=getc(f);
 cout << a;
}
getch();
}
