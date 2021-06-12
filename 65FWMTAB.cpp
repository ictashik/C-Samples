#include "conio.h"
#include "iostream.h"
#include "stdio.h"
main()
{
int a,n;
FILE *f;
printf("Enter a number ");scanf("%d",&n);
f=fopen("c:\\ctest.txt","w");
for (a=1;a<=10;a++)
fprintf(f,"%d x %d = %d\n",a,n,a*n);
fclose(f);
}
