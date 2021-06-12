#include "conio.h"
#include "iostream.h"
#include "stdio.h"
main()
{
int a,b,n;
FILE *f;
clrscr();
printf("Enter Limit ");scanf("%d",&n);
f=fopen("c:\\ctest.txt","w");
for(b=1;b<=n;b++)
{
 fprintf(f,"%s %d\n","Multiplication Table of",b);
 for (a=1;a<=10;a++)
 fprintf(f,"%d x %d = %d\n",a,b,a*b);
 fprintf(f,"%s","******************\n");
}
fclose(f);
}