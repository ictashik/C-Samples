#include "conio.h"
#include "iostream.h"
main()
{
char nums[28][10]={" Zero"," One"," Two"," Three"," Four"," Five",
" Six"," Seven"," Eight"," Nine"," Ten"," Eleven"," Twelve"," Thirteen",
" Fourteen"," Fifteen", " Sixteen"," Seventeen"," Eighteen"," Nineteen",
" Twenty"," Thirty"," Forty"," Fifty", " Sixty"," Seventy"," Eighty",
" Ninety"};
int n,a,b;
clrscr();
cout << " Enter a number [1-99] : "; cin >> n;
if(n<21)
 cout << nums[n];
else
 {
 a=n/10;
 b=n%10;
 cout << nums[a+18] << nums[b];
 }
getch();
}