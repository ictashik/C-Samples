#include "conio.h"
#include "iostream.h"
main()
{
int en,m1,m2,hi,ph,ch,bi,ss,mt,it;
clrscr();
gotoxy(30,3);cout<<"SSLC GRADE SYSTEM";
gotoxy(30,4);cout<<"*****************";
gotoxy(11,6);cout<<"SUBJECT";
gotoxy(34,6);cout<<"MARK";
gotoxy(58,6);cout<<"GRADE";
gotoxy(8,7);
cout<<"---------------------------------------------------------------";
gotoxy(11,9);cout<<"ENGLISH";
gotoxy(11,10);cout<<"MALAYALAM1";
gotoxy(11,11);cout<<"MALAYALAM2";
gotoxy(11,12);cout<<"HINDI";
gotoxy(11,13);cout<<"PHYSICS";
gotoxy(11,14);cout<<"CHEMISTRY";
gotoxy(11,15);cout<<"BIOLOGY";
gotoxy(11,16);cout<<"SS";
gotoxy(11,17);cout<<"MATHS";
gotoxy(11,18);cout<<"IT";

gotoxy(35,9); cin>>en;
gotoxy(60,9);
if(en>89 && en<101) {textcolor(2); cprintf("A+");}
if(en<90 && en>79) cout<<"A";
if(en<80 && en>69) cout<<"B+";
if(en<70 && en>59) cout<<"B";
if(en<60 && en>49) cout<<"C+";
if(en<50 && en>39) cout<<"C";
if(en<40 && en>29) cout<<"D+";
if(en<30) {textcolor(4); cprintf("D");}

gotoxy(35,10); cin>>m1;
gotoxy(60,10);
if(m1>=90 && m1<=100) {textcolor(2); cprintf("A+");}
if(m1<=89 && m1>=80) cout<<"A";
if(m1<=79 && m1>=70) cout<<"B+";
if(m1<=69 && m1>=60) cout<<"B";
if(m1<=59 && m1>=50) cout<<"C+";
if(m1<=49 && m1>=40) cout<<"C";
if(m1<=39 && m1>=30) cout<<"D+";
if(m1<30) {textcolor(4);cprintf("D");}

gotoxy(35,11); cin>>m2;
gotoxy(60,11);
if(m2>=90 && m2<=100) {textcolor(2); cprintf("A+");}
if(m2<=89 && m2>=80) cout<<"A";
if(m2<=79 && m2>=70) cout<<"B+";
if(m2<=69 && m2>=60) cout<<"B";
if(m2<=59 && m2>=50) cout<<"C+";
if(m2<=49 && m2>=40) cout<<"C";
if(m2<=39 && m2>=30) cout<<"D+";
if(m2<30) {textcolor(4);cprintf("D");}

gotoxy(35,12); cin>>hi;
gotoxy(60,12);
if(hi>=90 && hi<=100) {textcolor(2); cprintf("A+");}
if(hi<=89 && hi>=80) cout<<"A";
if(hi<=79 && hi>=70) cout<<"B+";
if(hi<=69 && hi>=60) cout<<"B";
if(hi<=59 && hi>=50) cout<<"C+";
if(hi<=49 && hi>=40) cout<<"C";
if(hi<=39 && hi>=30) cout<<"D+";
if(hi<30) {textcolor(4);cprintf("D");}

gotoxy(35,13); cin>>ph;
gotoxy(60,13);
if(ph>=90 && ph<=100) {textcolor(2); cprintf("A+");}
if(ph<=89 && ph>=80) cout<<"A";
if(ph<=79 && ph>=70) cout<<"B+";
if(ph<=69 && ph>=60) cout<<"B";
if(ph<=59 && ph>=50) cout<<"C+";
if(ph<=49 && ph>=40) cout<<"C";
if(ph<=39 && ph>=30) cout<<"D+";
if(ph<30) {textcolor(4);cprintf("D");}

gotoxy(35,14); cin>>ch;
gotoxy(60,14);
if(ch>=90 && ch<=100) {textcolor(2); cprintf("A+");}
if(ch<=89 && ch>=80) cout<<"A";
if(ch<=79 && ch>=70) cout<<"B+";
if(ch<=69 && ch>=60) cout<<"B";
if(ch<=59 && ch>=50) cout<<"C+";
if(ch<=49 && ch>=40) cout<<"C";
if(ch<=39 && ch>=30) cout<<"D+";
if(ch<30) {textcolor(4);cprintf("D");}

gotoxy(35,15); cin>>bi;
gotoxy(60,15);
if(bi>=90 && bi<=100) {textcolor(2); cprintf("A+");}
if(bi<=89 && bi>=80) cout<<"A";
if(bi<=79 && bi>=70) cout<<"B+";
if(bi<=69 && bi>=60) cout<<"B";
if(bi<=59 && bi>=50) cout<<"C+";
if(bi<=49 && bi>=40) cout<<"C";
if(bi<=39 && bi>=30) cout<<"D+";
if(bi<30) {textcolor(4);cprintf("D");}

gotoxy(35,16); cin>>ss;
gotoxy(60,16);
if(ss>=90 && ss<=100) {textcolor(2); cprintf("A+");}
if(ss<=89 && ss>=80) cout<<"A";
if(ss<=79 && ss>=70) cout<<"B+";
if(ss<=69 && ss>=60) cout<<"B";
if(ss<=59 && ss>=50) cout<<"C+";
if(ss<=49 && ss>=40) cout<<"C";
if(ss<=39 && ss>=30) cout<<"D+";
if(ss<30) {textcolor(4);cprintf("D");}

gotoxy(35,17); cin>>mt;
gotoxy(60,17);
if(mt>=90 && mt<=100) {textcolor(2); cprintf("A+");}
if(mt<=89 && mt>=80) cout<<"A";
if(mt<=79 && mt>=70) cout<<"B+";
if(mt<=69 && mt>=60) cout<<"B";
if(mt<=59 && mt>=50) cout<<"C+";
if(mt<=49 && mt>=40) cout<<"C";
if(mt<=39 && mt>=30) cout<<"D+";
if(mt<30) {textcolor(4);cprintf("D");}

gotoxy(35,18); cin>>it;
gotoxy(60,18);
if(it>=90 && it<=100) {textcolor(2); cprintf("A+");}
if(it<=89 && it>=80) cout<<"A";
if(it<=79 && it>=70) cout<<"B+";
if(it<=69 && it>=60) cout<<"B";
if(it<=59 && it>=50) cout<<"C+";
if(it<=49 && it>=40) cout<<"C";
if(it<=39 && it>=30) cout<<"D+";
if(it<30) {textcolor(4);cprintf("D");}

gotoxy(8,20);
cout<<"----------------------------------------------------------------";
gotoxy(30,21); cout<<"Result : ";
if (en<30||m1<30||m2<30||hi<30||ph<30||ch<30||bi<30||ss<30||it<30||mt<30)
{textcolor(4); cprintf("Failed");}
else
{textcolor(2); cprintf("Passed");}
getch();
}
