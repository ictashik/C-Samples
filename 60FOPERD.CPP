#include "conio.h"
#include "iostream.h"
#include "stdio.h"
main()
{
char a[30],b[30];
FILE *f;
f=fopen("E:\\STUDENT.txt","r");
fscanf(f,"%s",&a);
fscanf(f,"%s",&b);
clrscr();
cout << a;
cout << "\n" << b;
fclose(f);
getch();
}
