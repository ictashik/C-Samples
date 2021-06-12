#include "conio.h"
#include "iostream.h"
#include "stdio.h"
main()
{
char name[30],hname[30],post[30];
int age;
long int phone;
FILE *f;
clrscr();
cout<<"Enter Name "; gets(name);
cout<<"Enter House Name "; gets(hname);
cout<<"Enter Place "; gets(post);
cout<<"Enter Age "; cin>>age;
cout<<"Enter Phone "; cin>>phone;

f=fopen("E:\\ADDRES.txt","w");
fprintf(f,"%s",name);
fprintf(f,"\n%s House",hname);
fprintf(f,"\nP.O. %s",post);
fprintf(f,"\nAge : %d",age);
fprintf(f,"\nPhone : %ld",phone);
fclose(f);
}
