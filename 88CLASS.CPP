#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class student
{
public:
	int regno;
	char name[20];
	int mark;
	int age;
	float height;
	float weight;
};

void main()
{
clrscr();

student s1;

cout<<"Enter RegNo: ";
cin>>s1.regno;
cout<<"Enter Name: ";
gets(s1.name);
cout<<"Enter Mark: ";
cin>>s1.mark;
cout<<"Enter Age: ";
cin>>s1.age;
cout<<"Enter Height: ";
cin>>s1.height;
cout<<"Enter Weight: ";
cin>>s1.weight;

cout<<"Hello Mr/Mrs. "<<s1.name<<" Reg No: "<<s1.regno<<" Marks :"<<s1.mark;

getch();
}
