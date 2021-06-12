#include "iostream.h"
#include "fstream.h"
#include "conio.h"
#include "stdio.h"
#include "string.h"
void main()
{
char nm[25],pl[25],ph[25],x[80];
char opt='0';
int len_nm,len_pl,len_ph,a;
while (opt!='4')
{
clrscr();
gotoxy(33,1); cout<<"TELEPHONE CONTACT";
gotoxy(33,2); cout<<"=================\n\n";
cout<<"1. Add New Contact\n";
cout<<"2. View Existing Contact\n";
cout<<"3. Cleat Existing Contacts\n";
cout<<"4. Exit";

cout<<"\n\n Choice [1,2,3,4] : "; opt=getch();
if (opt<'1' || opt>'4')
{
cout<<"Invalid Choice !!!";
getch();
}
else
{
//--------------------
if(opt=='1')  //ADD
{
cout<<"\n\nName      ? :"; gets(nm);
cout<<"Place     ? : ";    gets(pl);
cout<<"Phone No  ? : ";    gets(ph);
len_nm=strlen(nm);
len_pl=strlen(pl);
len_ph=strlen(ph);

ofstream fn1("d:\\contacts.txt",ios::app);
fn1<<nm;
for(a=1;a<26-len_nm;a++)
fn1<<" ";

fn1<<pl;
for(a=1;a<26-len_pl;a++)
fn1<<" ";

fn1<<ph;
for(a=1;a<26-len_ph;a++)
fn1<<" ";

fn1<<"\n";
fn1.close();
cout<<"\n\n This Contact Successfully Added";
getch();
}
//--------------------
if(opt=='2') //View
{
clrscr();
gotoxy(33,1);cout<<"Existing Contact List\n";
cout<<"==============================================================================\n";
ifstream fn1("d:\\contacts.txt");
while (!fn1.eof() )
{
fn1.getline (x,80);
cout << x << endl;
}
getch();
}
//--------------------
if(opt=='3') //Clear
{
cout<<"\n\n Clear All Contacts?, Sure [Y/N] : ";
opt=getch();
if(opt=='y' || opt=='Y')
{
ofstream fn1("d:\\contacts.txt");
fn1<<"Name                     Place                    Phone No\n";
fn1<<"==============================================================================\n";
fn1.close();
cout<<"\n\n All Contacts Successfully Cleared!!!";
getch();
}
}
//--------------------
}
}
}