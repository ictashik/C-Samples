#include "conio.h"
#include "iostream.h"
main()
{
int odd[10],even[10],oc=0,ec=0,os=0,es=0,k,no,limit;
clrscr();
cout << "Limit   : [1-10] : " ; cin >> limit;

if (limit>10) limit=10;

for(k=0;k<limit;k++)
 {
 cout << "No - (" << k+1 << ") ";
 cin >> no;

 if(no%2==0)
   {
   even[ec]=no;
   ec++;
   es=es+no;
   }
  else
   {
   odd[oc]=no;
   oc++;
   os=os+no;
   }
 }
clrscr();
cout << "Odd Numbers  = " << oc << "\n---------------\n";

for(k=0;k<oc;k++)
cout << "\n" << odd[k];

cout <<"\nEven Numbers = " << ec << "\n----------------\n";

for(k=0;k<ec;k++)
cout << even[k] << "\n";

cout << "\n\n================\n Odd Sum = " <<os;
cout << "\n Even Sum  = " << es;
cout << "\n Total Sum = " << es+os;
getch();
}
