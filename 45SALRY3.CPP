#include "conio.h"
#include "iostream.h"
#include "stdio.h"
main()
{
int eno;
char ename[25];
float bp,da,hra,ra,ma,gp,pf,gis,tax,ded,np;
clrscr();
gotoxy(27,2);printf("Vaidyaratnam P.S. Varier's");
gotoxy(32,3);printf("Arya Vaidya Sala");
gotoxy(35,4);printf("Kottakkal");
gotoxy(33,6);printf("Salary Report\n");
printf("********************************************************************************\n");
gotoxy(14,8);printf("Employee No : "); scanf("%d",&eno);
gotoxy(45,8);printf("Name : "); scanf("%s",&ename);
printf("********************************************************************************\n");
gotoxy(30,11);printf("Basic Salary : "); scanf("%f",&bp);

if(bp<=5000)
{
da=bp*30/100; hra=500; ra=bp*3/100; ma=300;
gp=bp+da+hra+ra+ma;
pf=gp*5/100;gis=gp*2/200; tax=0;
}
else if(bp>5000 && bp<=10000)
{
da=bp*35/100; hra=750; ra=bp*4/100; ma=500;
gp=bp+da+hra+ra+ma;
pf=gp*7/100;gis=gp*3/200; tax=gp*5/100;
}
else
{
da=bp*40/100; hra=1000; ra=bp*5/100; ma=750;
gp=bp+da+hra+ra+ma;
pf=gp*10/100;gis=gp*5/200; tax=gp*10/100;
}

ded=pf+gis+tax;
np=gp-ded;

gotoxy(25,11); printf("Basic Pay               : %0.2f",bp);
gotoxy(25,12);printf("Dearness Allowance      : %0.2f",da);
gotoxy(25,13);printf("House Rent Allowance    : %0.2f",hra);
gotoxy(25,14);printf("Recreation Allowance    : %0.2f",ra);
gotoxy(25,15);printf("Medical Allowance       : %0.2f",ma);
textcolor(1);
gotoxy(25,16);cprintf("Gross Pay               : %0.2f",gp);
gotoxy(25,17);printf("Provident Fund          : %0.2f",pf);
gotoxy(25,18);printf("General Insurance       : %0.2f",gis);
gotoxy(25,19);printf("Income Tax              : %0.2f",tax);
textcolor(4);
gotoxy(25,20);cprintf("Total Deductions        : %0.2f",ded);
textcolor(10);
gotoxy(25,21);cprintf("Nett Pay                : %0.2f",np);
printf("\n\n********************************************************************************\n");
getch();
}
