#include "conio.h"
#include "iostream.h"
#include "stdio.h"
main()
{
float bp,da,hra,ra,ma,gp,pf,gis,tax,ded,np;
clrscr();
cout << "Please type Basic Pay : "; cin >> bp;
da=bp*30/100; hra=500; ra=bp*.5/100; ma=300;
gp=bp+da+hra+ra+ma;
pf=gp*5/100;gis=gp*2/200; tax=gp*4/100;
ded=pf+gis+tax;
np=gp-ded;
printf("\n Basic Pay                  : %0.2f",bp);
printf("\n Dearness Allowance         : %0.2f",da);
printf("\n House Rent Allowance       : %0.2f",hra);
printf("\n Recreation Allowance       : %0.2f",ra);
printf("\n Medical Allowance          : %0.2f",ma);
printf("\n Gross Pay                  : %0.2f",gp);
printf("\n Provident Fund             : %0.2f",pf);
printf("\n General Insurance          : %0.2f",gis);
printf("\n Income Tax                 : %0.2f",tax);
printf("\n Total Deductions           : %0.2f",ded);
printf("\n Nett Pay                   : %0.2f",np);
getch();
}
