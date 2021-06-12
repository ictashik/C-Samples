#include "conio.h"
#include "iostream.h"
#include "stdio.h"
main()
{
int n;
FILE *f;
f=fopen("d:\\ctest.txt","w");
for (n=1;n<10;n++)
fprintf(f,"%d\n",n);
fclose(f);
}
