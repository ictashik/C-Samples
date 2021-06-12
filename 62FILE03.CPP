#include <conio.h>
#include <iostream.h>
#include <fstream.h>

main ()
{
char x[80];
ifstream fn ("d:\\ict.txt");
clrscr();
while (!fn.eof() )
{
fn.getline (x,80);
cout << x << endl;
}
fn.close();
getch();
}