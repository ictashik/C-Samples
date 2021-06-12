#include "conio.h"
#include "iostream.h"
main()
{
char nums[28][10]={" Zero"," One"," Two"," Three"," Four"," Five",
" Six"," Seven"," Eight"," Nine"," Ten"," Eleven"," Twelve"," Thirteen",
" Fourteen"," Fifteen", " Sixteen"," Seventeen"," Eighteen"," Nineteen",
" Twenty"," Thirty"," Forty"," Fifty", " Sixty"," Seventy"," Eighty"," Ninety"};
int n,a,b,c,d;
clrscr();
cout << "Enter a number [1-99] : ";cin >> n;
if(n<21) cout << nums[n];
else if (n<100)
 {
 a=n/10;
 b=n%10;
 cout << nums[a+18];
 if (b!=0) cout << nums[b];
 }
else
 {
 a=n/100;
 b=n%100;
 cout << nums[a] << " Hundred";
 if(b>0 && b<21) cout << " and" << nums[b];
 else if(b>20)
  {
  c=b/10;
  d=b%10;
  cout << " and" << nums[c+18];
  if (d!=0) cout << nums[d];
  }
 }
getch();
}