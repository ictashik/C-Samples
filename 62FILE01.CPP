#include <iostream.h>
#include <fstream.h>
main ()
{
ofstream a;
a.open("d:\\ict.txt");
a << "ICT\n";
a << "Kottakkal\n";
a << "Malappuram";
a.close();
}