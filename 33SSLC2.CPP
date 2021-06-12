#include "conio.h"
#include "iostream.h"
#include "stdio.h"
main()
{
char nm[25];
int eng,ml1,ml2,hin,phy,che,bio,ss,it,mat;
char *ml1g,*ml2g,*engg,*hing,*phyg,*cheg,*biog,*ssg,*itg,*matg;
long int reg;
clrscr();
cout << "\n\tEnter Your Reg. No       :"; cin >> reg;
cout << "\n\tEnter Your Name          :"; cin >> nm;
cout << "\n\n\tEnter Your Marks Below :\n\n";
cout << "\tMalayalam I              :"; cin >> ml1;
cout << "\tMalayalam II             :"; cin >> ml2;
cout << "\tEnglish                  :"; cin >> eng;
cout << "\tHindi                    :"; cin >> hin;
cout << "\tPhysics                  :"; cin >> phy;
cout << "\tChemistry                :"; cin >> che;
cout << "\tBiology                  :"; cin >> bio;
cout << "\tSocial Science           :"; cin >> ss;
cout << "\tMaths                    :"; cin >> mat;
cout << "\tInformation Technology   :"; cin >> it;
clrscr();

if (ml1>=90 && ml1<=100) ml1g="A+";
if (ml1>=80 && ml1<90) ml1g="A";
if (ml1>=70 && ml1<80) ml1g="B+";
if (ml1>=60 && ml1<70) ml1g="B";
if (ml1>=50 && ml1<60) ml1g="C+";
if (ml1>=40 && ml1<50) ml1g="C";
if (ml1>=30 && ml1<40) ml1g="D+";
if (ml1<30) ml1g="D";

if (ml2>=90 && ml2<=100) ml2g="A+";
if (ml2>=80 && ml2<90) ml2g="A";
if (ml2>=70 && ml2<80) ml2g="B+";
if (ml2>=60 && ml2<70) ml2g="B";
if (ml2>=50 && ml2<60) ml2g="C+";
if (ml2>=40 && ml2<50) ml2g="C";
if (ml2>=30 && ml2<40) ml2g="D+";
if (ml2<30) ml2g="D";

if (eng>=90 && eng<=100) engg="A+";
if (eng>=80 && eng<90) engg="A";
if (eng>=70 && eng<80) engg="B+";
if (eng>=60 && eng<70) engg="B";
if (eng>=50 && eng<60) engg="C+";
if (eng>=40 && eng<50) engg="C";
if (eng>=30 && eng<40) engg="D+";
if (eng<30) engg="D";

if (hin>=90 && hin<=100) hing="A+";
if (hin>=80 && hin<90) hing="A";
if (hin>=70 && hin<80) hing="B+";
if (hin>=60 && hin<70) hing="B";
if (hin>=50 && hin<60) hing="C+";
if (hin>=40 && hin<50) hing="C";
if (hin>=30 && hin<40) hing="D+";
if (hin<30) hing="D";

if (phy>=90 && phy<=100) phyg="A+";
if (phy>=80 && phy<90) phyg="A";
if (phy>=70 && phy<80) phyg="B+";
if (phy>=60 && phy<70) phyg="B";
if (phy>=50 && phy<60) phyg="C+";
if (phy>=40 && phy<50) phyg="C";
if (phy>=30 && phy<40) phyg="D+";
if (phy<30) phyg="D";

if (che>=90 && che<=100) cheg="A+";
if (che>=80 && che<90) cheg="A";
if (che>=70 && che<80) cheg="B+";
if (che>=60 && che<70) cheg="B";
if (che>=50 && che<60) cheg="C+";
if (che>=40 && che<50) cheg="C";
if (che>=30 && che<40) cheg="D+";
if (che<30) cheg="D";

if (bio>=90 && bio<=100) biog="A+";
if (bio>=80 && bio<90) biog="A";
if (bio>=70 && bio<80) biog="B+";
if (bio>=60 && bio<70) biog="B";
if (bio>=50 && bio<60) biog="C+";
if (bio>=40 && bio<50) biog="C";
if (bio>=30 && bio<40) biog="D+";
if (bio<30) biog="D";

if (ss>=90 && ss<=100) ssg="A+";
if (ss>=80 && ss<90) ssg="A";
if (ss>=70 && ss<80) ssg="B+";
if (ss>=60 && ss<70) ssg="B";
if (ss>=50 && ss<60) ssg="C+";
if (ss>=40 && ss<50) ssg="C";
if (ss>=30 && ss<40) ssg="D+";
if (ss<30) ssg="D";

if (it>=90 && it<=100) itg="A+";
if (it>=80 && it<90) itg="A";
if (it>=70 && it<80) itg="B+";
if (it>=60 && it<70) itg="B";
if (it>=50 && it<60) itg="C+";
if (it>=40 && it<50) itg="C";
if (it>=30 && it<40) itg="D+";
if (it<30) itg="D";

if (mat>=90 && mat<=100) matg="A+";
if (mat>=80 && mat<90) matg="A";
if (mat>=70 && mat<80) matg="B+";
if (mat>=60 && mat<70) matg="B";
if (mat>=50 && mat<60) matg="C+";
if (mat>=40 && mat<50) matg="C";
if (mat>=30 && mat<40) matg="D+";
if (mat<30) matg="D";

gotoxy(15,8) ;cout << "Subject";gotoxy(45,8);cout << "Mark";gotoxy(60,8);cout << "Grade";
gotoxy(15,10);cout << "Malayalam I";gotoxy(45,10);cout << ml1;gotoxy(60,10);cout << ml1g;
gotoxy(15,11);cout << "Malayalam II";gotoxy(45,11);cout << ml2;gotoxy(60,11);cout << ml2g;
gotoxy(15,12);cout << "English";gotoxy(45,12);cout << eng;gotoxy(60,12);cout << engg;
gotoxy(15,13);cout << "Hindi";gotoxy(45,13);cout << hin;gotoxy(60,13);cout << hing;
gotoxy(15,14);cout << "Physics";gotoxy(45,14);cout << hin;gotoxy(60,14);cout << phyg;
gotoxy(15,15);cout << "Chemistry";gotoxy(45,15);cout << che;gotoxy(60,15);cout << cheg;
gotoxy(15,16);cout << "Biology";gotoxy(45,16);cout << bio;gotoxy(60,16);cout << biog;
gotoxy(15,17);cout << "Social Studies";gotoxy(45,17);cout << ss;gotoxy(60,17);cout << ssg;
gotoxy(15,18);cout << "Information Technology";gotoxy(45,18);cout << it;gotoxy(60,18);cout << itg;
gotoxy(15,19);cout << "Mathematics";gotoxy(45,19);cout << mat;gotoxy(60,19);cout << matg;
gotoxy(35,21);cout << "Result : ";
if (eng<30||ml1<30||ml2<30||hin<30||phy<30||che<30||bio<30||ss<30||it<30||mat<30)
{
textcolor(4);cprintf ("Failed");
}
else
{
textcolor(10);cprintf ("Passed");
}
getch();
}
