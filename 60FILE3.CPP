#include "conio.h"
#include "iostream.h"
#include"stdio.h"
main()
{
char n[25],grade[4];
long int reg;
int k=0,mal,ma,eng,hin,mat,phy,che,bio,ss,it;
FILE *f;
clrscr();
printf("\t\t\t\t SSLC MARK LIST");
printf("\nENTER YOUR NAME            :");scanf("%s",&n);
printf("\nTYPE YOUR REGISTER NUMBER  :");scanf("%ld",&reg);
printf("\n     MALAYALAM 1           :");scanf("%d",&mal);
printf("\n     MALAYALAM 2           :");scanf("%d",&ma);
printf("\n     ENGLISH               :");scanf("%d",&eng);
printf("\n     HINDI                 :");scanf("%d",&hin);
printf("\n     MATHS                 :");scanf("%d",&mat);
printf("\n     PHYSICS               :");scanf("%d",&phy);
printf("\n     CHEMISTRY             :");scanf("%d",&che);
printf("\n     BIOLOGY               :");scanf("%d",&bio);
printf("\n     SOCIAL SCIENCE        :");scanf("%d",&ss);
printf("\n     IT                    :");scanf("%d",&it);
clrscr();
f=fopen("E:\\SSLCOUT.txt","w");
fprintf(f,"                  S S L C  R E S U L T");
fprintf(f,"\n************************************************************");
fprintf(f,"\nNAME=%s",n);
fprintf(f,"\nREGISTER NO=%ld",reg);
fprintf(f,"\n************************************************************");
fprintf(f,"\nSUBJECT             MARK             GRADE");
fprintf(f,"\n-------             ----             -----");
fprintf(f,"\nMALAYALAM 1         %d                ",mal);
if(mal>=90 && mal<=100) fprintf(f,"A+");
if(mal>=80 && mal<90) fprintf(f,"A");
if(mal>=70 && mal<80) fprintf(f,"B+");
if(mal>=60 && mal<70) fprintf(f,"B");
if(mal>=50 && mal<60) fprintf(f,"C+");
if(mal>=40 && mal<50) fprintf(f,"C");
if(mal>=30 && mal<40) fprintf(f,"D+");
if(mal<30) fprintf(f,"D");

fprintf(f,"\nMALAYALAM 2         %d                ",ma);
if(ma>=90 && ma<=100)fprintf(f,"A+");
if(ma>=80 && ma<90)fprintf(f,"A");
if(ma>=70 && ma<80)fprintf(f,"B+");
if(ma>=60 && ma<70)fprintf(f,"B");
if(ma>=50 && ma<60)fprintf(f,"C+");
if(ma>=40 && ma<50)fprintf(f,"C");
if(ma>=30 && ma<40)fprintf(f,"D+");
if(ma<30)fprintf(f,"D");


fprintf(f,"\nENGLISH             %d                ",eng);
if(eng>=90 && eng<=100)fprintf(f,"A+");
if(eng>=80 && eng<90)fprintf(f,"A");
if(eng>=70 && eng<80)fprintf(f,"B+");
if(eng>=60 && eng<70)fprintf(f,"B");
if(eng>=50 && eng<60)fprintf(f,"C+");
if(eng>=40 && eng<50)fprintf(f,"C");
if(eng>=30 && eng<40)fprintf(f,"D+");
if(eng<30)fprintf(f,"D");


fprintf(f,"\nHINDI               %d                ",hin);
if(hin>=90 && hin<=100)fprintf(f,"A+");
if(hin>=80 && hin<90)fprintf(f,"A");
if(hin>=70 && hin<80)fprintf(f,"B+");
if(hin>=60 && hin<70)fprintf(f,"B");
if(hin>=50 && hin<60)fprintf(f,"C+");
if(hin>=40 && hin<50)fprintf(f,"C");
if(hin>=30 && hin<40)fprintf(f,"D+");
if(hin<30)fprintf(f,"D");


fprintf(f,"\nMATHS               %d                ",mat);
if(mat>=90 && mat<=100)fprintf(f,"A+");
if(mat>=80 && mat<90)fprintf(f,"A");
if(mat>=70 && mat<80)fprintf(f,"B+");
if(mat>=60 && mat<70)fprintf(f,"B");
if(mat>=50 && mat<60)fprintf(f,"C+");
if(mat>=40 && mat<50)fprintf(f,"C");
if(mat>=30 && mat<40)fprintf(f,"D+");
if(mat<30)fprintf(f,"D");


fprintf(f,"\nPHYSICS             %d                ",phy);
if(phy>=90 && phy<=100)fprintf(f,"A+");
if(phy>=80 && phy<90)fprintf(f,"A");
if(phy>=70 && phy<80)fprintf(f,"B+");
if(phy>=60 && phy<70)fprintf(f,"B");
if(phy>=50 && phy<60)fprintf(f,"C+");
if(phy>=40 && phy<50)fprintf(f,"C");
if(phy>=30 && phy<40)fprintf(f,"D+");
if(phy<30)fprintf(f,"D");


fprintf(f,"\nCHEMISTRY           %d                ",che);
if(che>=90 && che<=100)fprintf(f,"A+");
if(che>=80 && che<90)fprintf(f,"A");
if(che>=70 && che<80)fprintf(f,"B+");
if(che>=60 && che<70)fprintf(f,"B");
if(che>=50 && che<60)fprintf(f,"C+");
if(che>=40 && che<50)fprintf(f,"C");
if(che>=30 && che<40)fprintf(f,"D+");
if(che<30)fprintf(f,"D");


fprintf(f,"\nBIOLOGY             %d                ",bio);
if(bio>=90 && bio<=100)fprintf(f,"A+");
if(bio>=80 && bio<90)fprintf(f,"A");
if(bio>=70 && bio<80)fprintf(f,"B+");
if(bio>=60 && bio<70)fprintf(f,"B");
if(bio>=50 && bio<60)fprintf(f,"C+");
if(bio>=40 && bio<50)fprintf(f,"C");
if(bio>=30 && bio<40)fprintf(f,"D+");
if(bio<30)fprintf(f,"D");


fprintf(f,"\nSOCIAL SCIENCE      %d                ",ss);
if(ss>=90 && ss<=100)fprintf(f,"A+");
if(ss>=80 && ss<90)fprintf(f,"A");
if(ss>=70 && ss<80)fprintf(f,"B+");
if(ss>=60 && ss<70)fprintf(f,"B");
if(ss>=50 && ss<60)fprintf(f,"C+");
if(ss>=40 && ss<50)fprintf(f,"C");
if(ss>=30 && ss<40)fprintf(f,"D+");
if(ss<30)fprintf(f,"D");


fprintf(f,"\nIT                  %d                ",it);
if(it>=90 && it<=100)fprintf(f,"A+");
if(it>=80 && it<90)fprintf(f,"A");
if(it>=70 && it<80)fprintf(f,"B+");
if(it>=60 && it<70)fprintf(f,"B");
if(it>=50 && it<60)fprintf(f,"C+");
if(it>=40 && it<50)fprintf(f,"C");
if(it>=30 && it<40)fprintf(f,"D+");
if(it<30)fprintf(f,"D");

fprintf(f,"\n*************************************************************");
if(mal,ma,eng,hin,mat,phy,che,bio,ss,it>=30)
fprintf(f,"\n Result         :         EHS");
else
fprintf(f,"\n Result         :         NHS");
fprintf(f,"\n*************************************************************");
fprintf(f,"\nEHS=ELIGIBLE FOR HIGHER STUDIES");
fprintf(f,"\nNHS=NOT ELIGIBLE FOR HIGHER STUDIES");
fclose(f);
getch();
}
