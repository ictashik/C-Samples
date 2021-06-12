#include "conio.h"
#include "iostream.h"
#include "stdio.h"
#include "string.h"
main()
{
char w[25];
int l,a,b,c;
clrscr();
printf("Enter a word"); scanf("%s",&w);
l=strlen(w);

for(c=0;c<9;c++)
{
for(a=0;a<l;a++)
{
printf(" %c",w[a]);
for(b=0;b<=c;b++)
{
 printf(" ");
}
}
printf("\n");
}
getch();
}