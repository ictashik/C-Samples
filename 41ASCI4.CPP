#include "conio.h"
#include "iostream.h"
main()
{
int k;
clrscr();
for(k=1;k<255;k++)
{
cprintf("\n\r %d %c",k,k);
if(k%25==0) getch();
}
getch();
}
