#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class Box
{
public:
	int length;
	int breadth;
	int hieght;
};

int main()
{
clrscr();

Box b1;
Box b2;

b1.length=10;
b1.breadth=20;
b1.hieght=30;

b2.length=10;
b2.breadth=20;
b2.hieght=30;

cout<<b1.length+b2.hieght;

getch();
return(0);
}
